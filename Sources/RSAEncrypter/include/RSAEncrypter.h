//
//  RSAEncrypter.h
//  RSAEncrypter
//
//  Created by ideawu.
//  Link: https://github.com/ideawu/Objective-C-RSA.
//

#import <Foundation/Foundation.h>

// ...........

@interface RSA : NSObject

// Return encrypted raw data
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
@end
