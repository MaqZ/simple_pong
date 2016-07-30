#ifndef BALL_HPP
#define BALL_HPP

#include "gamespace.hpp"
#include "entity.hpp"
#include "pad.hpp"

class Ball: public Entity {
  private:
    sf::Vector2f velocity;
  public:
    Ball();

    sf::Vector2f get_velocity();

    void set_velocity(sf::Vector2f);

    unsigned char get_state(std::vector<Pad*>*, GameSpace*);
};

#endif // BALL_HPP
