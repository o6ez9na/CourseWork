//
// Created by leoni on 02.05.2023.
//

#include "StateManager.h"

StateManager::~StateManager() = default;

StateManager::StateManager() = default;


void StateManager::run(Player *player, sf::Keyboard::Key key, float time) {
    if(key == sf::Keyboard::Left){
        player->isLeft(time);
    }
    if(key == sf::Keyboard::Right){
        player->isRight(time);
    }
}
