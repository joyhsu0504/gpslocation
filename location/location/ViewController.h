//
//  ViewController.h
//  location
//
//  Created by Joy Hsu on 2/11/16.
//  Copyright © 2016 Joy Hsu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)zoomIn:(id)sender;
- (IBAction)changeMapType:(id)sender;


@end

