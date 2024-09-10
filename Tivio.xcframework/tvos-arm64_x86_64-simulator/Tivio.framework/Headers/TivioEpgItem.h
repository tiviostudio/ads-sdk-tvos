//
//  TivioMarker.h
//  Tivio
//
//  Created by Ladislav Navratil on 19.02.2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TivioEpgItem : NSObject

@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *channelName;
@property(nonatomic, readonly) NSString *programDescription;
@property(nonatomic, readonly) NSString *imageUrl;
@property(nonatomic, readonly) NSString *epgFrom;
@property(nonatomic, readonly) NSString *epgTo;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
