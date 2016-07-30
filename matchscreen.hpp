#ifndef MATCHSCREEN_HPP
#define MATCHSCREEN_HPP

#include "entity.hpp"
#include "gamescreen.hpp"
#include "padai.hpp"
#include "padplayer.hpp"
#include <vector>

class MatchScreen: public GameScreen {
  private:
    std::vector <Entity*> *entities;
  public:
    MatchScreen();

    std::vector <Entity*> *get_entities();

    void set_entities(std::vector <Entity*> *);

    void init(sf::RenderWindow*);
    void render();
    void uninit();
    void update();
};

#endif // MATCHSCREEN_HPP
