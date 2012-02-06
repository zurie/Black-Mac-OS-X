/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <AppKit/NSButtonCell.h>

@interface _NSThemeWidgetCell : NSButtonCell
{
    int _buttonID;
    BOOL _hasRollover;
    BOOL _isObscured;
    BOOL _temporarilyDisabled;
    struct __CFDictionary *_coreUIDrawOptions;
}

- (void)_NSThemeWidgetCell_commonInit;	// IMP=0x00204b08
- (id)initTextCell:(id)arg1;	// IMP=0x00204abd
- (id)initImageCell:(id)arg1;	// IMP=0x0063a12a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0063a087
- (void)dealloc;	// IMP=0x00639f18
- (void)setCoreUIWidgetType:(struct __CFString *)arg1;	// IMP=0x00204ecc
- (void)setCoreUIWindowType:(struct __CFString *)arg1;	// IMP=0x00204eed
- (void)setTemporarilyDisabled:(BOOL)arg1;	// IMP=0x0019b1dd
- (BOOL)temporarilyDisabled;	// IMP=0x0007791d
- (BOOL)isEdited;	// IMP=0x0008fa0a
- (BOOL)isEnabled;	// IMP=0x000778b0
- (struct __CFString *)coreUIPresentationState;	// IMP=0x000e5ddb
- (struct __CFString *)coreUIState;	// IMP=0x000e5c9a
- (void)coreUIDrawWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x000e5b84
- (long long)buttonID;	// IMP=0x00639872
- (void)setButtonID:(long long)arg1;	// IMP=0x00204d88
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;	// IMP=0x00204f0c
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00089bab
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;	// IMP=0x00639883
- (int)getState:(id)arg1;	// IMP=0x0008a1b2
- (void)setObscured:(BOOL)arg1;	// IMP=0x0063988e
- (BOOL)isObscured;	// IMP=0x00108a5e
- (void)update;	// IMP=0x00639f62
- (id)accessibilityAttributeNames;	// IMP=0x00641f5d
- (id)accessibilitySubroleAttribute;	// IMP=0x00641b38
- (BOOL)accessibilityIsSubroleAttributeSettable;	// IMP=0x00641c18
- (id)accessibilityTitleAttribute;	// IMP=0x00641c20
- (BOOL)accessibilityIsFocusedAttributeSettable;	// IMP=0x00641c28
- (id)accessibilityDescriptionAttribute;	// IMP=0x00642356
- (BOOL)accessibilityIsDescriptionAttributeSettable;	// IMP=0x00641c30
- (void)accessibilityPerformAction:(id)arg1;	// IMP=0x00641d70

@end

