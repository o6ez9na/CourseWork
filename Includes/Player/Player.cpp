//
// Created by leoni on 02.05.2023.
//

#include "Player.h"

using namespace sf;

Player::Player() :curFrame(0) {
    texture.loadFromFile(IDLE);
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 1, 30, 30));
    sprite.setScale(3,3);
}

Player::~Player() = default;

int Player::getHealth() {
    return this->health;
}

void Player::isRight(float dtTime) {
    sprite.setPosition(dx * dtTime, 0);
}

void Player::isLeft(float dtTime) {
    sprite.setPosition(-dx * dtTime, 0);
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




