//
//  xsvAlerter.h
//  gittext
//
//  Created by Jake on 2/19/14.
//  Copyright (c) 2014 jprather. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FlatUIKit.h>

@interface xsvAlerter : NSObject

-(FUIAlertView*)createAlert:(NSString*)title messageText:(NSString*) message buttonText:(NSString*) buttonText;

@end
