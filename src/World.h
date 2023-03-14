#pragma once
#include "Enemy.h"
#include "Player.h"
class World{
    public:
        World(int maxEnemies);
        ~World();
        int getNumEnemies() const;
        void addEnemy(Enemy* newEnemy);
        Enemy* getEnemy(unsigned int index) const;
        void setPlayer(Player* player);
        Player* getPlayer() const;


    private:
        int numEnemies;
        Player* player;
        Enemy** enemies;
        const int maxEnemies;
};