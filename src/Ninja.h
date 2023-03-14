#pragma once
#include "Enemy.h"
class Ninja: public Enemy{
    public:
        Ninja(float h, float x, float y);
        virtual void takeDamage(float damage) override;

};