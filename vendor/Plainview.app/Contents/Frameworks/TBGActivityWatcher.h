/* ActivityWatcher */

#import <Cocoa/Cocoa.h>


#define kActivityTimeout 30


@interface TBGActivityWatcher : NSApplication
{
	NSTimer *inactivityTimer;
	BOOL active;
	int activityTimeout;
	BOOL preventKeyStrokes;
	BOOL useKeyboardActivity;
	BOOL useMouseActivity;
}

- (void)onActivity;
- (void)onInactivity:(NSTimer *)timer;
- (void)resetTimer;
- (BOOL)isUserActive;
- (int)activityTimeout;
- (void)setActivityTimeout:(int)seconds;

- (BOOL)useKeyboardActivity;
- (void)setUseKeyboardActivity:(BOOL)val;
- (BOOL)useMouseActivity;
- (void)setUseMouseActivity:(BOOL)val;
- (BOOL)preventKeyStrokes;
- (void)setPreventKeyStrokes:(BOOL)val;

@end
