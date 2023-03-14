#include "Enemy.h"
#include "World.h"
#include "Soldier.h"
#include "Ninja.h"
#include "Pirate.h"
#include <stdlib.h>
#include <time.h>
#include <cstdio>

int randomPosition();


int main(){
    /*
    intitalizing the world
    */
    srand(time(NULL));
    const int MAX_ENEMIES = 50;
    const int soldierHealth = 120;
    const int ninjaHealth = 100;
    const int pirateHealth = 80;
    World theWorld(MAX_ENEMIES);
    World* worldPtr = &theWorld;

    for(int i = 0; i < MAX_ENEMIES; ++i) {
        Enemy* pEnemy = nullptr;
        int random = (rand() % 3); 
        switch(random) {
            case 0:
                pEnemy = new Soldier(soldierHealth,randomPosition(),randomPosition());
                break;
            case 1:
                pEnemy = new Ninja(ninjaHealth,randomPosition(),randomPosition());
                break;
            case 2:
                pEnemy = new Pirate(pirateHealth,randomPosition(),randomPosition());
                break;
        }

        theWorld.addEnemy(pEnemy);
    }

    Player* player = new Player(200,0,0);
    theWorld.setPlayer(player);
    while(player->update(worldPtr));
    puts("My work here is done:)");
    
}
// returns number between -50(inclusive) and 50(inclusive) 
int randomPosition(){
    return (rand()%200)-100;
}