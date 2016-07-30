#include <iostream>
#include "screenmanager.hpp"
#include "matchscreen.hpp"
#include <SFML/Graphics.hpp>

/*
template<class T>
void print_v2(std::vector<std::vector<T>> _v){
  std::cout << "[";

  for(unsigned i = 0; i < _v.size(); i++){
    std::cout << "[";

    for(unsigned j = 0; j < _v[i].size(); j++){
      std::cout << _v[i][j];
      if(j != _v.size() - 1)
        std::cout << ", ";
    }
    std::cout << "]";
    
    if(i != _v.size() - 1)
      std::cout << ", ";
  }
  std::cout << "]\n";
}
*/

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
