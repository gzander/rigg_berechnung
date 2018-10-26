//
//  Rigg+CoreDataProperties.m
//  Rigg Berechnung
//
//  Created by Gregor on 26.10.18.
//  Copyright © 2018 Gregor. All rights reserved.
//
//

#import "Rigg+CoreDataProperties.h"

@implementation Rigg (CoreDataProperties)

+ (NSFetchRequest<Rigg *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"Rigg"];
}

@dynamic angel_alpha_i;
@dynamic creation;
@dynamic dim_a_1;
@dynamic dim_a_2;
@dynamic dim_a_3;
@dynamic dim_bd;
@dynamic dim_d1;
@dynamic dim_d2;
@dynamic dim_e;
@dynamic dim_e_max;
@dynamic dim_e_max_height;
@dynamic dim_h;
@dynamic dim_i;
@dynamic dim_jb_arm;
@dynamic dim_jb_breite;
@dynamic dim_o_k;
@dynamic dim_p;
@dynamic dim_s_1;
@dynamic dim_s_2;
@dynamic hasdiamond;
@dynamic hasdoublelowershrouds;
@dynamic hasjumpbock;
@dynamic hasrunners;
@dynamic percent_reef;
@dynamic specification;
@dynamic spreadercount;
@dynamic boom;
@dynamic hull;
@dynamic mast;

@end
