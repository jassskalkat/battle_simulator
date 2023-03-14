#pragma once
#include "Enemy.h"
class Pirate: public Enemy{
    public:
        Pirate(float h, float x, float y);
        virtual void takeDamage(float damage) override;

};