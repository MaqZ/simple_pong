#include <iostream>
#include "screenmanager.hpp"
#include "matchscreen.hpp"
#include <SFML/Graphics.hpp>

int main(){
  ScreenManager &scrn = ScreenManager::get_instance();
  sf::RenderWindow app(sf::VideoMode(800, 600), "Simple Pong", sf::Style::None);

  scrn.change_screen(new MatchScreen, &app);
  
  while(app.isOpen()){
    sf::Event sf_event;

    while(app.pollEvent(sf_event)){
      if(sf_event.type == sf::Event::Closed){
        app.close();
      }
    }

    scrn.get_current_screen()->update();

    app.clear();

    scrn.get_current_screen()->render();

    app.display();
  }

  return 0;
}
