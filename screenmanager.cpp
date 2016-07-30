#include "screenmanager.hpp"

ScreenManager::ScreenManager(){
  this->current_screen = NULL;
}

ScreenManager &ScreenManager::get_instance(){
  static ScreenManager instance;
  return instance;
}


GameScreen* ScreenManager::get_current_screen(){
  return this->current_screen;
}

void ScreenManager::change_screen(GameScreen* _new_scrn, sf::RenderWindow* _window){
  if(this->current_screen != NULL)
    this->current_screen->uninit();

  this->current_screen = _new_scrn;

  if(this->current_screen != NULL)
    this->current_screen->init(_window);
}
