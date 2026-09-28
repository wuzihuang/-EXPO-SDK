//
//  BUNativeExpressAdView+Mediation.h
//  BUAdSDK
//
//  Created by 🦁 on 2024/01/02.
//

#import "BUNativeExpressAdView.h"
#import "BUMRitInfo.h"
#import "BUMCanvasView.h"
#import "BUPlayerPublicDefine.h"
#import "BUVideoAdReportor.h"

@protocol BUNativeExpressAdViewMediationProtocol;
typedef NSObject<BUNativeExpressAdViewMediationProtocol> BUNativeExpressAdViewMediation;

NS_ASSUME_NONNULL_BEGIN

@interface BUNativeExpressAdView (Mediation)

// 当使用聚合广告位时，存在该属性，可获取聚合维度相关功能
@property (nonatomic, strong, nullable, readonly) BUNativeExpressAdViewMediation *mediation;

@end


@protocol BUNativeExpressAdViewMediationProtocol <NSObject, BUMCanvasViewProtocol>

/// 是否是模板广告，由adapter开发者实现
@property (nonatomic, assign, readonly) BOOL isExpressAd;

/// 非模板Native广告的物料数据，模板广告时为nil
@property (nonatomic, strong, readonly, nullable) BUMaterialMeta *data;
    

/// 自渲染视频类广告事件上报对象，仅采用自定义视频播放器时需要上报，部分ADN需申请白名单
@property (nonatomic, strong, readonly, nullable) id<BUVideoAdReportor> videoAdReporter;

/// [保留方法]更新模板媒体视图大小
- (void)reSizeMediaView;

/// 返回显示广告对应的披露信息，当没有权限访问时Ecpm会返回'-3'
- (nullable BUMRitInfo *)getShowEcpmInfo;

/// 填充后可调用，但推荐展示后调用，返回竞价广告的ecpm；当为server bidding ad时访问需要白名单权限；
- (NSArray<BUMRitInfo *> *)multiBiddingEcpmInfos;

/// 填充后可调用, 返回广告缓存池内所有信息；nil为无权限
- (NSArray<BUMRitInfo *> *)cacheRitList;

/// 填充后可调用，返回当前最佳广告的ecpm；当为server bidding ad时访问需要白名单权限
- (BUMRitInfo *)getCurrentBestEcpmInfo;

/// 广告视图的唯一标识
@property (nonatomic, copy, readonly) NSString *adViewID;

@end

NS_ASSUME_NONNULL_END
