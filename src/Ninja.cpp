#include "Ninja.h"
#include <cstdio>

Ninja::Ninja(float h, float x, float y)
    : Enemy(EnemyType::Ninja,h,x,y)
{

}

void Ninja::takeDamage(float damage){
    printf("Ninja hit aaah!\n");
    Enemy::takeDamage(damage);

}