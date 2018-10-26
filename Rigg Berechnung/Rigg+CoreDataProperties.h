//
//  Rigg+CoreDataProperties.h
//  Rigg Berechnung
//
//  Created by Gregor on 26.10.18.
//  Copyright © 2018 Gregor. All rights reserved.
//

#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Rigg : NSManagedObject

@property (nonatomic, retain) NSDate * creation;

@end

NS_ASSUME_NONNULL_END
