//
//  FISStudent.h
//  ios-tableview-sections
//
//  Created by Lukas Thoms on 6/16/15.
//  Copyright (c) 2015 The Flatiron School. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISStudent : NSObject

@property (strong, nonatomic) NSArray *favoriteThings;
@property (strong, nonatomic) NSString *name;

-(instancetype) initWithName: (NSString*)name andFavoriteThings:(NSArray*)favoriteThings;

@end
