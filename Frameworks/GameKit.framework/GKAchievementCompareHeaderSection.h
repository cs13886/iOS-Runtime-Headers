/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameRecord;

@interface GKAchievementCompareHeaderSection : NSObject <GKTableSection> {
    GKGameRecord *_gameRecord;
}

@property(retain) GKGameRecord * gameRecord;

- (void)dealloc;
- (id)gameRecord;
- (float)heightForHeaderInTableView:(id)arg1;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (int)rowCountInTableView:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;

@end
