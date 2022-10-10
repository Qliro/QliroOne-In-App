#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef QLIROONE_SWIFT_H
#define QLIROONE_SWIFT_H
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

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="QliroOne",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_CLASS("_TtC8QliroOne7Address")
@interface Address : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable firstName;
@property (nonatomic, readonly, copy) NSString * _Nullable lastName;
@property (nonatomic, readonly, copy) NSString * _Nullable street;
@property (nonatomic, readonly, copy) NSString * _Nullable careOf;
@property (nonatomic, readonly, copy) NSString * _Nullable city;
@property (nonatomic, readonly, copy) NSString * _Nullable postalCode;
@property (nonatomic, readonly) BOOL isMasked;
@end


SWIFT_CLASS("_TtC8QliroOne8Customer")
@interface Customer : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable email;
@property (nonatomic, readonly, copy) NSString * _Nullable mobileNumber;
@property (nonatomic, readonly, strong) Address * _Nullable address;
@property (nonatomic, readonly, copy) NSString * _Nullable personalNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable organizationNumber;
@end

typedef SWIFT_ENUM(NSInteger, Module, open) {
/// Header saying “Thank you for your purchase”.
  ModuleHEADER = 0,
/// Total price and order summary.
  ModuleTOTAL_PRICE = 1,
/// Customer contact details and address used in the purchase.
  ModuleCUSTOMER_DETAILS = 2,
/// The selected shipping method. Will only be shown if Qliro One handled the shipping.
  ModuleSHIPPING_METHOD = 3,
};

@class OrderItem;

SWIFT_CLASS("_TtC8QliroOne5Order")
@interface Order : NSObject
@property (nonatomic, readonly) double totalPrice;
@property (nonatomic, readonly, copy) NSArray<OrderItem *> * _Nonnull orderItems;
@end


SWIFT_CLASS("_TtC8QliroOne9OrderItem")
@interface OrderItem : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull merchantReference;
@property (nonatomic, readonly) double pricePerItemIncVat;
@property (nonatomic, readonly) NSInteger quantity;
@end


SWIFT_CLASS("_TtC8QliroOne13PaymentMethod")
@interface PaymentMethod : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable method;
@property (nonatomic, readonly, copy) NSString * _Nullable subtype;
@property (nonatomic, readonly) double price;
@property (nonatomic, readonly) double priceExVat;
@end


SWIFT_CLASS("_TtC8QliroOne23PurchaseRedirectOptions")
@interface PurchaseRedirectOptions : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull merchantConfirmationUrl;
@end

@protocol QliroOneListener;
@class QliroOneWebView;
@class NSCoder;

SWIFT_CLASS("_TtC8QliroOne16QliroOneCheckout")
@interface QliroOneCheckout : UIView
@property (nonatomic, strong) id <QliroOneListener> _Nullable qliroOneListener;
@property (nonatomic, readonly, strong) QliroOneWebView * _Nonnull webView;
@property (nonatomic) BOOL isScrollEnabled;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne))
- (void)loadOrderHtmlWithHtml:(NSString * _Nonnull)html;
@end

@class UIScrollView;

@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne)) <UIScrollViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end



@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne))
- (void)onScrollWithContainerHeight:(NSInteger)containerHeight offset:(NSInteger)offset;
- (void)addSessionExpiredCallback;
- (void)removeSessionExpiredCallback;
- (void)addOrderUpdateCallback;
- (void)removeOrderUpdateCallback;
- (void)lock;
- (void)unlock;
- (void)enableCheckoutScrollingWithEnabled:(BOOL)enabled;
- (void)excludeResultModulesWithModules:(NSArray<NSString *> * _Nonnull)modules;
@end

@class Shipping;

SWIFT_PROTOCOL("_TtP8QliroOne16QliroOneListener_")
@protocol QliroOneListener
/// Called when Qliro One is fully loaded and is ready to get interacted with by the customer.
- (void)onCheckoutLoaded;
/// Called when a customer has updated their information
/// \param customer The updated customer data
///
- (void)onCustomerInfoChangedWithCustomer:(Customer * _Nonnull)customer;
/// This callback activates if a customer clicks the “Not you?” option or chooses to re-authenticate using their personal number during checkout.
/// [Read more]{@link <a href="https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#oncustomerdeauthenticating()">https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#oncustomerdeauthenticating()</a>}
/// *
- (void)onCustomerDeauthenticating;
/// Called when the the user changes payment method or subtype. Use this for applying payment method based discounts.
/// \param paymentMethod The updated payment method
///
- (void)onPaymentMethodChangedWithPaymentMethod:(PaymentMethod * _Nonnull)paymentMethod;
/// Called when a payment has been declined
/// \param declineReason The reason
///
- (void)onPaymentDeclinedWithDeclineReason:(NSString * _Nonnull)declineReason declineReasonMessage:(NSString * _Nullable)declineReasonMessage;
/// Called when when a payment session has started
- (void)onPaymentProcessStart;
/// Called when when a payment session has ended
- (void)onPaymentProcessEnd;
/// If the authorization token expires during a session, the customer will be informed inside Qliro One.
/// When the customer closes the dialog, the top window will be refreshed.
/// Using onSessionExpired is optional and overrides this behavior, replacing it with the execution of updateToken.
/// [Read more]{@link <a href="https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#onsessionexpired()">https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#onsessionexpired()</a>}
/// *
- (void)onSessionExpired;
/// Called when the shipping method has changed
/// \param shipping The updated shipping data
///
- (void)onShippingMethodChangedWithShipping:(Shipping * _Nonnull)shipping;
/// This functionality will be activated if shipping options are provided in the createOrder request and the shipping functionality is used in Qliro One.
/// When the customer changes shipping option so that the shipping fee is affected, the callback will be executed with the new shipping price and new total price for shipping as arguments.
/// The total price includes amounts for the selected additional shipping services. This way the merchant is able to apply amount-based discounts that take the shipping price into account.
/// seealso:
/// <a href="https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#onshippingpricechanged()">Read more</a>
/// <ul>
///   <li>
///   </li>
/// </ul>
/// \param newShippingPrice - The updated price 
///
/// \param newTotalShippingPrice - The updated total price 
///
- (void)onShippingPriceChangedWithNewShippingPrice:(double)newShippingPrice newTotalShippingPrice:(double)newTotalShippingPrice;
/// Called when Qliro One has synced its orders.
/// This might be called multiple times and should return true when
/// the Qliro One and the app is in sync. Returning true will unlock the Checkout.
/// \param order The order
///
- (void)onOrderUpdatedWithOrder:(Order * _Nonnull)order;
/// Called when Qliro has finished your purchase action
/// <ul>
///   <li>
///   </li>
/// </ul>
/// \param options - An object with data to be used to customize the redirect to your liking. 
///
- (void)onCompletePurchaseRedirectWithOptions:(PurchaseRedirectOptions * _Nonnull)options;
/// Called when Qliro One changes its height
- (void)onCheckoutHeightChangedWithHeight:(NSInteger)height;
@end


@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne)) <QliroOneListener>
- (void)onCheckoutHeightChangedWithHeight:(NSInteger)height;
- (void)onPaymentMethodChangedWithPaymentMethod:(PaymentMethod * _Nonnull)paymentMethod;
- (void)onPaymentProcessStart;
- (void)onPaymentProcessEnd;
- (void)onSessionExpired;
- (void)onPaymentDeclinedWithDeclineReason:(NSString * _Nonnull)declineReason declineReasonMessage:(NSString * _Nullable)declineReasonMessage;
- (void)onShippingMethodChangedWithShipping:(Shipping * _Nonnull)shipping;
- (void)onShippingPriceChangedWithNewShippingPrice:(double)newShippingPrice newTotalShippingPrice:(double)newTotalShippingPrice;
- (void)onOrderUpdatedWithOrder:(Order * _Nonnull)order;
- (void)onCheckoutLoaded;
- (void)onCustomerInfoChangedWithCustomer:(Customer * _Nonnull)customer;
- (void)onCompletePurchaseRedirectWithOptions:(PurchaseRedirectOptions * _Nonnull)options;
- (void)onCustomerDeauthenticating;
@end


@class WKWebViewConfiguration;

SWIFT_CLASS("_TtC8QliroOne15QliroOneWebView")
@interface QliroOneWebView : WKWebView
- (nonnull instancetype)initWithFrame:(CGRect)frame configuration:(WKWebViewConfiguration * _Nonnull)configuration SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


@class WKNavigationAction;

@interface QliroOneWebView (SWIFT_EXTENSION(QliroOne)) <WKNavigationDelegate>
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
@end

@class WKWindowFeatures;

@interface QliroOneWebView (SWIFT_EXTENSION(QliroOne)) <WKUIDelegate>
- (WKWebView * _Nullable)webView:(WKWebView * _Nonnull)webView createWebViewWithConfiguration:(WKWebViewConfiguration * _Nonnull)configuration forNavigationAction:(WKNavigationAction * _Nonnull)navigationAction windowFeatures:(WKWindowFeatures * _Nonnull)windowFeatures SWIFT_WARN_UNUSED_RESULT;
@end

@class WKUserContentController;
@class WKScriptMessage;

@interface QliroOneWebView (SWIFT_EXTENSION(QliroOne)) <WKScriptMessageHandler>
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end




SWIFT_CLASS("_TtC8QliroOne8Shipping")
@interface Shipping : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable method;
@property (nonatomic, readonly, copy) NSString * _Nullable secondaryOption;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable additionalShippingServices;
@property (nonatomic, readonly) double price;
@property (nonatomic, readonly) double priceExVat;
@property (nonatomic, readonly) double totalShippingPrice;
@property (nonatomic, readonly) double totalShippingPriceExVat;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef QLIROONE_SWIFT_H
#define QLIROONE_SWIFT_H
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

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="QliroOne",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_CLASS("_TtC8QliroOne7Address")
@interface Address : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable firstName;
@property (nonatomic, readonly, copy) NSString * _Nullable lastName;
@property (nonatomic, readonly, copy) NSString * _Nullable street;
@property (nonatomic, readonly, copy) NSString * _Nullable careOf;
@property (nonatomic, readonly, copy) NSString * _Nullable city;
@property (nonatomic, readonly, copy) NSString * _Nullable postalCode;
@property (nonatomic, readonly) BOOL isMasked;
@end


SWIFT_CLASS("_TtC8QliroOne8Customer")
@interface Customer : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable email;
@property (nonatomic, readonly, copy) NSString * _Nullable mobileNumber;
@property (nonatomic, readonly, strong) Address * _Nullable address;
@property (nonatomic, readonly, copy) NSString * _Nullable personalNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable organizationNumber;
@end

typedef SWIFT_ENUM(NSInteger, Module, open) {
/// Header saying “Thank you for your purchase”.
  ModuleHEADER = 0,
/// Total price and order summary.
  ModuleTOTAL_PRICE = 1,
/// Customer contact details and address used in the purchase.
  ModuleCUSTOMER_DETAILS = 2,
/// The selected shipping method. Will only be shown if Qliro One handled the shipping.
  ModuleSHIPPING_METHOD = 3,
};

@class OrderItem;

SWIFT_CLASS("_TtC8QliroOne5Order")
@interface Order : NSObject
@property (nonatomic, readonly) double totalPrice;
@property (nonatomic, readonly, copy) NSArray<OrderItem *> * _Nonnull orderItems;
@end


SWIFT_CLASS("_TtC8QliroOne9OrderItem")
@interface OrderItem : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull merchantReference;
@property (nonatomic, readonly) double pricePerItemIncVat;
@property (nonatomic, readonly) NSInteger quantity;
@end


SWIFT_CLASS("_TtC8QliroOne13PaymentMethod")
@interface PaymentMethod : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable method;
@property (nonatomic, readonly, copy) NSString * _Nullable subtype;
@property (nonatomic, readonly) double price;
@property (nonatomic, readonly) double priceExVat;
@end


SWIFT_CLASS("_TtC8QliroOne23PurchaseRedirectOptions")
@interface PurchaseRedirectOptions : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull merchantConfirmationUrl;
@end

@protocol QliroOneListener;
@class QliroOneWebView;
@class NSCoder;

SWIFT_CLASS("_TtC8QliroOne16QliroOneCheckout")
@interface QliroOneCheckout : UIView
@property (nonatomic, strong) id <QliroOneListener> _Nullable qliroOneListener;
@property (nonatomic, readonly, strong) QliroOneWebView * _Nonnull webView;
@property (nonatomic) BOOL isScrollEnabled;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne))
- (void)loadOrderHtmlWithHtml:(NSString * _Nonnull)html;
@end

@class UIScrollView;

@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne)) <UIScrollViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end



@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne))
- (void)onScrollWithContainerHeight:(NSInteger)containerHeight offset:(NSInteger)offset;
- (void)addSessionExpiredCallback;
- (void)removeSessionExpiredCallback;
- (void)addOrderUpdateCallback;
- (void)removeOrderUpdateCallback;
- (void)lock;
- (void)unlock;
- (void)enableCheckoutScrollingWithEnabled:(BOOL)enabled;
- (void)excludeResultModulesWithModules:(NSArray<NSString *> * _Nonnull)modules;
@end

@class Shipping;

SWIFT_PROTOCOL("_TtP8QliroOne16QliroOneListener_")
@protocol QliroOneListener
/// Called when Qliro One is fully loaded and is ready to get interacted with by the customer.
- (void)onCheckoutLoaded;
/// Called when a customer has updated their information
/// \param customer The updated customer data
///
- (void)onCustomerInfoChangedWithCustomer:(Customer * _Nonnull)customer;
/// This callback activates if a customer clicks the “Not you?” option or chooses to re-authenticate using their personal number during checkout.
/// [Read more]{@link <a href="https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#oncustomerdeauthenticating()">https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#oncustomerdeauthenticating()</a>}
/// *
- (void)onCustomerDeauthenticating;
/// Called when the the user changes payment method or subtype. Use this for applying payment method based discounts.
/// \param paymentMethod The updated payment method
///
- (void)onPaymentMethodChangedWithPaymentMethod:(PaymentMethod * _Nonnull)paymentMethod;
/// Called when a payment has been declined
/// \param declineReason The reason
///
- (void)onPaymentDeclinedWithDeclineReason:(NSString * _Nonnull)declineReason declineReasonMessage:(NSString * _Nullable)declineReasonMessage;
/// Called when when a payment session has started
- (void)onPaymentProcessStart;
/// Called when when a payment session has ended
- (void)onPaymentProcessEnd;
/// If the authorization token expires during a session, the customer will be informed inside Qliro One.
/// When the customer closes the dialog, the top window will be refreshed.
/// Using onSessionExpired is optional and overrides this behavior, replacing it with the execution of updateToken.
/// [Read more]{@link <a href="https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#onsessionexpired()">https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#onsessionexpired()</a>}
/// *
- (void)onSessionExpired;
/// Called when the shipping method has changed
/// \param shipping The updated shipping data
///
- (void)onShippingMethodChangedWithShipping:(Shipping * _Nonnull)shipping;
/// This functionality will be activated if shipping options are provided in the createOrder request and the shipping functionality is used in Qliro One.
/// When the customer changes shipping option so that the shipping fee is affected, the callback will be executed with the new shipping price and new total price for shipping as arguments.
/// The total price includes amounts for the selected additional shipping services. This way the merchant is able to apply amount-based discounts that take the shipping price into account.
/// seealso:
/// <a href="https://developers.qliro.com/docs/qliro-one/frontend-features/listeners#onshippingpricechanged()">Read more</a>
/// <ul>
///   <li>
///   </li>
/// </ul>
/// \param newShippingPrice - The updated price 
///
/// \param newTotalShippingPrice - The updated total price 
///
- (void)onShippingPriceChangedWithNewShippingPrice:(double)newShippingPrice newTotalShippingPrice:(double)newTotalShippingPrice;
/// Called when Qliro One has synced its orders.
/// This might be called multiple times and should return true when
/// the Qliro One and the app is in sync. Returning true will unlock the Checkout.
/// \param order The order
///
- (void)onOrderUpdatedWithOrder:(Order * _Nonnull)order;
/// Called when Qliro has finished your purchase action
/// <ul>
///   <li>
///   </li>
/// </ul>
/// \param options - An object with data to be used to customize the redirect to your liking. 
///
- (void)onCompletePurchaseRedirectWithOptions:(PurchaseRedirectOptions * _Nonnull)options;
/// Called when Qliro One changes its height
- (void)onCheckoutHeightChangedWithHeight:(NSInteger)height;
@end


@interface QliroOneCheckout (SWIFT_EXTENSION(QliroOne)) <QliroOneListener>
- (void)onCheckoutHeightChangedWithHeight:(NSInteger)height;
- (void)onPaymentMethodChangedWithPaymentMethod:(PaymentMethod * _Nonnull)paymentMethod;
- (void)onPaymentProcessStart;
- (void)onPaymentProcessEnd;
- (void)onSessionExpired;
- (void)onPaymentDeclinedWithDeclineReason:(NSString * _Nonnull)declineReason declineReasonMessage:(NSString * _Nullable)declineReasonMessage;
- (void)onShippingMethodChangedWithShipping:(Shipping * _Nonnull)shipping;
- (void)onShippingPriceChangedWithNewShippingPrice:(double)newShippingPrice newTotalShippingPrice:(double)newTotalShippingPrice;
- (void)onOrderUpdatedWithOrder:(Order * _Nonnull)order;
- (void)onCheckoutLoaded;
- (void)onCustomerInfoChangedWithCustomer:(Customer * _Nonnull)customer;
- (void)onCompletePurchaseRedirectWithOptions:(PurchaseRedirectOptions * _Nonnull)options;
- (void)onCustomerDeauthenticating;
@end


@class WKWebViewConfiguration;

SWIFT_CLASS("_TtC8QliroOne15QliroOneWebView")
@interface QliroOneWebView : WKWebView
- (nonnull instancetype)initWithFrame:(CGRect)frame configuration:(WKWebViewConfiguration * _Nonnull)configuration SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


@class WKNavigationAction;

@interface QliroOneWebView (SWIFT_EXTENSION(QliroOne)) <WKNavigationDelegate>
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
@end

@class WKWindowFeatures;

@interface QliroOneWebView (SWIFT_EXTENSION(QliroOne)) <WKUIDelegate>
- (WKWebView * _Nullable)webView:(WKWebView * _Nonnull)webView createWebViewWithConfiguration:(WKWebViewConfiguration * _Nonnull)configuration forNavigationAction:(WKNavigationAction * _Nonnull)navigationAction windowFeatures:(WKWindowFeatures * _Nonnull)windowFeatures SWIFT_WARN_UNUSED_RESULT;
@end

@class WKUserContentController;
@class WKScriptMessage;

@interface QliroOneWebView (SWIFT_EXTENSION(QliroOne)) <WKScriptMessageHandler>
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end




SWIFT_CLASS("_TtC8QliroOne8Shipping")
@interface Shipping : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable method;
@property (nonatomic, readonly, copy) NSString * _Nullable secondaryOption;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable additionalShippingServices;
@property (nonatomic, readonly) double price;
@property (nonatomic, readonly) double priceExVat;
@property (nonatomic, readonly) double totalShippingPrice;
@property (nonatomic, readonly) double totalShippingPriceExVat;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
