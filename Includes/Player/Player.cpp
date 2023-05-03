//
// Created by leoni on 02.05.2023.
//

#include "Player.h"

using namespace sf;

Player::Player() :curFrame(0) {
    texture.loadFromFile(RUN);
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 32, 31));
    sprite.setScale(3,3);
}

Player::~Player() = default;

void Player::isRight(float dtTime) {
    sprite.move(dx * dtTime, 0);
    curFrame += 0.1025;
    if (curFrame > 6)
        curFrame -= 6;
    sprite.setTextureRect(sf::IntRect(32 * int(curFrame), 0, 32, 31));
}

void Player::isLeft(float dtTime) {
    sprite.move(-dx * dtTime, 0);
    curFrame += 0.1025;
    if (curFrame > 6) curFrame -= 6;
    sprite.setTextureRect(sf::IntRect(32 * int(curFrame) + 32, 0, -32, 31));
}

void Player::isUp(float dtTime) {
    sprite.setPosition(0, -dy * dtTime);
}

void Player::isDown(float dtTime) {
    sprite.setPosition(0, dy * dtTime);
}

void Player::isJump(float dtTime) {

}

void Player::render(sf::RenderWindow *window) {
    window->draw(sprite);
}

Sprite &Player::getSprite() {
    return sprite;
}

void update() {

}




