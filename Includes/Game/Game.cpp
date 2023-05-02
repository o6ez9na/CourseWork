//
// Created by leoni on 16.03.2023.
//

#include "Game.h"

void Game::initWindow() {

    std::ifstream file(R"(F:\CourseWork\Config\window.ini)");

    std::string title = "None";
    sf::VideoMode window_bounds(100,100);
    unsigned framerate_limit = 120;
    bool vertical_sync_enabled = false;

    if(file.is_open()){
        std::getline(file, title);
        file >> window_bounds.width >> window_bounds.height;
        file >> framerate_limit;
        file >> vertical_sync_enabled;
        std::cout << "Open \n";
    }
    texture.loadFromFile(BACKGROUND_LAYER_ONE);
    sprite.setTexture(texture);

    this->window = new sf::RenderWindow(sf::VideoMode
            (window_bounds.width, window_bounds.height), TITLE, sf::Style::Close);
    this->window->setFramerateLimit(framerate_limit);
    this->window->setVerticalSyncEnabled(vertical_sync_enabled);
}

//constructor and destructor
Game::~Game() {
    delete this->window;
}

Game::Game() {
    player = new Player();
    this->initWindow();
    player->getSprite().setPosition(50,450);
}

//Functions
void Game::updateEvents() {
        while (this->window->pollEvent(this->event))
            if (this->event.type == sf::Event::Closed)
                this->window->close();

        if(event.type == sf::Event::KeyPressed)
            stateManager.run(player,event.key.code, dt);
}

void Game::update() {
    this->updateEvents();
}

void Game::render() {
    this->window->clear();
    this->window->draw(sprite);
    player->render(window);

    this->window->display();
}

void Game::run() {
    while (this->window->isOpen())
    {
        this->updateDt();
        this->update();
        this->render();
    }
}

void Game::updateDt() {
    this->dt = this->dtClock.restart().asSeconds();
}


