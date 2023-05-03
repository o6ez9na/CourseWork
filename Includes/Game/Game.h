//
// Created by leoni on 16.03.2023.
//

#ifndef COURSEWORK_GAME_H
#define COURSEWORK_GAME_H


#include <fstream>

#include "../Constants/constans.h"
#include "../GameState/GameState.h"

class Game {
public:
    Game();
    ~Game();

    void endApplication();
    //update
    void updateEvents();
    void update();
    void updateDt();

    //core
    void run();

    //render
    void render();
private:
    void initWindow();
    void initStates();
    //Variables
    sf::Texture texture;
    sf::Sprite sprite;
    float dt;
    sf::Clock dtClock;
    std::stack<State *> states;
    sf::RenderWindow *window;
    sf::Event event;


};


#endif //COURSEWORK_GAME_H
