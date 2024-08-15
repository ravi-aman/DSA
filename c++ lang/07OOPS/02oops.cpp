#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class player
{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth()
    {
        return health;
    }
    int getAge()
    {
        return age;
    }
    int getScore()
    {
        return score;
    }
    bool getAlive()
    {
        return alive;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setAlive(bool alive)
    {
        this->alive = alive;
    }
    int addScore(player a, player b)
    {
        return a.getScore() + b.getScore();
    }
};

int main()
{
    player aman;
    aman.setAge(20);
    aman.setScore(100);
    aman.setHealth(80);
    aman.setAlive(true);

    aman.getAge();
    aman.getScore();
    aman.getHealth();
    aman.getAlive();
    return 0;
}