//
//  ElectricalSafetyThreeViewController.h
//  Mr Wakeling's Science Year 7
//
//  Created by Robert Wakeling on 30/07/2012.
//
//

#import <UIKit/UIKit.h>
#import "Tester.h"

@interface ElectricalSafetyThreeViewController : UIViewController <UIAlertViewDelegate, UITextFieldDelegate>
{
    int theScore;
}

@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;

@property (weak, nonatomic) IBOutlet UITextField *conduct;
@property (weak, nonatomic) IBOutlet UITextField *shock;

@end
