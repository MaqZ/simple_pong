#include "ball.hpp"

Ball::Ball(){}

// Get functions

sf::Vector2f Ball::get_velocity(){
  return this->velocity;
}

// Set functions

void Ball::set_velocity(sf::Vector2f _velocity){
  this->velocity = _velocity;
}

// Other functions

// get_state results:
// 0 - nothing
// 1 - pad touched => reverse velocity_x, 
//                    velocity_y = speed * center2ball_diff
// 2 - ball touched top or bottom => reverse velocity_y
// 4 - ball touched left side, point for the right player, reset position 
// 8 - ball touched right side, point for the left player, reset position 

unsigned char Ball::get_state(std::vector<Pad*>* _pads, GameSpace* _gspace){
  unsigned char x = 0;

  for(auto *pad: *_pads){
    if(this->is_in_zone(pad->get_position(), pad->get_position() + pad->get_size()))
      x |= 1; 

    if(this->get_position().y <= _gspace->get_boundary(GameSpace::POS_TOP) || 
      this->get_position().y >= _gspace->get_boundary(GameSpace::POS_BOTTOM))
      x |= 2;

    if(this->get_position().x + this->get_size().x <= _gspace->get_boundary(GameSpace::POS_LEFT))
      x |= 4;
    else if(this->get_position().x >= _gspace->get_boundary(GameSpace::POS_RIGHT))
      x |= 8;
  }
  return x;
}
