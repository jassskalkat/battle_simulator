#include "Enemy.h"
#include <cstdio>
#include <cmath>
static int counter = 0;

const char* typeToString(EnemyType e){
    switch(e){
        case EnemyType::Soldier:
            return "Soldier";
        case EnemyType::Pirate:
            return "Pirate";
        case EnemyType::Ninja:
            return "Ninja";
        default:
            return "invalid";
    }
}

Enemy::Enemy(EnemyType e, float health, float xPos, float yPos)
    : type(e)
    , id(counter++)
    , health(health)
    , xPosition(xPos)
    , yPosition(yPos)
{
    
}

void Enemy::printInfo() const {
    printf("Enemy[%d] is a %s with %.2f health\n",id,typeToString(type),health);
}

bool Enemy::isDead() const{
    return health<0.001;
}

void Enemy::takeDamage(float damage){
    health -= damage;
    if(health<0)
        health = 0;
    if(isDead()){
        puts("I'm dead");
    }
}

float Enemy::getX() const
{
    return xPosition;
}

float Enemy::getY() const
{
    return yPosition;
}

