// Generated by Apple Swift version 4.0.3 effective-3.2.3 (swiftlang-900.0.74.1 clang-900.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("Alamofire")
@class NSURLSession;
@class NSURLSessionTask;
@class NSHTTPURLResponse;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSInputStream;

/// The task delegate is responsible for handling all delegate callbacks for the underlying task as well as
/// executing all operations attached to the serial operation queue upon task completion.
SWIFT_CLASS("_TtC9Alamofire12TaskDelegate")
@interface TaskDelegate : NSObject
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task needNewBodyStream:(void (^ _Nonnull)(NSInputStream * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSURLSessionDownloadTask;
@class NSCachedURLResponse;

SWIFT_CLASS("_TtC9Alamofire16DataTaskDelegate")
@interface DataTaskDelegate : TaskDelegate <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didBecomeDownloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask willCacheResponse:(NSCachedURLResponse * _Nonnull)proposedResponse completionHandler:(void (^ _Nonnull)(NSCachedURLResponse * _Nullable))completionHandler;
@end


SWIFT_CLASS("_TtC9Alamofire20DownloadTaskDelegate")
@interface DownloadTaskDelegate : TaskDelegate <NSURLSessionDownloadDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
@end




/// Responsible for handling all delegate callbacks for the underlying session.
SWIFT_CLASS("_TtC9Alamofire15SessionDelegate")
@interface SessionDelegate : NSObject
/// Initializes the <code>SessionDelegate</code> instance.
///
/// returns:
/// The new <code>SessionDelegate</code> instance.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Returns a <code>Bool</code> indicating whether the <code>SessionDelegate</code> implements or inherits a method that can respond
/// to a specified message.
/// \param selector A selector that identifies a message.
///
///
/// returns:
/// <code>true</code> if the receiver implements or inherits a method that can respond to selector, otherwise <code>false</code>.
- (BOOL)respondsToSelector:(SEL _Nonnull)selector SWIFT_WARN_UNUSED_RESULT;
@end


@interface SessionDelegate (SWIFT_EXTENSION(Alamofire)) <NSURLSessionDownloadDelegate>
/// Tells the delegate that a download task has finished downloading.
/// \param session The session containing the download task that finished.
///
/// \param downloadTask The download task that finished.
///
/// \param location A file URL for the temporary file. Because the file is temporary, you must either
/// open the file for reading or move it to a permanent location in your app’s sandbox
/// container directory before returning from this delegate method.
///
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
/// Periodically informs the delegate about the download’s progress.
/// \param session The session containing the download task.
///
/// \param downloadTask The download task.
///
/// \param bytesWritten The number of bytes transferred since the last time this delegate
/// method was called.
///
/// \param totalBytesWritten The total number of bytes transferred so far.
///
/// \param totalBytesExpectedToWrite The expected length of the file, as provided by the Content-Length
/// header. If this header was not provided, the value is
/// <code>NSURLSessionTransferSizeUnknown</code>.
///
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
/// Tells the delegate that the download task has resumed downloading.
/// \param session The session containing the download task that finished.
///
/// \param downloadTask The download task that resumed. See explanation in the discussion.
///
/// \param fileOffset If the file’s cache policy or last modified date prevents reuse of the
/// existing content, then this value is zero. Otherwise, this value is an
/// integer representing the number of bytes on disk that do not need to be
/// retrieved again.
///
/// \param expectedTotalBytes The expected length of the file, as provided by the Content-Length header.
/// If this header was not provided, the value is NSURLSessionTransferSizeUnknown.
///
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
@end


@interface SessionDelegate (SWIFT_EXTENSION(Alamofire)) <NSURLSessionDataDelegate>
/// Tells the delegate that the data task received the initial reply (headers) from the server.
/// \param session The session containing the data task that received an initial reply.
///
/// \param dataTask The data task that received an initial reply.
///
/// \param response A URL response object populated with headers.
///
/// \param completionHandler A completion handler that your code calls to continue the transfer, passing a
/// constant to indicate whether the transfer should continue as a data task or
/// should become a download task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
/// Tells the delegate that the data task was changed to a download task.
/// \param session The session containing the task that was replaced by a download task.
///
/// \param dataTask The data task that was replaced by a download task.
///
/// \param downloadTask The new download task that replaced the data task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didBecomeDownloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask;
/// Tells the delegate that the data task has received some of the expected data.
/// \param session The session containing the data task that provided data.
///
/// \param dataTask The data task that provided data.
///
/// \param data A data object containing the transferred data.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
/// Asks the delegate whether the data (or upload) task should store the response in the cache.
/// \param session The session containing the data (or upload) task.
///
/// \param dataTask The data (or upload) task.
///
/// \param proposedResponse The default caching behavior. This behavior is determined based on the current
/// caching policy and the values of certain received headers, such as the Pragma
/// and Cache-Control headers.
///
/// \param completionHandler A block that your handler must call, providing either the original proposed
/// response, a modified version of that response, or NULL to prevent caching the
/// response. If your delegate implements this method, it must call this completion
/// handler; otherwise, your app leaks memory.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask willCacheResponse:(NSCachedURLResponse * _Nonnull)proposedResponse completionHandler:(void (^ _Nonnull)(NSCachedURLResponse * _Nullable))completionHandler;
@end


@interface SessionDelegate (SWIFT_EXTENSION(Alamofire)) <NSURLSessionDelegate>
/// Tells the delegate that the session has been invalidated.
/// \param session The session object that was invalidated.
///
/// \param error The error that caused invalidation, or nil if the invalidation was explicit.
///
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
/// Requests credentials from the delegate in response to a session-level authentication request from the
/// remote server.
/// \param session The session containing the task that requested authentication.
///
/// \param challenge An object that contains the request for authentication.
///
/// \param completionHandler A handler that your delegate method must call providing the disposition
/// and credential.
///
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
/// Tells the delegate that all messages enqueued for a session have been delivered.
/// \param session The session that no longer has any outstanding requests.
///
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end


@interface SessionDelegate (SWIFT_EXTENSION(Alamofire)) <NSURLSessionTaskDelegate>
/// Tells the delegate that the remote server requested an HTTP redirect.
/// \param session The session containing the task whose request resulted in a redirect.
///
/// \param task The task whose request resulted in a redirect.
///
/// \param response An object containing the server’s response to the original request.
///
/// \param request A URL request object filled out with the new location.
///
/// \param completionHandler A closure that your handler should call with either the value of the request
/// parameter, a modified URL request object, or NULL to refuse the redirect and
/// return the body of the redirect response.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
/// Requests credentials from the delegate in response to an authentication request from the remote server.
/// \param session The session containing the task whose request requires authentication.
///
/// \param task The task whose request requires authentication.
///
/// \param challenge An object that contains the request for authentication.
///
/// \param completionHandler A handler that your delegate method must call providing the disposition
/// and credential.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
/// Tells the delegate when a task requires a new request body stream to send to the remote server.
/// \param session The session containing the task that needs a new body stream.
///
/// \param task The task that needs a new body stream.
///
/// \param completionHandler A completion handler that your delegate method should call with the new body stream.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task needNewBodyStream:(void (^ _Nonnull)(NSInputStream * _Nullable))completionHandler;
/// Periodically informs the delegate of the progress of sending body content to the server.
/// \param session The session containing the data task.
///
/// \param task The data task.
///
/// \param bytesSent The number of bytes sent since the last time this delegate method was called.
///
/// \param totalBytesSent The total number of bytes sent so far.
///
/// \param totalBytesExpectedToSend The expected length of the body data.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
/// Tells the delegate that the task finished transferring data.
/// \param session The session containing the task whose request finished transferring data.
///
/// \param task The task whose request finished transferring data.
///
/// \param error If an error occurred, an error object indicating how the transfer failed, otherwise nil.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
@end





SWIFT_CLASS("_TtC9Alamofire18UploadTaskDelegate")
@interface UploadTaskDelegate : DataTaskDelegate
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
