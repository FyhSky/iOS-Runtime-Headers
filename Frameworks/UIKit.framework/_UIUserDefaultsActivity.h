/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UINavigationController, UIViewController, _UIActivityUserDefaults;

@interface _UIUserDefaultsActivity : UIActivity {
    NSArray *_availableActivities;
    UINavigationController *_navigationController;
    _UIActivityUserDefaults *_userDefaults;
    UIViewController *_userDefaultsViewController;
}

@property(copy) NSArray * availableActivities;
@property(retain) UINavigationController * navigationController;
@property(retain) _UIActivityUserDefaults * userDefaults;
@property(retain) UIViewController * userDefaultsViewController;

- (id)_activityImage;
- (void)_cleanup;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)availableActivities;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1;
- (id)navigationController;
- (void)setAvailableActivities:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserDefaultsViewController:(id)arg1;
- (id)userDefaults;
- (id)userDefaultsViewController;

@end
