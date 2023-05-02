//
// Created by leoni on 02.05.2023.
//

#ifndef COURSEWORK_PLAYER_H
#define COURSEWORK_PLAYER_H

#include "../Constants/constans.h"
#include "../Entity/Entity.h"

class Player : public Entity {
private:
    sf::Texture texture;
    sf::Sprite sprite;

    const float dx = 1;
    const float dy = 0.5;

    float curFrame;
    bool onGround = true;
    int moveSpeed = 1;
public:
    Player();
    ~Player();

    sf::Sprite &getSprite();

    int getHealth();

    void isRight(float dtTime);
    void isLeft(float dtTime);
    void isUp(float dtTime);
    void isDown(float dtTime);
    void isJump(float dtTime);

    void update();
    void render(sf::RenderWindow* window);


protected:
};


#endif //COURSEWORK_PLAYER_H