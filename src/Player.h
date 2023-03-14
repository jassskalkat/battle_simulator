#pragma once
class Player{
    public:
        Player(float h, float x, float y);
        bool update(class World* world);
    private:
        float calcDamage(const Enemy* e) const;
        float calcDamageHelper(float maxDistance, float maxDamage) const;
        float health;
        float xPosition;
        float yPosition;
};