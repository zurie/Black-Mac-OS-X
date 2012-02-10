//
//  UIColor+FromName.h
//  iBranchApp
//
//  Created by Joshua O'Dell on 6/29/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSColor (FromName) {

}

+ (NSColor*) colorFromName:(NSString*)name;
+ (NSColor*) colorFromHex:(NSString*)hexColor;
@end
