#ifndef GAMESPACE_HPP
#define GAMESPACE_HPP

class GameSpace {
  private:
    // top, right, bottom, left (0 - 3)
    unsigned short boundaries[4];
  public:
    GameSpace();
    enum gsPosition {POS_TOP, POS_RIGHT, POS_BOTTOM, POS_LEFT};

    void set_boundaries(unsigned short []);

    unsigned short* get_all_boudaries();

    unsigned short get_boundary(gsPosition);
};

#endif // GAMESPACE_HPP
