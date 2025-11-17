//
//  FFNativeAdManager.h
//  FFAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class FFRequest;
@class FFNativeAd;
@class FFNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol FFNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdsManagerSuccessToLoad:(FFNativeAdManager *)nativeAdsManager;
- (void)nativeAdsManagerdidFailWithError:(NSError *)error;

@end


@interface FFNativeAdManager : NSObject

@property (nonatomic, weak) id<FFNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(FFRequest *)request;

- (void)loadAdDataWithCount:(NSInteger)count;

- (NSArray<FFNativeAd *> * _Nullable)getAllNativeAds;

@end

NS_ASSUME_NONNULL_END
