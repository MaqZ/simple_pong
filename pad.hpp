#ifndef PAD_HPP
#define PAD_HPP

#include "entity.hpp"

const int PAD_SPEED = 1;

class Pad: public Entity{
  protected:
    float velocity_y;

  public:
    Pad();

    float get_velocity_y();

    void set_velocity_y(float _velocity_y);

    void update_pos();
    virtual void update_velocity();
};

#endif // PAD_HPP
