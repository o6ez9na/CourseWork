//
// Created by leoni on 02.05.2023.
//

#include "State.h"

State::~State(){

}

State::State(sf::RenderWindow* window){
    this->window = window;
    this->quit = false;
}

void State::checkQuit() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
        this->quit = true;
    }
}

const bool &State::getQuit() const {
    return this->quit;
}


