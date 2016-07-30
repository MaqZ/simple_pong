#include "gamespace.hpp"

GameSpace::GameSpace(){}

// Get functions

unsigned short* GameSpace::get_all_boudaries(){
  return this->boundaries;
}

// Set functions

void GameSpace::set_boundaries(unsigned short _boundaries[]){
  for(int i = 0; i < 4; i++)
    this->boundaries[i] = _boundaries[i];
}

// Other functions

unsigned short GameSpace::get_boundary(GameSpace::gsPosition _gs_pos){
  return this->boundaries[_gs_pos];
}

