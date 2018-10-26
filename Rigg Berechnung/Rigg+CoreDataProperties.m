//
//  Rigg+CoreDataProperties.m
//  Rigg Berechnung
//
//  Created by Gregor on 26.10.18.
//  Copyright © 2018 Gregor. All rights reserved.
//

#import "Rigg+CoreDataProperties.h"

@implementation Rigg

@dynamic creation;

-(void)awakeFromInsert {
    self.creation = [NSDate date];
}

@end
