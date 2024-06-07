//
//  TivioPlayerSource.h
//  Tivio
//
//  Created by Ladislav Navratil on 16.01.2022.
//

#import <Foundation/Foundation.h>
#import "TivioMarkerInternal.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdMetadata : NSObject

@property(nonatomic, copy) NSString *type;
@property(nonatomic, copy) NSString *subType;
@property(nonatomic) NSInteger secondsToEnd;
@property(nonatomic, nullable) NSNumber *secondsToSkippable;
@property(nonatomic) BOOL canTriggerSkip;
@property(nonatomic) BOOL isSkippable;
@property(nonatomic, nullable) NSNumber *order;
@property(nonatomic, nullable) NSNumber *totalCount;

- (void)skip;

@end

@interface TivioPlayerSource : NSObject

@property(readonly) NSUInteger startPosition;
@property(readonly) NSString* type;
@property(readonly) NSString* uri;
@property(readonly) NSArray<TivioMarker *> *markers;
@property(readonly, nullable) AdMetadata *adMetadata;

- (id)initWithChannel:(NSString *)channelName
                 mode:(NSString*)mode
                  uri:(NSString*)uri
              epgFrom:(NSDate *)epgFrom
                epgTo:(NSDate *)epgTo
          streamStart:(NSDate *)streamStart
    startFromPosition:(NSUInteger)startFromPosition;

- (id)initWithChannel:(NSString *)channelName
                 mode:(NSString*)mode
                  uri:(NSString*)uri
              epgFrom:(NSDate *)epgFrom
                epgTo:(NSDate *)epgTo
          streamStart:(NSDate *)streamStart
 continueFromPosition:(NSUInteger)continueFromPosition;

@end

NS_ASSUME_NONNULL_END
