//
// Copyright 2022 Signal Messenger, LLC
// SPDX-License-Identifier: AGPL-3.0-only
//

#import <SignalServiceKit/SignalServiceKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SignalServiceAddress;

/// Represents a story distribution list.
@interface TSPrivateStoryThread : TSThread

@property (nonatomic) BOOL allowsReplies;
@property (nonatomic) NSString *name;

/// - SeeAlso:
/// ``TSThread/storyViewMode``. In combination with that property, describes the
/// intended viewership of stories sent to this thread.
@property (nonatomic) NSArray<SignalServiceAddress *> *addresses;

@property (nonatomic, readonly) BOOL isMyStory;

- (instancetype)initWithUniqueId:(NSString *)uniqueId
                            name:(NSString *)name
                   allowsReplies:(BOOL)allowsReplies
                       addresses:(NSArray<SignalServiceAddress *> *)addresses
                        viewMode:(TSThreadStoryViewMode)viewMode NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithName:(NSString *)name
               allowsReplies:(BOOL)allowsReplies
                   addresses:(NSArray<SignalServiceAddress *> *)addresses
                    viewMode:(TSThreadStoryViewMode)viewMode NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
- (instancetype)initWithUniqueId:(NSString *)uniqueId NS_UNAVAILABLE;
- (instancetype)initWithGrdbId:(int64_t)grdbId
                                       uniqueId:(NSString *)uniqueId
                  conversationColorNameObsolete:(NSString *)conversationColorNameObsolete
                                   creationDate:(nullable NSDate *)creationDate
                            editTargetTimestamp:(nullable NSNumber *)editTargetTimestamp
                             isArchivedObsolete:(BOOL)isArchivedObsolete
                         isMarkedUnreadObsolete:(BOOL)isMarkedUnreadObsolete
                           lastInteractionRowId:(uint64_t)lastInteractionRowId
                         lastSentStoryTimestamp:(nullable NSNumber *)lastSentStoryTimestamp
                      lastVisibleSortIdObsolete:(uint64_t)lastVisibleSortIdObsolete
    lastVisibleSortIdOnScreenPercentageObsolete:(double)lastVisibleSortIdOnScreenPercentageObsolete
                        mentionNotificationMode:(TSThreadMentionNotificationMode)mentionNotificationMode
                                   messageDraft:(nullable NSString *)messageDraft
                         messageDraftBodyRanges:(nullable MessageBodyRanges *)messageDraftBodyRanges
                         mutedUntilDateObsolete:(nullable NSDate *)mutedUntilDateObsolete
                    mutedUntilTimestampObsolete:(uint64_t)mutedUntilTimestampObsolete
                          shouldThreadBeVisible:(BOOL)shouldThreadBeVisible
                                  storyViewMode:(TSThreadStoryViewMode)storyViewMode NS_UNAVAILABLE;

// --- CODE GENERATION MARKER

// This snippet is generated by /Scripts/sds_codegen/sds_generate.py. Do not manually edit it, instead run
// `sds_codegen.sh`.

// clang-format off

- (instancetype)initWithGrdbId:(int64_t)grdbId
                      uniqueId:(NSString *)uniqueId
   conversationColorNameObsolete:(NSString *)conversationColorNameObsolete
                    creationDate:(nullable NSDate *)creationDate
             editTargetTimestamp:(nullable NSNumber *)editTargetTimestamp
              isArchivedObsolete:(BOOL)isArchivedObsolete
          isMarkedUnreadObsolete:(BOOL)isMarkedUnreadObsolete
            lastInteractionRowId:(uint64_t)lastInteractionRowId
          lastSentStoryTimestamp:(nullable NSNumber *)lastSentStoryTimestamp
       lastVisibleSortIdObsolete:(uint64_t)lastVisibleSortIdObsolete
lastVisibleSortIdOnScreenPercentageObsolete:(double)lastVisibleSortIdOnScreenPercentageObsolete
         mentionNotificationMode:(TSThreadMentionNotificationMode)mentionNotificationMode
                    messageDraft:(nullable NSString *)messageDraft
          messageDraftBodyRanges:(nullable MessageBodyRanges *)messageDraftBodyRanges
          mutedUntilDateObsolete:(nullable NSDate *)mutedUntilDateObsolete
     mutedUntilTimestampObsolete:(uint64_t)mutedUntilTimestampObsolete
           shouldThreadBeVisible:(BOOL)shouldThreadBeVisible
                   storyViewMode:(TSThreadStoryViewMode)storyViewMode
                       addresses:(NSArray<SignalServiceAddress *> *)addresses
                   allowsReplies:(BOOL)allowsReplies
                            name:(NSString *)name
NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(grdbId:uniqueId:conversationColorNameObsolete:creationDate:editTargetTimestamp:isArchivedObsolete:isMarkedUnreadObsolete:lastInteractionRowId:lastSentStoryTimestamp:lastVisibleSortIdObsolete:lastVisibleSortIdOnScreenPercentageObsolete:mentionNotificationMode:messageDraft:messageDraftBodyRanges:mutedUntilDateObsolete:mutedUntilTimestampObsolete:shouldThreadBeVisible:storyViewMode:addresses:allowsReplies:name:));

// clang-format on

// --- CODE GENERATION MARKER

@end

NS_ASSUME_NONNULL_END
