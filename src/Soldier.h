#pragma once
#include "Enemy.h"
class Soldier: public Enemy{
    public:
        Soldier(float h, float x, float y);
        virtual void takeDamage(float damage) override;

};