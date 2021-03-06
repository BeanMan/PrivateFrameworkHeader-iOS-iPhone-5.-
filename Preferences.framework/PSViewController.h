/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, UIViewController<PSController>, PSRootController;

@interface PSViewController : UIViewController <PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}


- (void)setParentController:(id)arg1;
- (id)parentController;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)popupViewDidDisappear;
- (void)popupViewWillDisappear;
- (void)didWake;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)suspend;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (void)formSheetViewWillDisappear;
- (void)formSheetViewDidDisappear;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)pushController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)willResignActive;
- (void)willBecomeActive;

@end
