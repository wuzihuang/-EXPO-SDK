//
//  BTDMacros.h
//  Pods
//
//  Created by willorfang on 16/8/5.
//
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <pthread.h>

#ifndef __BTDMacros_H__
#define __BTDMacros_H__


#pragma clang diagnostic push
#pragma clang diagnostic ignored"-Wunused-function"
static NSString *csj_currentTimeString()
{
    NSDateFormatter *dateFormatter = [NSDateFormatter new];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss.SSSSSS"];
    return [dateFormatter stringFromDate:[NSDate date]];
}
#pragma clang diagnostic pop

#ifndef BTDLog
#if DEBUG
    #define BTDLog(s, ...) \
    fprintf(stderr, "%s <%s:%d> %s\n", [csj_currentTimeString() UTF8String], [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:(s), ##__VA_ARGS__] UTF8String])
#else
    #define BTDLog(s, ...)
#endif
#endif

#ifndef CSJ_isEmptyString
FOUNDATION_EXPORT BOOL CSJ_isEmptyString(id param);
#endif

#ifndef CSJ_isEmptyArray
FOUNDATION_EXPORT BOOL CSJ_isEmptyArray(id param);
#endif

#ifndef CSJ_isEmptyDictionary
FOUNDATION_EXPORT BOOL CSJ_isEmptyDictionary(id param);
#endif

#endif
