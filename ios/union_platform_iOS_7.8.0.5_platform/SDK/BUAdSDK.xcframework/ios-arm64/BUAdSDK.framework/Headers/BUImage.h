//
//  BUImage.h
//  BUAdSDK
//
//  Copyright © 2017 bytedance. All rights reserved.
//

#import "BUInterfaceBaseObject.h"

NS_ASSUME_NONNULL_BEGIN
 __attribute__((objc_subclassing_restricted))
@interface BUImage : BUInterfaceBaseObject

// image address URL
@property (nonatomic, copy, readonly, nullable) NSString *imageURL;

// image key
@property (nonatomic, copy, readonly, nullable) NSString *image_key;


// image width
@property (nonatomic, readonly, assign) float width;

// image height
@property (nonatomic, readonly, assign) float height;

// stream ad image druation

@property (nonatomic, assign) float duration;

- (instancetype)initWithDictionary:(NSDictionary *)dic;

- (nonnull NSDictionary *)csj_dictionaryValue;


@end
NS_ASSUME_NONNULL_END

