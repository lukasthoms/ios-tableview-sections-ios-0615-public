//
//  FISStudent.m
//  ios-tableview-sections
//
//  Created by Lukas Thoms on 6/16/15.
//  Copyright (c) 2015 The Flatiron School. All rights reserved.
//

#import "FISStudent.h"

@implementation FISStudent

-(instancetype) initWithName: (NSString*)name andFavoriteThings:(NSArray*)favoriteThings {
    self = [super init];
    _favoriteThings = favoriteThings;
    _name = name;
    return self;
}

@end
