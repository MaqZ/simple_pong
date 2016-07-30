#include "matchscreen.hpp"

MatchScreen::MatchScreen(){
  this->entities = new std::vector<Entity*> (0);
}

// Get functions

std::vector <Entity*> *MatchScreen::get_entities(){
  return this->entities;
}

// Set functions

void MatchScreen::set_entities(std::vector <Entity*> *_entities){
  this->entities = _entities;
}

// Other functions

void MatchScreen::init(sf::RenderWindow* _window){
  this->window = _window;
 

  this->entities->clear();

  this->entities->push_back(new PadPlayer());
  this->entities->at(0)->set_position(sf::Vector2f(200, 300));
  this->entities->at(0)->set_size(sf::Vector2f(50, 200));

  this->entities->push_back(new PadPlayer());
  this->entities->at(1)->set_position(sf::Vector2f(600, 300));
  this->entities->at(1)->set_size(sf::Vector2f(50, 200));
}

void MatchScreen::render(){
  for(auto x: *this->entities)
    x->render(this->window); 
}

void MatchScreen::uninit(){
  delete this->entities;
  delete this->window;
}

void MatchScreen::update(){

}
