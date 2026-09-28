//
//  NSSet+BTDAdditions.h
//  Pods
//
//  Created by yanglinfeng on 2019/7/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSSet <ObjectType> (BTDAdditions)

#pragma mark - Functional

- (void)pbu_btd_forEach:(void(^)(ObjectType obj))block;

- (BOOL)pbu_btd_contains:(BOOL(^)(ObjectType obj))block;

- (BOOL)pbu_btd_all:(BOOL(^)(ObjectType obj))block;

- (nullable ObjectType)pbu_btd_find:(BOOL(^)(ObjectType obj))block;

- (NSSet<ObjectType> *)pbu_btd_filter:(BOOL(^)(ObjectType obj))block;

- (NSSet<id> *)pbu_btd_map:(_Nullable id(^)(ObjectType obj))block;

- (NSSet<id> *)pbu_btd_compactMap:(_Nullable id(^)(ObjectType obj))block;

- (nullable id)pbu_btd_reduce:(nullable id)initialValue reducer:(_Nullable id(^)(_Nullable id preValue, ObjectType obj))block;

@end


@interface NSMutableSet <ObjectType> (BTDAdditions)

#pragma mark - Safe Operation

- (void)pbu_btd_addObject:(ObjectType)object;

- (void)pbu_btd_removeObject:(ObjectType)object;

@end

NS_ASSUME_NONNULL_END
