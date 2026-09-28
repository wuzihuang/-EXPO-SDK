//
//  DYSDKLauncher.h
//  DouyinSDK
//
//  Created by 杨启航 on 2022/10/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DYSDKLauncher.h"

NS_ASSUME_NONNULL_BEGIN

/// 启动协议，有特殊启动需求的 service 需实现此协议，然后注册到 DYSDKLaunchRegister
@protocol DYSDKLaunchProtocol <NSObject>

@optional

/// 启动时会将宿主 launchOptions 传入
/// - Parameter launchOptions: 宿主 launchOptions
/// - Parameter config: 公用的初始化参数
- (void)dysdk_launchWithOptions:(nullable NSDictionary<UIApplicationLaunchOptionsKey, id> *)launchOptions config:(DYSDKInitialConfig *)config;

/// 调用完所有的 dysdk_launchWithOptions:config: 后开始调用
/// 注意：并不代表完成了所有的初始化工作，异步的初始化任务仍需自己处理完成时机
/// - Parameter config: 公用的初始化参数
- (void)dysdk_didFinishLaunchWithConfig:(DYSDKInitialConfig *)config;

- (void)dysdk_startWithConfig:(DYSDKInitialConfig *)config;

- (void)dysdk_notifyBUADSdkLoadFinish:(BOOL)result;

@end


/// 特殊启动需求需注册到此，在执行完 load 和 launch 之后，会按协议调用此处注册的 launchObject
@interface DYSDKLaunchRegister : NSObject


/// 注册 launchObject
/// - Parameter launchObject: 需遵循 DYSDKLaunchProtocol
+ (void)registerLaunchObject:(id<DYSDKLaunchProtocol>)launchObject;


/// 获取已注册的所有 launchObject
+ (NSArray<id<DYSDKLaunchProtocol>> *)allLaunchObjects;

@end

NS_ASSUME_NONNULL_END
