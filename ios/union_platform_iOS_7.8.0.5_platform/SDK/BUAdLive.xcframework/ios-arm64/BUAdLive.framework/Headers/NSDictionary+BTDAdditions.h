//
//  NSDictionary+BTDAdditions.h
//  ByteDanceKit
//
//  Created by wangdi on 2018/2/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary <KeyType, ObjectType> (BTDAdditions)
/**
 Convert a NSDictionary to a NSString. If an error happened, It would return nil.
 
 @return A NSString.
 */
- (nullable NSString *)pbu_btd_jsonStringEncoded;
- (nullable NSString *)pbu_btd_jsonStringEncoded:(NSError * _Nullable __autoreleasing * _Nullable)error;

/**
 Use NSJSONWritingPrettyPrinted to convert.

@return A NSString.
*/
- (nullable NSString *)pbu_btd_jsonStringPrettyEncoded;

/**
 Convert a NSDictionary to a NSString. It is safer but is lower in efficiency.
 
 @return A NSString.
 */
- (nullable NSString *)pbu_btd_safeJsonStringEncoded;
- (nullable NSString *)pbu_btd_safeJsonStringEncoded:(NSError * _Nullable __autoreleasing * _Nullable)error;
/*
  Many functions to get a value from a NSDictionary.
 */
- (BOOL)pbu_btd_boolValueForKey:(KeyType<NSCopying>)key;

- (int)pbu_btd_intValueForKey:(KeyType<NSCopying>)key;

- (long)pbu_btd_longValueForKey:(KeyType<NSCopying>)key;

- (long long)pbu_btd_longlongValueForKey:(KeyType<NSCopying>)key;

- (NSInteger)pbu_btd_integerValueForKey:(KeyType<NSCopying>)key;

- (NSUInteger)pbu_btd_unsignedIntegerValueForKey:(KeyType<NSCopying>)key;

- (short)pbu_btd_shortValueForKey:(KeyType<NSCopying>)key;

- (unsigned short)pbu_btd_unsignedShortValueForKey:(KeyType<NSCopying>)key;

- (float)pbu_btd_floatValueForKey:(KeyType<NSCopying>)key;

- (double)pbu_btd_doubleValueForKey:(KeyType<NSCopying>)key;

- (nullable NSNumber *)pbu_btd_numberValueForKey:(KeyType<NSCopying>)key;

- (nullable NSString *)pbu_btd_stringValueForKey:(KeyType<NSCopying>)key;

- (nullable NSArray *)pbu_btd_arrayValueForKey:(KeyType<NSCopying>)key;

- (nullable NSDictionary *)pbu_btd_dictionaryValueForKey:(KeyType<NSCopying>)key;

- (BOOL)pbu_btd_boolValueForKey:(KeyType<NSCopying>)key default:(BOOL)def;
- (char)pbu_btd_charValueForKey:(KeyType<NSCopying>)key default:(char)def;
- (unsigned char)pbu_btd_unsignedCharValueForKey:(KeyType<NSCopying>)key default:(unsigned char)def;

- (short)pbu_btd_shortValueForKey:(KeyType<NSCopying>)key default:(short)def;
- (unsigned short)pbu_btd_unsignedShortValueForKey:(KeyType<NSCopying>)key default:(unsigned short)def;

- (int)pbu_btd_intValueForKey:(KeyType<NSCopying>)key default:(int)def;
- (unsigned int)pbu_btd_unsignedIntValueForKey:(KeyType<NSCopying>)key default:(unsigned int)def;

- (long)pbu_btd_longValueForKey:(KeyType<NSCopying>)key default:(long)def;
- (unsigned long)pbu_btd_unsignedLongValueForKey:(KeyType<NSCopying>)key default:(unsigned long)def;
- (long long)pbu_btd_longLongValueForKey:(KeyType<NSCopying>)key default:(long long)def;
- (unsigned long long)pbu_btd_unsignedLongLongValueForKey:(KeyType<NSCopying>)key default:(unsigned long long)def;

- (float)pbu_btd_floatValueForKey:(KeyType<NSCopying>)key default:(float)def;
- (double)pbu_btd_doubleValueForKey:(KeyType<NSCopying>)key default:(double)def;

- (NSInteger)pbu_btd_integerValueForKey:(KeyType<NSCopying>)key default:(NSInteger)def;
- (NSUInteger)pbu_btd_unsignedIntegerValueForKey:(KeyType<NSCopying>)key default:(NSUInteger)def;

- (nullable NSNumber *)pbu_btd_numberValueForKey:(KeyType<NSCopying>)key default:(nullable NSNumber *)def;
- (nullable NSString *)pbu_btd_stringValueForKey:(KeyType<NSCopying>)key default:(nullable NSString *)def;

- (nullable NSArray *)pbu_btd_arrayValueForKey:(KeyType<NSCopying>)key default:(nullable NSArray *)def;

- (nullable NSDictionary *)pbu_btd_dictionaryValueForKey:(KeyType<NSCopying>)key default:(nullable NSDictionary *)def;

- (nullable ObjectType)pbu_btd_objectForKey:(KeyType<NSCopying>)key default:(nullable ObjectType)def;

#pragma mark - Functional

- (void)pbu_btd_forEach:(void(^)(KeyType key, ObjectType obj))block;

- (BOOL)pbu_btd_contain:(BOOL(^)(KeyType key, ObjectType obj))block;

- (BOOL)pbu_btd_all:(BOOL(^)(KeyType key, ObjectType obj))block;

- (NSDictionary<KeyType, ObjectType> *)pbu_btd_filter:(BOOL(^)(KeyType key, ObjectType obj))block;

- (NSDictionary<KeyType, id> *)pbu_btd_map:(_Nullable id(^)(KeyType key, ObjectType obj))block;

- (NSDictionary<KeyType, id> *)pbu_btd_compactMap:(_Nullable id(^)(KeyType key, ObjectType obj))block;

#pragma mark - URL Query

- (nullable NSString *)pbu_btd_URLQueryString;

- (nullable NSString *)pbu_btd_URLQueryStringWithEncoding;

@end


@interface NSMutableDictionary <KeyType, ObjectType> (BTDAdditions)

#pragma mark - Safe Access

/**
 Provide safe Access for the method -(void)setObject:(ObjectType) forKey:(KeyType <NSCopying>);
 If the anObject or the key is nil, this function returns directly.
 */
- (void)pbu_btd_setObject:(_Nullable ObjectType)anObject forKey:(_Nullable KeyType<NSCopying>)key;

@end

NS_ASSUME_NONNULL_END
