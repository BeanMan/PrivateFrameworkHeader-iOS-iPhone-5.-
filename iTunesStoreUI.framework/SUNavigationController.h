/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {
    BOOL _canBeWeakScriptReference;
    BOOL _loading;
    SUSection *_section;
}

@property(getter=isLoading) BOOL loading;
@property(retain) SUSection * section;


- (void)setLoading:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setViewControllers:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (void)removeChildViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (id)section;
- (id)navigationBar;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (id)description;
- (void)dealloc;
- (id)copyScriptViewController;
- (void)_loadingDidChangeNotification:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (id)_sectionForViewController:(id)arg1;
- (id)initWithSection:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (void)setSection:(id)arg1;
- (id)copyArchivableContext;

@end
