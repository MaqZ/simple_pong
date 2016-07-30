#ifndef SCREENMANAGER_HPP
#define SCREENMANAGER_HPP

#include "gamescreen.hpp"

class ScreenManager {
  private:
    ScreenManager();
    
    GameScreen* current_screen;

    ScreenManager(ScreenManager const&);
    void operator=(ScreenManager const&);

  public:
    static ScreenManager &get_instance();

    GameScreen* get_current_screen();

    void change_screen(GameScreen*, sf::RenderWindow*);
};

#endif
