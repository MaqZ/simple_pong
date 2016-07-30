#include "padplayer.hpp"

PadPlayer::PadPlayer(){}

// Get functions

sf::Keyboard::Key PadPlayer::get_ctrl_key_down(){
  return this->ctrl_key_down;
}

sf::Keyboard::Key PadPlayer::get_ctrl_key_up(){
  return this->ctrl_key_up;
}

// Set functions

void PadPlayer::set_ctrl_key_down(sf::Keyboard::Key* _ctrl_key_down){
  this->ctrl_key_down = *_ctrl_key_down;
}

void PadPlayer::set_ctrl_key_up(sf::Keyboard::Key* _ctrl_key_up){
  this->ctrl_key_up = *_ctrl_key_up;
}

// Other functions

void PadPlayer::update_velocity(sf::Event* _event){
  if(_event->key.code == this->ctrl_key_down)
    this->velocity_y = PAD_SPEED;
  else if(_event->key.code == this->ctrl_key_up)
    this->velocity_y = -PAD_SPEED; 
}
