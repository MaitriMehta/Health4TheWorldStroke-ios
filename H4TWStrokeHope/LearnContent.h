//
//  LearnContent.h
//  H4TWStrokeHope
//
//  Created by Rachel on 4/14/17.
//  Copyright © 2017 Rachel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define CONTENT_TYPE_FAQ NSLocalizedString(@"Learn.faq", nil)
#define CONTENT_TYPE_SIGNSOFSTROKE NSLocalizedString(@"Learn.signsOfStroke", nil)//MM
#define CONTENT_TYPE_RISKFACTORS NSLocalizedString(@"Learn.riskFactors", nil)//MM
#define CONTENT_TYPE_BLOOD_PRESSURE NSLocalizedString(@"Learn.bloodPressure", nil)
#define CONTENT_TYPE_HEART_RATE NSLocalizedString(@"Learn.heartRate", nil)
#define CONTENT_TYPE_BLOOD_SUGAR NSLocalizedString(@"Learn.bloodSugar", nil)
#define CONTENT_TYPE_DIET NSLocalizedString(@"Learn.diet", nil)
#define CONTENT_TYPE_BLADDER_BOWEL NSLocalizedString(@"Learn.bladderBowel", nil)
#define CONTENT_TYPE_EXERCISES NSLocalizedString(@"Learn.exercises", nil)
#define CONTENT_TYPE_SHOWER_BATH NSLocalizedString(@"Learn.showerBath", nil)
#define CONTENT_TYPE_HOME_MOD NSLocalizedString(@"Learn.homeMod", nil)
#define CONTENT_TYPE_SMOKING NSLocalizedString(@"Learn.smoking", nil)
#define CONTENT_TYPE_SLEEP NSLocalizedString(@"Learn.sleep", nil)

/* Content dictionary  keys & values */
#define TEXT_TYPE_KEY @"TextType" // key
#define TEXT_TYPE_HEADER @"Header" // value
#define TEXT_TYPE_ATTRIBUTED_PARAGRAPH @"AttributedParagraph" // value
#define TEXT_TYPE_PARAGRAPH @"Paragraph"
#define TEXT_TYPE_BULLETS @"BulletPoints" // value
#define TEXT_TYPE_ATTRIBUTED_BULLETS @"AttributedBulletPoints" // value
#define TEXT_KEY @"Text"

#define LEARN_PARAGRAPH_FONT [UIFont fontWithName:@"Lato-light" size:18.0]
#define LEARN_PARAGRAPH_FONT_BOLD [UIFont fontWithName:@"Lato-bold" size:18.0]


/*
 * LearnContent Data Model
 * ------------------------
 * Contains all the data for a learn content section (e.g. "Blood Pressure"): 
 * the title, the headers, the paragraphs, the background color, and any images.
 *
 */

@interface LearnContent : NSObject
@property NSString *contentTitle;
@property UIColor *contentBGColor;
@property UIColor *textColor;
@property NSMutableArray *content; /* Array of dictionaries in the "problem" section */
@property NSArray *images;
@property NSString *backButtonImageStr; /* Name of image for back button */

/* Given a title, returns the LearnContent object containing all the information for that section. */
- (id)initWithContentTitle:(NSString *)title;
/* Returns an image representing the given type. */
+ (NSString *)getImageNameForType:(NSString *)type;
@end
