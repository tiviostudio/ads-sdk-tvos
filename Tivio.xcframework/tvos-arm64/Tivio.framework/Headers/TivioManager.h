//
//  TivioManager.h
//  Tivio
//
//  Created by Ladislav Navratil on 16.01.2022.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TivioPlayerWrapper;
@class TivioProgramGuideDelegate;
@class TivioEpgItem;

@interface Tivio : NSObject

@property(nonatomic) TivioProgramGuideDelegate* delegate;

- (id)initWithSecret:(NSString*) secret deviceCapabilities:(NSArray *) capabilities;
- (id)initWithSecret:(NSString*) secret deviceCapabilities:(NSArray *) capabilities verbose:(BOOL)verbose;

+ (Tivio *)getManager;
+ (TivioPlayerWrapper*)getPlayerWrapper;
+ (void)getProgramTimestamps:(NSString *)channelName epgFrom: (NSUInteger)epgFrom epgTo: (NSUInteger)epgTo complete: (void(^)(NSInteger startTimestamp, NSInteger endTimestamp)) complete;
+ (NSArray<TivioEpgItem*> *)getEpgData;

@end

NS_ASSUME_NONNULL_END
