#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "gamespace.hpp"

class GameScreen{
  protected:
    sf::RenderWindow* window;

  public:
    GameScreen();

    virtual void init(sf::RenderWindow*);
    virtual void render();    
    virtual void uninit();    
    virtual void update();
};

#endif // GAMESCREEN_H
