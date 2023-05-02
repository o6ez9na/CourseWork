//
// Created by leoni on 16.03.2023.
//

#ifndef COURSEWORK_GAME_H
#define COURSEWORK_GAME_H


#include <iostream>
#include <fstream>

#include "../Constants/constans.h"
#include "../Player/Player.h"
#include "../StateManager/StateManager.h"

class Game {
public:
    Game();
    ~Game();

    //Functions
    void updateEvents();
    void update();
    void render();
    void run();
    void updateDt();

    Player* player;
private:
    //Variables
    sf::Texture texture;
    sf::Sprite sprite;
    StateManager stateManager;
    float dt;
    sf::Clock dtClock;

    sf::RenderWindow *window;
    sf::Event event;

    void initWindow();
};


#endif //COURSEWORK_GAME_H
