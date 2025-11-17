//
//  FFStorage.h
//  FFAdsSdk-iOS
//
//
#import "FFDto.h"
#import <Foundation/Foundation.h>

@interface FFStorage : NSObject
@property (nonatomic) int cps;
+(instancetype) shareInstance;
-(void) addStrategyDtos:(NSString *)adsId adDto:(FFDto *) ffDto;
-(FFDto *) getStrategy: (NSString *)adsId;
@end
