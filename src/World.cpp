#include "World.h"
#include <cstdio>
World::World(int maxEnemies)
    :numEnemies(0), 
    player(nullptr), 
    enemies(new Enemy*[maxEnemies]), 
    maxEnemies(maxEnemies)
{

}

World::~World() {
    delete[] enemies;
    delete player;
}

int World::getNumEnemies() const {
    return numEnemies;
}

void World::addEnemy(Enemy* newEnemy) {
    if(numEnemies == maxEnemies)
        return;
    enemies[numEnemies++] = newEnemy;
}

Enemy* World::getEnemy(unsigned int index) const {
    if(index >= numEnemies)
        return nullptr;
    return enemies[index];
}

void World::setPlayer(Player* player) {
    this->player = player;
}

Player* World::getPlayer() const {
    return player;
}


