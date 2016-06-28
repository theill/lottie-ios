//
//  LAAnimatablePointValue.h
//  LotteAnimator
//
//  Created by brandon_withrow on 6/23/16.
//  Copyright © 2016 Brandon Withrow. All rights reserved.
//

#import "LAAnimatableValue.h"
#import <Foundation/Foundation.h>

@interface LAAnimatablePointValue : NSObject <LAAnimatableValue>

- (instancetype)initWithPointValues:(NSArray *)pointValues
                      keyPath:(NSString *)keyPath
                     frameRate:(NSNumber *)frameRate;

@property (nonatomic, readonly) CGPoint initialPoint;

@end