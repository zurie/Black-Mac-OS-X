//
//  UIColor+FromName.m
//  iBranchApp
//
//  Created by Joshua O'Dell on 6/29/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "NSColor+FromName.h"


@implementation NSColor (FromName)

+ (NSColor*) colorFromName:(NSString*)name{
	
	SEL colorSelector = NSSelectorFromString(name);
	if ([NSColor respondsToSelector:colorSelector]) {
		id newColor = [NSColor performSelector:colorSelector];
		return (NSColor*)newColor;
	}
	return nil;
}

+ (NSColor*) colorFromHex:(NSString*)hexColor{
	
	hexColor = [[hexColor stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];  
	
    // String should be 6 or 7 characters if it includes '#'  
    if ([hexColor length] < 6) 
		return nil;  
	
    // strip # if it appears  
    if ([hexColor hasPrefix:@"#"]) 
		hexColor = [hexColor substringFromIndex:1];  
	
	// strip 0x if it appears  
    if ([hexColor hasPrefix:@"0x"] || [hexColor hasPrefix:@"0X"]) 
		hexColor = [hexColor substringFromIndex:2];  
	
	
    // if the value isn't 6 or 8 characters at this point return 
    // the color black	
    if ([hexColor length] == 6 || [hexColor length] == 8){
        
		// Separate into r, g, b substrings  
		NSRange range;  
		range.location = 0;  
		range.length = 2;
        
		NSString *rString = [hexColor substringWithRange:range];  
        
		range.location = 2;  
		NSString *gString = [hexColor substringWithRange:range];  
        
		range.location = 4;  
		NSString *bString = [hexColor substringWithRange:range];
        
		// Scan values  
		unsigned int r, g, b, a = 255; 
		[[NSScanner scannerWithString:rString] scanHexInt:&r];  
		[[NSScanner scannerWithString:gString] scanHexInt:&g];  
		[[NSScanner scannerWithString:bString] scanHexInt:&b];  
        
		if ([hexColor length] == 8) {
			range.location = 6;  
			NSString *aString = [hexColor substringWithRange:range];  
			[[NSScanner scannerWithString:aString] scanHexInt:&a];  
		}
        
		return [NSColor colorWithDeviceRed:((float) r / 255.0f)  
                                     green:((float) g / 255.0f)  
                                      blue:((float) b / 255.0f)  
                                     alpha:((float) a / 255.0f)];
	}
	return nil;
}
@end
