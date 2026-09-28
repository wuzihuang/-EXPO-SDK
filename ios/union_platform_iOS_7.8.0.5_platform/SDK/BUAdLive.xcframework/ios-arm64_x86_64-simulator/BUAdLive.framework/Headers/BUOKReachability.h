//
//  OKReachability.h
//  OneKit
//
//  Created by bob on 2020/4/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(int32_t, PBUOKReachabilityStatus) {
    PBUOKReachabilityStatusNotReachable    = 0,
    PBUOKReachabilityStatusReachableViaWiFi,
    PBUOKReachabilityStatusReachableViaWWAN
};

FOUNDATION_EXTERN NSString *PBUOKNotificationReachabilityChanged;

@interface BUOKReachability : NSObject

@property (nonatomic, assign, readonly) BOOL telephoneInfoIndeterminateStatus;

+ (instancetype)sharedInstance;

- (void)startNotifier;

- (PBUOKReachabilityStatus)currentReachabilityStatus;

@end

NS_ASSUME_NONNULL_END
