//
//  AFCalendarControl.h
//  AFCalendarControl
//
//  Created by Keith Duncan on 12/08/2007.
//  Copyright 2007 thirty-three. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "AFKeyValueBinding.h"

/*
 @brief
 This binding should yield an NSDate to determine which day the model object is accociated with.
 */
extern NSString *const AFContentDatesBinding;

/*
 @brief
 This binding should yield a boolean to determine whether to show the date as highlighed or not.
 Currently, a highlighted date is drawn with a dot below the day number.
 */
extern NSString *const AFDateHighlightedBinding;

/*
 @brief
 This class draws a calander which is similar to the iPhone calendar, and iCal mini calendar.
 Currently, it only supports a single event per unique date as that's all I needed when I wrote it.
 */
@interface AFCalendarControl : NSControl <AFKeyValueBinding> {
@private
	NSMutableDictionary *_bindingInfo;
    
	SEL _doubleAction;
	
	NSButton *_directionButtons[2];
	
	struct {
		NSRange monthRanges[3];
		NSUInteger firstWeekday, lastWeekday;
	} _calendarInfo;
	
	NSUInteger _selectedDay;
	NSMutableIndexSet *_highlightedDays;
	
	NSDateComponents *_edgeDateComponents[2];
    
    NSDateFormatter *_monthFormatter;
    

}

/*
 @brief
 This sets the current month date value too.
 */
@property (assign) NSDate *selectedDate;

@property (assign) NSDate *currentMonth; 

/*
 @brief
 Valid values are NSMinYEdge and NSMaxYEdge for minimum and maximum months respectively.
 */
- (void)setBoundaryDate:(NSDate *)date forEdge:(NSRectEdge)edge;

/*
 @brief
 This selector is sent to the control's target, should be of the action method form <tt>-someAction:</tt>.
 */
@property (assign) SEL doubleAction;

@property (retain) NSMutableIndexSet *highlightedDays;

@end
