//
//  DrawKitiOSClippingAbstractTest.h
//  DrawKit-iOS
//
//  Created by Adam Wulf on 11/20/13.
//  Copyright (c) 2013 Adam Wulf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ClippingBezier/ClippingBezier.h>
#import <DrawKit-iOS/DrawKit-iOS.h>
#import <PerformanceBezier/PerformanceBezier.h>
#import <XCTest/XCTest.h>
#import "UIBezierPath+Clipping_Private.h"

@interface DrawKitiOSAbstractTest : XCTestCase

@property (nonatomic, readonly) UIBezierPath* complexShape;

-(CGFloat) round:(CGFloat)val to:(int)digits;

-(BOOL) point:(CGPoint)p1 isNearTo:(CGPoint)p2;

-(BOOL) checkTanPoint:(CGFloat) f1 isLessThan:(CGFloat)f2;
-(BOOL) check:(CGFloat) f1 isLessThan:(CGFloat)f2 within:(CGFloat)marginOfError;

@end

