#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>

class Entity {
  protected:
    sf::RectangleShape* rect;

  public:
    Entity();

    sf::Color get_color();
    sf::Vector2f get_position();
    sf::RectangleShape* get_rect();
    sf::Vector2f get_size();

    void set_color(sf::Color);
    void set_position(sf::Vector2f);
    void set_rect(sf::RectangleShape&);
    void set_size(sf::Vector2f);
    
    sf::Vector2f get_central_position();
    bool is_in_zone(sf::Vector2f, sf::Vector2f);
    void render(sf::RenderWindow*);
};

#endif // ENTITY_HPP
