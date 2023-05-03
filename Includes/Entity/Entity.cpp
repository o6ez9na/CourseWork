//
// Created by leoni on 02.05.2023.
//

#include "Entity.h"

Entity::Entity() {
    this->shape.setSize(sf::Vector2f(100.f, 100.f));
    this->shape.setFillColor(sf::Color::White);
    this->movementSpeed = 100.f;
}


Entity::~Entity() {

}

void Entity::move(const float& dt, const float dirX, const float dirY) {
    this->shape.move(dirX * this->movementSpeed * dt, dirY * this->movementSpeed * dt);
}

void Entity::update(const float &dt) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        move(dt, -1.f, 0.f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        move(dt, 1.f, 0.f);
    }
}

void Entity::render(sf::RenderTarget *target) {
    target->draw(this->shape);
}

