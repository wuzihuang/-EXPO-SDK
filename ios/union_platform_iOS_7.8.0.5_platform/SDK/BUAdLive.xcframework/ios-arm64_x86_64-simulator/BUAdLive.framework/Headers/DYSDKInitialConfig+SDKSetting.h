//
//  DYSDKInitialConfig+SDKSetting.h
//  DouyinSDK
//
//  Created by ByteDance on 2023/6/14.
//

#import "DYSDKLauncher.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^DYSDKSDKSettingTaskCompletion)(BOOL result, NSError * _Nullable error);

@interface DYSDKInitialConfig (SDKSetting)

/// 启动任务配置的结果回调（可选使用，一般无需关注。使用场景如：在感知启动任务下载必备的配置参数时，希望关注任务的成功失败状态，做一些toast或处理一些逻辑）
/// 需在`launchWithOptions`方法调用前注册
/// completion result 任务结果，YES成功，NO失败；error 失败时的错误信息
@property(nonatomic, copy) DYSDKSDKSettingTaskCompletion settingTaskCompletion;

@end

NS_ASSUME_NONNULL_END
