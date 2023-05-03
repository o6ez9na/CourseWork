//
// Created by leoni on 02.05.2023.
//

#ifndef COURSEWORK_ENTITY_H
#define COURSEWORK_ENTITY_H


#include "../Constants/constans.h"
class Entity {
public:
    Entity();
    virtual ~Entity();

    virtual void update(const float& dt);
    virtual void render(sf::RenderTarget* target);
    virtual void move(const float& dt, const float dirX, const float dirY);
private:
protected:
    sf::RectangleShape shape;
    float movementSpeed;
};


#endif //COURSEWORK_ENTITY_H
