//
//  BUMAdLoadingParams.h
//  BUAdSDK
//
//  Created by 🦁 on 2022/12/16.
//

#import <Foundation/Foundation.h>

#pragma mark - adapter的load方法中parameter可能携带的key
/// 聚合广告位ID，NSString
extern NSString *const BUMAdLoadingParamMediationRitID;

/// ADN广告位ID，NSString
extern NSString *const BUMAdLoadingParamMediaRitID;

/// 聚合广告请求ID，NSString
extern NSString *const BUMAdLoadingParamLinkID;

/// 场景ID，NSString
extern NSString *const BUMAdLoadingParamScenarioID;

/// 价值分组规则ID，NSString
extern NSString *const BUMAdLoadingParamUValueRuleId;

extern NSString *const BUMAdLoadingParamGroupType;

/// ADN广告位名称，平台配置名称，NSString
extern NSString *const BUMAdLoadingParamMediaName;

/// 请求广告的渲染类型，NSNumber/NSInteger，0 无需区分渲染类型; 1 ADN提供渲染; 2 开发者自渲染
extern NSString *const BUMAdLoadingParamExpressAdType;

/// 是否请求模板广告的描述信息，NSDictionary
extern NSString *const BUMAdLoadingParamExpressAdTypeInfos;

/// 广告位中混用其他类型代码位时的代码位类型，0-未混用 3-banner类型 4-信息流类型
extern NSString *const BUMAdLoadingParamAdSubType;

/// 媒体专属扩展参数， NSDictionary
extern NSString *const BUMAdLoadingParamMediaExtra;

/// 包名,目前仅Baidu有效
extern NSString *const BUMAdLoadingParamPackageName;

/// 自定义Adapter扩展参数， NSString，JSON格式
extern NSString *const BUMAdLoadingParamCustomJson;

/// 获取竞价类型，NSNumber/NSInteger/BUMBiddingType，0-普通广告位 1-Client竞价广告位 100-P层数据位，仅支持此3种
extern NSString *const BUMAdLoadingParamBiddingType;

/// （Banner）期望广告尺寸，NSValue/CGSize
extern NSString *const BUMAdLoadingParamBNExpectSize;

/// （插屏广告）期望广告尺寸，NSValue/CGSize
extern NSString *const BUMAdLoadingParamISExpectSize;

/// （插屏广告）是否是静音，NSNumber/BOOL
extern NSString *const BUMAdLoadingParamISIsMute;

/// （全屏视频）是否是静音，NSNumber/BOOL
extern NSString *const BUMAdLoadingParamFVIsMute;

/// （全屏视频）视频显示方向，NSNumber/NSInteger，0-竖屏，1-横屏，默认竖屏
extern NSString *const BUMAdLoadingParamFVShowDirection;

/// （激励视频）是否是静音，NSNumber/BOOL
extern NSString *const BUMAdLoadingParamRVIsMute;

/// （激励视频）视频显示方向，NSNumber/NSInteger，0-竖屏，1-横屏，默认竖屏
extern NSString *const BUMAdLoadingParamRVShowDirection;

/// （激励视频）用户标识， NSString
extern NSString *const BUMAdLoadingParamRVUserID;

/// （激励视频）奖励名称， NSString
extern NSString *const BUMAdLoadingParamRVRewardName;

/// （激励视频）奖励金额，NSNumber/NSInteger
extern NSString *const BUMAdLoadingParamRVRewardAmount;

/// （激励视频）扩展信息， NSString
extern NSString *const BUMAdLoadingParamRVExtra;

/// （激励视频）百度ACT URL,值为0，1。1为转化激励，0为非转化激励
extern NSString *const BUMAdLoadingParamActURL;

/// 百度二段激励配置列表，NSArray<NSDictionary *>，支持同时配置多组二段激励（如膨胀+翻倍）
/// 字典 key 定义如下：
/// two_stage_reward_type: 二段激励奖励类型，NSString，0-普通奖励，1-膨胀奖励，2-翻倍奖励
/// two_stage_basic_reward: 二段激励基础奖励数值，NSString
/// two_stage_basic_unit: 二段激励基础奖励单位，NSString
/// two_stage_advanced_reward: 二段激励高级奖励数值，NSString
/// two_stage_advanced_unit: 二段激励高级奖励单位，NSString
/// two_stage_multiple: 二段激励翻倍倍数，NSString
///
/// 示例：
/// @[
///     @{
///         @"two_stage_reward_type": @"1",
///         @"two_stage_basic_reward": @"888",
///         @"two_stage_basic_unit": @"元",
///         @"two_stage_advanced_reward": @"33333",
///         @"two_stage_advanced_unit": @"元"
///     },
///     @{
///         @"two_stage_reward_type": @"2",
///         @"two_stage_basic_reward": @"999",
///         @"two_stage_basic_unit": @"元",
///         @"two_stage_advanced_reward": @"1776",
///         @"two_stage_advanced_unit": @"元",
///         @"two_stage_multiple": @"2"
///     }
/// ];
extern NSString *const BUMAdLoadingParamRVTwoStageInfoList;

/// （Splash广告）是否需要开屏卡片功能，NSNumber/BOOL
extern NSString *const BUMAdLoadingParamSPSupportCardView;

/// （Splash广告）自定义底部视图，UIView
extern NSString *const BUMAdLoadingParamSPCustomBottomView;

/// （Splash广告）期望广告尺寸，NSValue/CGSize
extern NSString *const BUMAdLoadingParamSPExpectSize;

/// （Splash广告）开屏超时时间，NSNumber/NSInteger
extern NSString *const BUMAdLoadingParamSPTolerateTimeout;

/// （Splash广告）开屏点击区域，NSNumber/NSInteger/BUMSplashButtonType
extern NSString *const BUMAdLoadingParamSPButtonType;

/// （Splash广告）是否隐藏跳过按钮，NSNumber，0-不需要 ，1-需要
extern NSString *const BUMAdLoadingParamSPHideSkipButton;

/// （Native/Draw广告）期望广告图片尺寸，NSValue/CGSize
extern NSString *const BUMAdLoadingParamNAExpectImageSize;

/// （Native/Draw广告）期望广告尺寸，NSValue/CGSize
extern NSString *const BUMAdLoadingParamNAExpectSize;

/// （Native/Draw广告）期望摇一摇提示view的frame，NSValue/CGRect
extern NSString *const BUMAdLoadingParamNAExpectShakeViewFrame;

/// （Native/Draw广告）是否是静音，NSNumber/BOOL
extern NSString *const BUMAdLoadingParamNAIsMute;

/// （Native/Draw广告）加载广告数量，NSNumber/NSInteger
extern NSString *const BUMAdLoadingParamNALoadAdCount;


#pragma mark - 在adapter中，adn加载回调参数，即adapter开发者通过`- ***Ad:didLoadSuccess/Fail*** ext:`中NSDictionary回调的数据（部分通过gromore广告对象的mediaExt获取）
/// 【可选】AND广告ECPM，NSString，单位分
extern NSString *const BUMMediaAdLoadingExtECPM;

/// 【可选】AND广告ECPMLevel，NSString
extern NSString *const BUMMediaAdLoadingExtECPMLevel;

/// 【可选】ADN广告的加载标识，NSString
extern NSString *const BUMMediaAdLoadingExtRequestID;

/// 【可选】AND广告唯一标识，NSString
extern NSString *const BUMMediaAdLoadingExtAdID;

/// 【可选】AND广告创意唯一标识，NSString
extern NSString *const BUMMediaAdLoadingExtCreativeID;

/// 【可选】直播间信息，NSDictionary
extern NSString *const BUMMediaAdLoadingExtLiveRoom;

/// 【可选】商品信息，NSDictionary
extern NSString *const BUMMediaAdLoadingExtProduct;

/// 【可选】卷信息，NSDictionary
extern NSString *const BUMMediaAdLoadingExtCoupon;

/// 【可选】广告样式（视频 or 图片）， NSNumber/BUFeedADMode
extern NSString *const BUMMediaAdLoadingExtImageMode;

/// 【可选】广告标题，NSString
extern NSString *const BUMMediaAdLoadingExtTitle;

/// 【可选】广告描述，NSString
extern NSString *const BUMMediaAdLoadingExtDescription;

/// 【可选】广告图片地址，NSString
extern NSString *const BUMMediaAdLoadingExtImageUrl;

/// 【可选】广告视频地址，NSString
extern NSString *const BUMMediaAdLoadingExtVideoUrl;

/// 【可选】广告主品牌图片地址，NSString
extern NSString *const BUMMediaAdLoadingExtIconUrl;

#pragma mark - 通过创建gromore广告对象调用addParam:可补充参数的key（部分会透传给自定义adn的load方法中parameter）
/// 【可选】告知使用策略相关数据,设定policy专用key
extern NSString *const BUMAdUsePolicy;

/// 【可选】告知使用策略-adGap相关数据,接受字符串&number类型
extern NSString *const BUMAdUsePolicyAdGap;

/// 【可选】告知使用策略-adLoad相关数据,接受字符串&number类型
extern NSString *const BUMAdUsePolicyAdLoad;

/// 【可选】告知使用策略-sectionId相关数据,接受字符串&number类型
extern NSString *const BUMAdUsePolicySectionId;

/// 【可选】告知使用策略-pageId相关数据,接受字符串&number类型
extern NSString *const BUMAdUsePolicyPageId;

/// 【可选】告知使用策略-自定义相关数据,接受字典类型;
///  内部key:value需要满足:字符串类型&小于100字符&不包含特殊字符[大小写字母+数字+'-'+'_']
extern NSString *const BUMAdUsePolicyCustom;

/// 设置不同网络下的视频播放策略，目前只支持gdt部分广告类型 或 透传自定义adn，value(Number类型)
/// 不设置则执行对应adn的默认策略
/// 0-WIFI 下自动播放
/// 1-总是自动播放，无论网络条件
/// 2-从不自动播放，无论网络条件
extern NSString *const BUMAdAddParamKeyAutoPlayPolicy;

//  【可选】如开启gromore服务端奖励验证功能，gromore服务端奖励验证透传扩展信息优先使用该key对应value，
//        如未设置则使用BURewardedVideoModel中extra。
//   value类型为，NSString
extern NSString *const BUMAdAddParamKeyGroMoreS2SExtra;

#pragma mark - 优惠券功能使用相关
/// （优惠券功能使用相关）【可选】优惠券、翻页、弹幕组件使用相关通知名称 (根据具体Adn支持情况判定,目前仅Baidu支持)
extern NSString *const BUMMediaAdWidgetViewCreateNotificationName;

/// （优惠券功能使用相关）【可选】优惠券翻页视图Creator
extern NSString *const BUMMediaAdCouponFlipViewCreator;

/// （优惠券功能使用相关）【可选】优惠券悬浮视图Creator
extern NSString *const BUMMediaAdCouponSuspensionViewCreator;

/// （弹幕功能使用相关）【可选】弹幕组件视图Creator
extern NSString *const BUMMediaAdBarrageViewCreator;

/// （弹幕功能使用相关）【可选】扭动视图Enable
extern NSString *const BUMMediaAdRotateViewEnable;

/// （弹幕功能使用相关）【可选】扭动视图Creator
extern NSString *const BUMMediaAdRotateViewCreator;

/// （电商卡片相关）【可选】电商卡片视图Creator
extern NSString *const BUMMediaAdECommerceViewCreator;

/// 【可选】优惠磁贴视图Creator
extern NSString *const BUMMediaAdDiscountMagneticViewCreator;

#pragma mark - ADN parameter keys
/// 【可选】KS 是否可点击，NSNumber(BOOL)
extern NSString *const BUMAdLoadingParamIsClickable;

/// 【可选】KS 是否可滑动，NSNumber(BOOL)
extern NSString *const BUMAdLoadingParamIsSlidable;
