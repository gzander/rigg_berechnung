//
//  Rigg+CoreDataProperties.h
//  Rigg Berechnung
//
//  Created by Gregor on 26.10.18.
//  Copyright © 2018 Gregor. All rights reserved.
//
//

#import "Rigg+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Rigg (CoreDataProperties)

+ (NSFetchRequest<Rigg *> *)fetchRequest;

@property (nonatomic) double angel_alpha_i;
@property (nullable, nonatomic, copy) NSDate *creation;
@property (nonatomic) double dim_a_1;
@property (nonatomic) double dim_a_2;
@property (nonatomic) double dim_a_3;
@property (nonatomic) double dim_bd;
@property (nonatomic) double dim_d1;
@property (nonatomic) double dim_d2;
@property (nonatomic) double dim_e;
@property (nonatomic) double dim_e_max;
@property (nonatomic) double dim_e_max_height;
@property (nonatomic) double dim_h;
@property (nonatomic) double dim_i;
@property (nonatomic) double dim_jb_arm;
@property (nonatomic) double dim_jb_breite;
@property (nonatomic) double dim_o_k;
@property (nonatomic) double dim_p;
@property (nonatomic) double dim_s_1;
@property (nonatomic) double dim_s_2;
@property (nonatomic) BOOL hasdiamond;
@property (nonatomic) BOOL hasdoublelowershrouds;
@property (nonatomic) BOOL hasjumpbock;
@property (nonatomic) BOOL hasrunners;
@property (nonatomic) double percent_reef;
@property (nullable, nonatomic, copy) NSString *specification;
@property (nonatomic) int16_t spreadercount;
@property (nullable, nonatomic, retain) Boom *boom;
@property (nullable, nonatomic, retain) Hull *hull;
@property (nullable, nonatomic, retain) Mast *mast;

@end

NS_ASSUME_NONNULL_END
