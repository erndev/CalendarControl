//
//  AFCalendarButton.h
//  AFCalendarControl
//
//  Created by Keith Duncan on 30/06/2007.
//  Copyright 2007 thirty-three. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/*
	@brief
	This class draws a button similar to the default disclosure button, however
	it accomodates for flipping the direction the arrow points in.
 */
@interface AFCalendarButton : NSButton

@end

enum {
	AFCalendarButtonDirectionLeft = -1,
	AFCalendarButtonDirectionRight = 1
};
typedef NSInteger AFCalendarButtonDirection;

@interface KDCalendarButtonCell : NSButtonCell {
 @private
	AFCalendarButtonDirection _direction;
}

@property (assign) AFCalendarButtonDirection direction;

@end
