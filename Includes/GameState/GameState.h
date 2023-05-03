//
// Created by leoni on 03.05.2023.
//

#ifndef COURSEWORK_GAMESTATE_H
#define COURSEWORK_GAMESTATE_H
#include "../State/State.h"

class GameState: public State{
public:
    GameState(sf::RenderWindow *window);

    virtual ~GameState();

    void endState() override;

    void updateKeybinds(const float & dt) override;
    void update(const float& dt) override;
    void render(sf::RenderWindow* target = nullptr) override;
private:
    Entity player;
};


#endif //COURSEWORK_GAMESTATE_H
