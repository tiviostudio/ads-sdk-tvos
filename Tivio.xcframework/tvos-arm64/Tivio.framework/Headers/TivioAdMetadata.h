#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TivioAdMetadata : NSObject

@property(nonatomic, readonly) BOOL canTriggerSkip;
@property(nonatomic, readonly) BOOL isSkippable;
@property(nonatomic, readonly) NSUInteger order;
@property(nonatomic, readonly) NSString* subType;
@property(nonatomic, readonly) NSUInteger secondsToEnd;
@property(nonatomic, readonly) NSUInteger secondsToSkippable;
@property(nonatomic, readonly) NSUInteger totalCount;
@property(nonatomic, readonly) NSString* type;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
