//
// Created by leoni on 03.05.2023.
//

#include "GameState.h"
GameState::GameState(sf::RenderWindow *window) : State(window) {

}

GameState::~GameState() = default;


void GameState::updateKeybinds(const float &dt) {
    this->checkQuit();
}

void GameState::endState() {
    std::cout << "END\n";
}

void GameState::render(sf::RenderWindow *target) {
    if(target){

    }else{
        this->player.render(this->window);
    }

}

void GameState::update(const float &dt) {
    this->updateKeybinds(dt);
    this->player.update(dt);
}

