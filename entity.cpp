#include "entity.hpp"

Entity::Entity(){
  this->rect = new sf::RectangleShape;
  this->rect->setPosition(sf::Vector2f(0, 0));
  this->rect->setSize(sf::Vector2f(0, 0));
  this->rect->setFillColor(sf::Color::White);
}

// Get functions

sf::Color Entity::get_color() {
  return this->rect->getFillColor();
}

sf::Vector2f Entity::get_size() {
  return this->rect->getSize();
}

sf::Vector2f Entity::get_position() {
  return this->rect->getPosition();
}

// Set functions

void Entity::set_color(sf::Color _color) {
  this->rect->setFillColor(_color);
}

void Entity::set_position(sf::Vector2f _position) {
  this->rect->setPosition(_position);
}

void Entity::set_rect(sf::RectangleShape& _rect) {
  this->rect = new sf::RectangleShape(_rect);
}

void Entity::set_size(sf::Vector2f _size) {
  this->rect->setSize(_size);
}

// Other functions

sf::Vector2f Entity::get_central_position(){
  return this->get_position() + (this->get_size())/2.f;
}

bool Entity::is_in_zone(sf::Vector2f _p1, sf::Vector2f _p2){
  float p_top = this->get_position().y;
  float p_bottom = this->get_position().y + this->get_size().y;
  float p_left = this->get_position().x;
  float p_right = this->get_position().x + this->get_size().x;

  float p2_top = _p1.y;
  float p2_bottom = _p2.y;
  float p2_left = _p1.x;
  float p2_right = _p2.x;

  return (((p_top >= p2_top) || (p_bottom <= p2_bottom)) && 
      ((p_left >= p2_left) || (p_right <= p2_right))) ? true : false;

}

void Entity::render(sf::RenderWindow* _window){
  _window->draw(*this->rect);
}
