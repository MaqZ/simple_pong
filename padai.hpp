#ifndef PADAI_HPP
#define PADAI_HPP

#include "pad.hpp"
#include "ball.hpp"

// Maximal difference between pad center and ball (in percents of pad length)
const unsigned short PAD_AI_BALL_DIFF_TRESHOLD = 20;

class PadAi: public Pad {
  public:
    void update_velocity(Ball*);
};

#endif // PADAI_HPP
