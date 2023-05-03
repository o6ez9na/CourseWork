//
// Created by leoni on 02.05.2023.
//

#ifndef COURSEWORK_STATE_H
#define COURSEWORK_STATE_H

#include "../Entity/Entity.h"

class State {
public:
    State(sf::RenderWindow *window);
    ~State();

    const bool& getQuit() const;

    virtual void update(const float &dt) = 0;
    virtual void render(sf::RenderWindow *target = nullptr) = 0;
    virtual void updateKeybinds(const float& dt) = 0;

    virtual void checkQuit();
    virtual void endState() = 0;


protected:
    bool quit;
    sf::RenderWindow *window;
    std::vector<sf::Texture> textures;
};


#endif //COURSEWORK_STATE_H
