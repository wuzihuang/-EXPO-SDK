//
//  BUMRitInfo.h
//  BUAdSDK
//
//  Created by 🦁 on 2022/12/16.
//

#import "BUInterfaceBaseObject.h"

typedef NS_ENUM(NSInteger, BUMBiddingType) {
    BUMBiddingTypeUnknown = -1,
    BUMBiddingTypeNormal = 0,
    BUMBiddingTypeClient = 1,
    BUMBiddingTypeServer = 2,
    BUMBiddingTypeMulti = 3,
    BUMBiddingTypePriority = 100
};

NS_ASSUME_NONNULL_BEGIN

@interface BUMRitInfo : BUInterfaceBaseObject

/// ADN的名称，与平台配置一致，自定义ADN时为ADN唯一标识
@property (nonatomic, copy, readonly, nonnull) NSString * adnName;

/// 自定义ADN的名称，与平台配置一致，非自定义ADN为nil
@property (nonatomic, copy, readonly, nullable) NSString * customAdnName;

// 代码位
@property (nonatomic, copy, readonly, nonnull) NSString *slotID;

// 价格标签，多阶底价下有效
@property (nonatomic, copy, readonly, nullable) NSString *levelTag;

// 返回价格，nil为无权限
@property (nonatomic, copy, readonly, nullable) NSString *ecpm;

// 打折系数
@property (nonatomic, copy, readonly, nullable) NSString *discount;

// 广告类型
@property (nonatomic, assign, readonly) BUMBiddingType biddingType;

// 额外错误信息,一般为空(扩展字段)
@property (nonatomic, copy, readonly, nullable) NSString *errorMsg;

// adn提供的真实广告加载ID，可为空
@property (nonatomic, copy, readonly, nullable) NSString *requestID;

// adn提供的真实广告创意ID，可为空
@property (nonatomic, copy, readonly, nullable) NSString *creativeID;

// 广告位类型
@property (nonatomic, copy, readonly, nullable) NSString *adRitType;

// 流量分组ID
@property (nonatomic, strong, readonly, nullable) NSNumber *segmentId;

// AB实验分组ID
@property (nonatomic, strong, readonly, nullable) NSNumber *abtestId;

// 渠道名称
@property (nonatomic, copy, readonly, nullable) NSString *channel;

// 子渠道名称
@property (nonatomic, copy, readonly, nullable) NSString *sub_channel;

// 场景ID
@property (nonatomic, copy, readonly, nullable) NSString *scenarioId;

// 混用类型，banner/fullVideo/rewardVideo/feed/draw/interstitial
@property (nonatomic, copy, readonly, nullable) NSString *subRitType;

@end

NS_ASSUME_NONNULL_END
