//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGDirectStoryStatusMetadata, NSArray, NSDate, NSOrderedSet, NSString;

@interface IGDirectStory : NSObject
{
    _Bool _hasNewer;
    NSString *_storyId;
    NSArray *_users;
    NSDate *_lastActivityDate;
    NSString *_threadName;
    NSOrderedSet *_messages;
    NSString *_newestCursor;
    IGDirectStoryStatusMetadata *_statusMetadata;
    long long _totalMessageCount;
}

@property(readonly, nonatomic) long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(readonly, nonatomic) IGDirectStoryStatusMetadata *statusMetadata; // @synthesize statusMetadata=_statusMetadata;
@property(readonly, nonatomic) _Bool hasNewer; // @synthesize hasNewer=_hasNewer;
@property(readonly, copy, nonatomic) NSString *newestCursor; // @synthesize newestCursor=_newestCursor;
@property(readonly, copy, nonatomic) NSOrderedSet *messages; // @synthesize messages=_messages;
@property(readonly, copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(readonly, copy, nonatomic) NSDate *lastActivityDate; // @synthesize lastActivityDate=_lastActivityDate;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;

- (id)diffIdentifier;
- (_Bool)isInstagramNUX;
- (_Bool)isNamedOnServer;
- (id)threadDisplayName;
- (_Bool)hasUnseenMessages;
- (_Bool)isGroupThread;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStoryId:(id)arg1 users:(id)arg2 lastActivityDate:(id)arg3 threadName:(id)arg4 messages:(id)arg5 totalMessageCount:(long long)arg6 newestCursor:(id)arg7 hasNewer:(_Bool)arg8 statusMetadata:(id)arg9;

@end
