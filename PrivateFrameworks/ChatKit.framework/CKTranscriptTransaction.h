/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKMessage>, CKTranscriptBubbleData, NSMutableArray;

@interface CKTranscriptTransaction : NSObject {
    NSMutableArray *_addedMessages;
    CKTranscriptBubbleData *_bubbleInfo;
    <CKMessage> *_currentDeliveredMessage;
    <CKMessage> *_currentReadMessage;
    NSMutableArray *_deliveredMessages;
    NSMutableArray *_errorChangedMessages;
    <CKMessage> *_lastTypingIndicatorInserted;
    BOOL _mutateTypingIndicator;
    NSMutableArray *_readMessages;
    NSMutableArray *_removedMessages;
    int _typingIndicatorCount;
}

- (BOOL)_arrayContainsMessage:(id)arg1 message:(id)arg2;
- (BOOL)_arrrayPassesTest:(id)arg1 test:(id)arg2;
- (void)_filterMessageArray:(id)arg1 usingBlock:(id)arg2;
- (BOOL)_messageIsNewer:(id)arg1 thanMessage:(id)arg2 includeEqual:(BOOL)arg3;
- (BOOL)_messageIsOlder:(id)arg1 thanMessage:(id)arg2 includeEqual:(BOOL)arg3;
- (void)_processDeliveredMessageInsert:(id)arg1 inserts:(id)arg2;
- (void)_processErrorInsert:(id)arg1 inserts:(id)arg2;
- (void)_processInsertTypingIndicatorWithInserts:(id)arg1;
- (void)_processMessageInsert:(id)arg1 inserts:(id)arg2;
- (void)_processReadMessageInsert:(id)arg1 inserts:(id)arg2;
- (void)_processRemovesToClearDeliveredFromMessage:(id)arg1 removes:(id)arg2;
- (void)_processRemovesToClearFailureForMessage:(id)arg1 removes:(id)arg2;
- (void)_processRemovesToPrepareMessageForDelivered:(id)arg1 removes:(id)arg2;
- (void)_processRemovesToPrepareMessageForFailure:(id)arg1 removes:(id)arg2;
- (void)_processRemovesToPrepareMessageForRead:(id)arg1 removes:(id)arg2;
- (void)_uniqueArray:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)commitChangesWithHandler:(id)arg1;
- (void)dealloc;
- (void)hideTypingIndicator;
- (id)init;
- (id)initWithBubbleInfo:(id)arg1;
- (void)messageDelivered:(id)arg1;
- (void)messageErrorChanged:(id)arg1;
- (void)messageRead:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)showTypingIndicator:(id)arg1;

@end
