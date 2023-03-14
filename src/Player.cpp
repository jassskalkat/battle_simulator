#pragma once
#include "World.h"
#include "Player.h"
#include <cstdlib>
#include <cmath>

Player::Player(float h, float x, float y)
    :health(h)
    ,xPosition(x)
    ,yPosition(y)
{

}

bool Player::update(World* world) {
    bool anyAlive = false;
    for(int i = 0; i < world->getNumEnemies(); ++i){
        Enemy* enemy = world->getEnemy(i);
        if(enemy->isDead())
            continue;
        if(rand()%2 == 1){
            float damage = calcDamage(enemy);
            enemy->takeDamage(damage);
            enemy->printInfo();
        }
        anyAlive = true;
    }
    return anyAlive;
}



float Player::calcDamage(const Enemy* e) const
{
    float a = xPosition - e->getX();
    float b = yPosition - e->getY();

    return (-100/sqrt(2*(100*100)))*((sqrt(a*a + b*b)))+100;
    /**
     * rise/run * x + b
     * run = max distance from the player possible
     * x = distance from the player
     * */
}
   

