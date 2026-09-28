//
//  NSData+BTDAdditions.h
//  ByteDanceKit
//
//  Created by wangdi on 2018/2/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const PBU_BTDRSADecryptionErrorDomain;

@interface NSData (BTDAdditions)
/**
 @return A md5 string.
 */
- (nonnull NSString *)pbu_btd_md5String;
/**
 @return A sha1 string.
 */
- (nonnull NSString *)pbu_btd_sha1String;
/**

 @return A sha256 string.
 */
- (nonnull NSString *)pbu_btd_sha256String;

- (nullable NSData *)pbu_btd_aes256EncryptWithKey:(nonnull NSData *)key iv:(nullable NSData *)iv __attribute__((deprecated("Please use the AES API provided by BDDataDecorator.")));
- (nullable NSData *)pbu_btd_aes256DecryptWithkey:(nonnull NSData *)key iv:(nullable NSData *)iv __attribute__((deprecated("Please use the AES API provided by BDDataDecorator.")));

/**
 Convert a NSData to a hex string.
 
 @return A hex string.
 */
- (NSString *)pbu_btd_hexString;

/**
 Convert a NSData to a NSArray or a NSDictionary.

 @return These functions will return a NSArray or a NSDictionary. If an error happened, these would return nil.
 */
- (nullable id)pbu_btd_jsonValueDecoded;
- (nullable id)pbu_btd_jsonValueDecoded:(NSError * _Nullable __autoreleasing * _Nullable)error;

- (nullable NSArray *)pbu_btd_jsonArray;
- (nullable NSDictionary *)pbu_btd_jsonDictionary;

- (nullable NSArray *)pbu_btd_jsonArray:(NSError * _Nullable __autoreleasing * _Nullable)error;
- (nullable NSDictionary *)pbu_btd_jsonDictionary:(NSError * _Nullable __autoreleasing * _Nullable)error;

/// Use RSA algorithm to encrypt data.
+ (NSData *)pbu_btd_encryptData:(NSData *)data publicKey:(NSString *)pubKey error:(NSError **)error;
+ (NSData *)pbu_btd_encryptData:(NSData *)data privateKey:(NSString *)privKey error:(NSError **)error;

/// Use RSA algorithm to decrypt data.
+ (NSData *)pbu_btd_decryptData:(NSData *)data publicKey:(NSString *)pubKey error:(NSError **)error;
+ (NSData *)pbu_btd_decryptData:(NSData *)data privateKey:(NSString *)privKey error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
