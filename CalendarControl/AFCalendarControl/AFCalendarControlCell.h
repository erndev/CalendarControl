//
//  AFCalendarControlCell.h
//  AFCalendarControl
//
//  Created by Keith Duncan on 02/09/2007.
//  Copyright 2007 thirty-three. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AFCalendarControlCell : NSCell {
 @private
	BOOL _today, _selected;
}

@property (assign, getter=isToday) BOOL today;
@property (assign, getter=isSelected) BOOL selected;

@end
