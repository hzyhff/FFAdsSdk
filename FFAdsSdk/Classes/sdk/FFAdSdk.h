//
//  FFAdSdk.h
//  FFAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, FFAcceptStatus) {
    FFUnknown = 0,
    FFAccepted,
    FFDenied,
};

@interface FFAdSdk : NSObject
+(instancetype) shareInstance;
-(void)initWithAppId:(NSString *)appId;
-(void)setDebugMode:(BOOL)enable;
-(void)setGDPRStatus:(FFAcceptStatus)status;
-(void) startAdPrev:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end
