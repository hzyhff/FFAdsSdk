//
//  FFBanner.h
//  FFAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class FFRequest;
@class FFBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol FFBannerDelegate <NSObject>

@optional

- (void)onAutoRefreshed:(FFBanner *)bannerAdView;

- (void)onAutoRefreshFail:(NSError *)error;

- (void)onBannerLoadSuccess:(FFBanner *)bannerAdView;

- (void)onBannerLoadError:(NSError *)error;

- (void)onBannerShown;

- (void)onBannerClicked;

- (void)onWillLeaveApplication;

- (void)onWillOpenFullScreen;
- (void)onCloseFullScreen;
- (void)onDidRemoved;
@end

@interface FFBanner : NSObject

@property (nonatomic, weak) id<FFBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(FFRequest *)request;

- (instancetype)initWithRequest:(FFRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadBannerAd;
- (BOOL)isReady;
- (UIView *)getView;
@end
NS_ASSUME_NONNULL_END
