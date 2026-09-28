//
//  BUAdSDKPrivacyProvider.h
//  Pods
//
//  Created by ByteDance on 12/11/24.
//

/// Provide a protocol for custom private data
/// Only valid in the CN environment
@protocol BUAdSDKPrivacyProvider <NSObject>

@optional

/// Specify whether to allow the SDK to use location data
/// @Note :  聚合广告维度下，生效的adn为：CSJ，KS，Sigmob
- (BOOL)canUseLocation;
/// Return a latitude value
/// @Note :  聚合广告维度下，生效的adn为：CSJ，GDT，KS，Sigmob
- (CLLocationDegrees)latitude;
/// Return a longitude value
/// @Note :  聚合广告维度下，生效的adn为：CSJ，GDT，KS，Sigmob
- (CLLocationDegrees)longitude;
/// Specify whether to allow the SDK to use WiFi BSSID. Defaults to YES if the protocol method is not implemented.
- (BOOL)canUseWiFiBSSID;
/// Configure privacy information
///  @"motion_info" -> 表示是否允许传感器采集数据 ，
///                value为NSString类型，@"0": 不允许，@"1": 允许，默认不传时允许采集，其他值或不实现该协议方法认为允许采集，
///                聚合维度下生效的adn为：CSJ，GDT，BAIDU，Sigmob。
///
/// @Note :  聚合广告维度下，可设置key见BUMPrivacyConfig
- (nullable NSDictionary *)privacyConfig;
@end
