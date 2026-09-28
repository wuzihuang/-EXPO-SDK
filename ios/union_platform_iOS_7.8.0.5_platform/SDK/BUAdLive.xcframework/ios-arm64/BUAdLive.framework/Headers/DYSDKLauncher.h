//
//  DYSDKLauncher.h
//  DouyinSDK
//
//  Created by 杨启航 on 2022/10/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DYSDKInitialConfig : NSObject

@property (nonatomic, nonnull, copy) NSString *hostAppID;

/// 宿主是否有其它业务也使用了TTSDK，如果不确认，不需要传值；
@property (nonatomic, assign) BOOL isUnionTTSDK;

@end

@interface DYSDKLauncher : NSObject

/// 启动统一入口，启动时宿主调用
/// - Parameter launchOptions: 就是AppDelegate 里的 didFinishLaunch: 传入的 launchOptions
+ (void)launchWithOptions:(nullable NSDictionary<UIApplicationLaunchOptionsKey, id> *)launchOptions config:(DYSDKInitialConfig *)config;

/// 收集用户信息入口，调用后 SDK 开始收集用户相关信息，准备提供服务
+ (void)start;

+ (void)notifyBUADSdkLoadFinish:(BOOL)result;

/// 获取初始化时传入的config
+ (DYSDKInitialConfig *)initialConfig;

@end


NS_ASSUME_NONNULL_END
