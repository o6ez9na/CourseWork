//
// Created by leoni on 02.05.2023.
//

#ifndef COURSEWORK_PLAYER_H
#define COURSEWORK_PLAYER_H

#include "../Constants/constans.h"

class Player {
private:
    sf::Texture texture;
    sf::Sprite sprite;
    sf::FloatRect rect;
    bool onGround = true;
    float dx = 125;
    float dy = 0.5;

    float curFrame;
public:
    Player();
    ~Player();

    sf::Sprite &getSprite();


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