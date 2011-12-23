/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUSymbolOwner, VMULinkedListEntry;

@interface VMULinkedListEntry : NSObject  {
    VMULinkedListEntry *_prev;
    VMULinkedListEntry *_next;
    unsigned int _size;
    VMUSymbolOwner *_symbolOwner;
}

+ (id)linkedListEntryWithSymbolOwner:(id)arg1;

- (id)next;
- (unsigned int)size;
- (id)initWithSymbolOwner:(id)arg1;
- (void)setPrev:(id)arg1;
- (void)setNext:(id)arg1;
- (id)prev;
- (id)symbolOwner;
- (id)description;
- (void)dealloc;

@end