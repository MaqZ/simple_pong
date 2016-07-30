#ifndef PADPLAYER_HPP
#define PADPLAYER_HPP

#include "pad.hpp"

class PadPlayer: public Pad{
  private:
    // Two variables below store two keys - for the pad going down and up
    sf::Keyboard::Key ctrl_key_down;
    sf::Keyboard::Key ctrl_key_up;

  public:
    PadPlayer();

    sf::Keyboard::Key get_ctrl_key_down();
    sf::Keyboard::Key get_ctrl_key_up();

    void set_ctrl_key_down(sf::Keyboard::Key*);
    void set_ctrl_key_up(sf::Keyboard::Key*);

    void update_velocity(sf::Event*);
};

#endif // PADPLAYER_HPP
