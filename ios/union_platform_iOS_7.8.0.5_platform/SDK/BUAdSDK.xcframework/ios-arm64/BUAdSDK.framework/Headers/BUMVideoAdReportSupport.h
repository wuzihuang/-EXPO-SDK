//
//  BUMVideoAdReportSupport.h
//  BUAdSDK
//
//  Created by 🦁 on 2022/12/16.
//

#import <Foundation/Foundation.h>

/// 待上报的视频事件枚举类型
typedef NS_ENUM(NSInteger, BUMVideoAdEvent) {
    // 对齐BUVideoAdReportor - startPlayVideo
    BUMVideoAdEventVideoDidPlay = 1,
    // 对齐BUVideoAdReportor - didFinishVideo
    BUMVideoAdEventVideoDidFinish = 2,
    // 对齐BUVideoAdReportor - didPauseVideoWithCurrentDuration:
    BUMVideoAdEventVideoDidPause = 3,
    // 对齐BUVideoAdReportor - didResumeVideoWithCurrentDurationL:
    BUMVideoAdEventVideoDidResume = 4,
    // 对齐BUVideoAdReportor - didBreakVideoWithCurrentDuration:
    BUMVideoAdEventVideoDidBreak = 5,
    // 对齐BUVideoAdReportor - didClickVideoViewWithCurrentDuration:
    BUMVideoAdEventVideoDidClick = 6,
    // 对齐BUVideoAdReportor - didPlayStartFailedWithError
    BUMVideoAdEventVideoDidStartFailed = 7,
    // 对齐BUVideoAdReportor - didPlayFailedWithError:
    BUMVideoAdEventVideoDidPlayFailed = 8,
    // 对齐BUVideoAdReportor - didStartPlayVideoWithVideoDuration:
    BUMVideoAdEventVideoDidStart = 9,
    // 对齐BUVideoAdReportor - didAutoStartPlayWithVideoDuration:
    BUMVideoAdEventVideoDidAutoStart = 10,
    // 对齐BUVideoAdReportor - didPlayBufferStart
    BUMVideoAdEventVideoBufferStart = 11,
    // 对齐BUVideoAdReportor - didPlayBufferEnd
    BUMVideoAdEventVideoBufferEnd = 12,

};

typedef NSString * BUMVideoAdEventParameter;

/// 视频总时长，NSNumber类型，单位s
extern BUMVideoAdEventParameter const BUMVideoAdEventParameterVideoTotalDurationKey;
/// 视频播放时长，NSNumber类型，单位s
extern BUMVideoAdEventParameter const BUMVideoAdEventParameterVideoCurrentDurationKey;
/// 视频出现异常原因，NSError类型
extern BUMVideoAdEventParameter const BUMVideoAdEventParameterErrorKey;
