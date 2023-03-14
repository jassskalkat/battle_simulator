#include "Pirate.h"
#include <cstdio>

Pirate::Pirate(float h, float x, float y)
    : Enemy(EnemyType::Pirate,h,x,y)
{

}

void Pirate::takeDamage(float damage){
    printf("Pirate hit arrr!\n");
    Enemy::takeDamage(damage);

}