//
// Created by leoni on 02.05.2023.
//

#ifndef COURSEWORK_STATEMANAGER_H
#define COURSEWORK_STATEMANAGER_H

#include "../Player/Player.h"
class StateManager {
public:
    StateManager();
    ~StateManager();
    void run(Player* player, sf::Keyboard::Key key, float time);
private:
};


#endif //COURSEWORK_STATEMANAGER_H
