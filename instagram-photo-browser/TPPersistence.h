//
//  TPPersistence.h
//  instagram-photo-browser
//
//  Created by Tyler Powers on 11/4/13.
//  Copyright (c) 2013 Tyler Powers. All rights reserved.
//


@interface TPPersistence : NSObject

@property (nonatomic,strong) NSManagedObjectContext *mainMOC;

- (void)saveMainMOC;

@end
