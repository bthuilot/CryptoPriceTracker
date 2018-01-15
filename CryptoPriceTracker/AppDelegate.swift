//
//  AppDelegate.swift
//  CryptoPriceTracker
//
//  Created by Bryce Thuilot on 1/12/18.
//  Copyright © 2018 Bryce Thuilot. All rights reserved.
//
import Cocoa
import Foundation
import Alamofire

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {
    
    @IBOutlet weak var window: NSWindow!
    
    @IBOutlet weak var coinMenu: NSMenu!
    
    // Set user defaults, to keep track on which coin is being used
    let userDefaults = UserDefaults.standard
    
    
    // Quits application
    @IBAction func quitClicked(_ sender: NSMenuItem) {
        NSApplication.shared.terminate(self)
    }
    
    // Changes currently tracked coin for user defaults
    @objc func changeCoin(newCoin: String){
        userDefaults.set(newCoin, forKey: "coin")
        updatePrice(coin: userDefaults.string(forKey: "coin")!)
        
    }
    
    // Called when user click Change Coin -> BTC
    // Changes currently tracked coin to Bitcoin
    @IBAction func changeToBTC(_ sender: NSMenuItem) {
        changeCoin(newCoin: "BTC")
        let icon = NSImage(named: NSImage.Name(rawValue: "BTCsmall"))
        icon?.isTemplate = true
        tracker.image = icon
    }
    
    // Called when user click Change Coin -> ETH
    // Changes currently tracked coin to Ethereum
    @IBAction func changeToETH(_ sender: NSMenuItem) {
        changeCoin(newCoin: "ETH")
        let icon = NSImage(named: NSImage.Name(rawValue: "ETHsmall"))
        icon?.isTemplate = true
        tracker.image = icon
    }
    
    // Called when user click Change Coin -> LTC
    // Changes currently tracked coin to Litecoin
    @IBAction func changeToLTC(_ sender: NSMenuItem) {
        changeCoin(newCoin: "LTC")
        let icon = NSImage(named: NSImage.Name(rawValue: "LTCsmall"))
        icon?.isTemplate = true
        tracker.image = icon
    }
    
    // Call when user clicks refresh
    // Refreshes price
    @IBAction func refreshPrice(_ sender: NSMenuItem) {
        updatePrice(coin: userDefaults.string(forKey: "coin")!)
    }
    

    // Set up status bar
    let tracker = NSStatusBar.system.statusItem(withLength:NSStatusItem.variableLength)
    
    @objc func updatePriceTimer(timer: Timer){
        // Get coin from timer
        let coin = timer.userInfo as! String
        
        // call to updatePrice
        self.updatePrice(coin: coin)
        
    }
    
    @objc func updatePrice(coin: String){
        
        // Url used for HTTP Get call
        Alamofire.request("https://min-api.cryptocompare.com/data/price?fsym=\(coin)&tsyms=USD").responseJSON { response in
            
            // Serialize JSON
            if let json = response.result.value as? [String: Any],
                let currentPrice = json["USD"] as? [[String: Any]]{
                self.setPrice(price: "\(currentPrice)")
            }
        }
    }


    func applicationDidFinishLaunching(_ aNotification: Notification) {
        // Add a temp title
        tracker.title = "Checking..."
        
        // Set value for icon
        let icon = NSImage(named: NSImage.Name(rawValue: "BTCsmall"))
        icon?.isTemplate = true
        tracker.image = icon
        
        // Add drop down menu
        tracker.menu = coinMenu
        
        // Set a default value if it is nil
        if userDefaults.string(forKey: "coin") == nil{
            userDefaults.set("BTC", forKey: "coin")
        }
        
        
        // Set up timer to check every 5 seconds
        _ = Timer.scheduledTimer(timeInterval: 5.0, target: self, selector: #selector(updatePriceTimer), userInfo: userDefaults.string(forKey: "coin"), repeats: true)
    }
    
    // Sets the current price of checked coin, given a String of current price
    func setPrice(price: String){
       self.tracker.title = price
    }
    
    func applicationWillTerminate(_ aNotification: Notification) {
        // Insert code here to tear down your application
    }


}

