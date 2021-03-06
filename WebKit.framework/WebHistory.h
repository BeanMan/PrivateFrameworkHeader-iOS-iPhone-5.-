/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebHistoryPrivate;

@interface WebHistory : NSObject  {
    WebHistoryPrivate *_historyPrivate;
}

+ (void)setOptionalSharedHistory:(id)arg1;
+ (id)optionalSharedHistory;
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)arg1;
+ (void)_removeAllVisitedLinks;

- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)removeAllItems;
- (id)allItems;
- (BOOL)loadFromURL:(id)arg1 error:(id*)arg2;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (void)_sendNotification:(id)arg1 entries:(id)arg2;
- (id)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (BOOL)containsURL:(id)arg1;
- (BOOL)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryItemLimit:(int)arg1;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5;
- (id)_itemForURLString:(id)arg1;
- (id)itemForURL:(id)arg1;
- (void)_addVisitedLinksToPageGroup:(struct PageGroup { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct HashSet<WebCore::Page*,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> > { struct HashTable<WebCore::Page*,WebCore::Page*,WTF::IdentityExtractor<WebCore::Page*>,WTF::PtrHash<WebCore::Page*>,WTF::HashTraits<WebCore::Page*>,WTF::HashTraits<WebCore::Page*> > { struct Page {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; struct HashSet<long long unsigned int,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int> > { struct HashTable<long long unsigned int,long long unsigned int,WTF::IdentityExtractor<long long unsigned int>,WebCore::LinkHashHash,WTF::HashTraits<long long unsigned int>,WTF::HashTraits<long long unsigned int> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; boolx4; unsigned int x5; struct RefPtr<WebCore::StorageNamespace> { struct StorageNamespace {} *x_6_1_1; } x6; struct OwnPtr<WTF::HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>, WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*, WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*> > > { struct HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>,WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*,WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserScript>, 0ul>*> > {} *x_7_1_1; } x7; struct OwnPtr<WTF::HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>, WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*, WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >, WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*> > > { struct HashMap<WTF::RefPtr<WebCore::DOMWrapperWorld>,WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*,WTF::PtrHash<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::RefPtr<WebCore::DOMWrapperWorld> >,WTF::HashTraits<WTF::Vector<WTF::OwnPtr<WebCore::UserStyleSheet>, 0ul>*> > {} *x_8_1_1; } x8; struct OwnPtr<WebCore::GroupSettings> { struct GroupSettings {} *x_9_1_1; } x9; }*)arg1;
- (id)init;
- (void)dealloc;
- (id)_data;

@end
