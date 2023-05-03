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
    while (!this->states.empty())
    {
        delete this->states.top();
        this->states.pop();
    }
}

Game::Game() {
    this->initWindow();
    this->initStates();
}

//Functions
void Game::updateEvents() {
        while (this->window->pollEvent(this->event))
            if (this->event.type == sf::Event::Closed)
                this->window->close();

        /*if(event.type == sf::Event::KeyPressed)
            stateManager.run(player,event.key.code, dt);*/
}

void Game::update() {
    this->updateEvents();
    if(!this->states.empty())
    {
        this->states.top()->update(this->dt);
        if (this->states.top()->getQuit()){
            this->states.top()->endState();
            delete this->states.top();
            this->states.pop();
        }
    }
    else
    {
        this->endApplication();
        this->window->close();
    }
}

void Game::render() {
    this->window->clear();
    /*this->window->draw(sprite);
    player->render(window);*/
    if(!this->states.empty())
        this->states.top()->render();
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

void Game::initStates() {
    this->states.push(new GameState(this->window));
}

void Game::endApplication() {
    std::cout << "Close APP\n";
}


