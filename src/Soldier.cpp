#include "Soldier.h"
#include <cstdio>

Soldier::Soldier(float h, float x, float y)
    : Enemy(EnemyType::Soldier,h,x,y)
{

}

void Soldier::takeDamage(float damage){
    printf("Soldier hit aaah!\n");
    Enemy::takeDamage(damage);

}



