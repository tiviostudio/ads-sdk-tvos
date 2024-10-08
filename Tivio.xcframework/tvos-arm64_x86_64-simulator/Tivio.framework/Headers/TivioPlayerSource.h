#import <Foundation/Foundation.h>
#import "TivioMarkerInternal.h"
#import "TivioAdMetadata.h"

NS_ASSUME_NONNULL_BEGIN

@interface TivioPlayerSource : NSObject

@property(readonly) NSUInteger startPosition;
@property(readonly) NSString* type;
@property(readonly) NSString* uri;
@property(readonly) NSArray<TivioMarker *> *markers;
@property(readonly, nullable) TivioAdMetadata *adMetadata;

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

- (id)initWithData:(NSDictionary *)data;

@end

NS_ASSUME_NONNULL_END
