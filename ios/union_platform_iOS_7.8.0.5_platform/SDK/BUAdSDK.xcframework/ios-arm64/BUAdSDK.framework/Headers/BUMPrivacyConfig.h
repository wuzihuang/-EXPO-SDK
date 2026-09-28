//
//  BUMPrivacyConfig.h
//  BUAdSDK
//
//  Created by 🦁 on 2022/12/16.
//

#import <Foundation/Foundation.h>

/// 【可选】是否限制个性化广告:
/// value约束：NSNumber，0-不限制，1-限制，默认为0。
/// 官方维护版本中适用于：CSJ、KS、Sigmob、BAIDU、GDT。
/// 设置方式：通过BUAdSDKConfiguration+Mediation -> limitPersonalAds设置
const static NSString *kBUMPrivacyLimitPersonalAds = @"ABUPrivacyLimitPersonalAds";

/// 【可选】是否限制程序化广告:
/// value约束：NSNumber，0-不限制，1-限制，默认为0。
/// 官方维护版本中适用于：KS。
/// 设置方式：通过BUAdSDKConfiguration+Mediation -> limitProgrammaticAds设置
const static NSString *kBUMPrivacyLimitProgrammaticAds = @"ABUPrivacyLimitProgrammaticAds";

/// 【可选】是否禁止IDFA：
/// value约束：NSNumber，0-不禁止，1-禁止，默认为0。
/// 官方维护版本中适用于：GDT，Sigmob。、
/// 设置方式：通过BUAdSDKConfiguration+Mediation -> forbiddenIDFA设置
const static NSString *kBUMPrivacyForbiddenIDFA = @"ABUPrivacyForbiddenIDFA";

/// 【可选】是否在adn中使用位置，如果是，adn将自己获得纬度和经度，而不是使用传入的值（kBUMPrivacyLongitude/kBUMPrivacyLatitude）。
/// value约束：NSNumber，
/// 官方维护版本中适用于：CSJ，KS。
/// 设置方式：通过BUAdSDKPrivacyProvider -> canUseLocation设置
const static NSString *kBUMPrivacyCanLocation = @"ABUPrivacyCanLocation";

/// 【可选】经度的值。
/// value约束：NSNumber，默认值是0.0。
/// 官方维护版本中适用于：CSJ，GDT，KS。
/// 设置方式：通过BUAdSDKPrivacyProvider -> longitude设置
const static NSString *kBUMPrivacyLongitude = @"ABUPrivacyLongitude";

/// 【可选】纬度的值。
/// value约束：NSNumber，默认值是0.0。
/// 官方维护版本中适用于：CSJ，GDT，KS。
/// 设置方式：通过BUAdSDKPrivacyProvider -> latitude设置
const static NSString *kBUMPrivacyLatitude = @"ABUPrivacyLatitude";

/// 【可选】是成人或者儿童
/// value约束：NSNumber，2-儿童(＜15),1-儿童(15-18岁), 0-成人，默认为0(成人)。
/// 官方维护版本中适用于：CSJ，sigmob。
/// 设置方式：通过BUAdSDKConfiguration -> ageGroup设置
const static NSString *kBUMPrivacyNotAdult = @"ABUPrivacyNotAdult";

/// 【可选】用户对广告商跟踪的同意，
/// value约束：NSString，@"0"-不同意，@"1"-同意，默认@"0"。
/// 官方维护版本中适用于：GDT。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyAdvertiserTrackingEnabled = @"bum_advertiser_tracking_enabled";

/// 【可选】实时的地理位置获取时间，
/// value约束：NSString，值为字符串格式的unix时间戳，单位秒，比如@"1639450944"，默认nil代表未设置过。
/// 官方维护版本中适用于：GDT。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyLocTime = @"bum_loc_time";

/// 【可选】NSString，表示是否允许传感器采集数据，
/// @"0": 不允许，@"1": 允许，默认@"1"。
/// 官方维护版本中适用于：CSJ，GDT，BAIDU。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyMotionInfo = @"motion_info";

/// 【可选】NSString，表示是否限制个性化CPU，
/// @"0": 不限制，@"1":  限制，默认@"0"。
/// 官方维护版本中适用于：BAIDU。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyLimitPersonalCPUs = @"bum_limit_personal_cpus";

/// 【可选】表示是否禁用使用电话状态，
/// value约束：NSString，@"0": 不禁用，@"1":  禁用，默认@"0"。
/// 官方维护版本中适用于：KS。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyDisableUsePhoneStatus = @"bum_disable_use_phone_status";

/// 【可选】是否禁止IDFV：
/// value约束：NSString，0-不禁止，1-禁止，默认为0。
/// 官方维护版本中适用于：Sigmob
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyForbiddenIDFV = @"bum_forbidden_idfv";

/// 【可选】自定义IDFV：
/// value约束：NSString，默认nil代表未设置过。
/// 官方维护版本中适用于：KS，Sigmob
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyCustomIDFV = @"bum_custom_idfv";

/// 【可选】是否允许获取磁盘空间大小：
/// value约束：NSString，@"0"-不允许，@"1"-允许，默认@"1"。
/// 官方维护版本中适用于：Sigmob。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyCanUseSpaceSize = @"bum_can_use_space_size";

///【可选】允许读取运营商信息
/// value约束：NSNumber，@0 不允许[默认]  @1 允许
/// 官方维护版本中适用于：Sigmob。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyCanUseCarrier = @"kBUMPrivacyCanUseCarrier";

///【可选】如果不允许读取运营商信息,则自行提供运营商名称,目前仅支持sigmob
/// value约束：NSString
/// 官方维护版本中适用于：Sigmob。
/// 设置方式：通过BUAdSDKPrivacyProvider -> privacyConfig传入键值对方式设置
const static NSString *kBUMPrivacyCarrierName = @"kBUMPrivacyCarrierName";
