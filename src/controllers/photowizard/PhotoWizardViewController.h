//
//  PhotoWizardViewController.h
//  CycleStreets
//
//  Created by neil on 28/02/2012.
//  Copyright (c) 2012 CycleStreets Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SuperViewController.h"
#import "LayoutBox.h"
#import "PhotoCategoryManager.h"
#import "UploadPhotoVO.h"
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "CopyLabel.h"


#define MAXWIZARDVIEWS 7

typedef NS_ENUM(NSUInteger, PhotoWizardViewState) {
	PhotoWizardViewStateInfo=0,
	PhotoWizardViewStatePhoto=1,
	PhotoWizardViewStateLocation=2,
	PhotoWizardViewStateCategory=3,
	PhotoWizardViewStateDescription=4,
	PhotoWizardViewStateUpload=5,
	PhotoWizardViewStateResult=6
};


@interface PhotoWizardViewController : SuperViewController<UITextViewDelegate,
UIImagePickerControllerDelegate,UIScrollViewDelegate,UINavigationControllerDelegate,UIGestureRecognizerDelegate>{
	Class popoverClass;
}

@property (nonatomic, assign, getter=isModal) BOOL isModal;


-(IBAction)cameraButtonSelected:(id)sender;
-(IBAction)libraryButtonSelected:(id)sender;
-(IBAction)cancelUploadPhoto:(id)sender;
-(IBAction)closeWindowButtonSelected:(id)sender;
-(IBAction)textViewKeyboardShouldClear:(id)sender;

-(IBAction)navigateToPreviousView:(id)sender;
-(IBAction)navigateToNextView:(id)sender;

@end
