#include "padai.hpp"

void PadAi::update_velocity(Ball* _ball){
  float ball_pos = _ball->get_position().y;
  float pad_center_pos = this->get_position().y / 2.f;

  if(abs(ball_pos - pad_center_pos) > PAD_AI_BALL_DIFF_TRESHOLD / 100.f)
    this->velocity_y = (ball_pos > pad_center_pos) ? PAD_SPEED : -PAD_SPEED;
}
