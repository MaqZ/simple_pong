#include "pad.hpp"

extern const int PAD_SPEED;

Pad::Pad(){}

// Get functions

float Pad::get_velocity_y() {
  return this->velocity_y;
}

// Set functions

void Pad::set_velocity_y(float _velocity_y) {
  this->velocity_y = _velocity_y;
}

// Other functions

void Pad::update_pos(){
  this->set_position(
    sf::Vector2f(
      this->rect->getPosition().x,
      this->rect->getPosition().y + this->velocity_y
    )
  );
  this->velocity_y -= 0.1 * this->velocity_y;
}

void Pad::update_velocity(){}
