#pragma once
enum class EnemyType{
    Soldier,
    Pirate,
    Ninja
};
class Enemy{
    protected:
        Enemy(EnemyType e, float health, float xPos, float yPos);
    public:

        void printInfo() const;

        bool isDead() const;

        virtual void takeDamage(float damage);

        float getX() const;
        
        float getY() const;


    private:
        const EnemyType type;
        const int id;
        float health;
        float xPosition;
        float yPosition;

};