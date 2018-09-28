#include <stdio.h>
#include "allegro5/allegro.h"

class Actor {

  public:

    Actor(string icon_file, int x_act, int y_act) {

      int x = x_act;
      int y = y_act;
      icon_file = icon;

    }

    int set_position(int x_pos, int y_pos) {

      int x = x_pos;
      int y = y_pos;

      int position = [x, y];

      return position;

    }

    int get_position() {

      int y[1];
      y[0] = Actor.x;
      y[1] = Actor.y;

      return y;

    }

    string get_icon() {

      return Actor.icon_file;

    }

    int infront_moveable(int new_x, int new_y, int dx, int dy) {

      int x_move = new_x;
      int y_move = new_y;

      if (x_move == Actor.x) {

        dx = 0;

      }

      if (x_move < Actor.x) {

        dx = -1;

      }

      if (x_move > Actor.x) {

        dx = 1;

      }

      if (y_move == Actor.y) {

        dy = 0;

      }

      if (y_move < Actor.y) {

        dy = -1;

      }

      if (y_move > Actor.y) {

        dy = 1;

      }

      return

    }

  //private:

  protected:

    string icon;
    int x;
    int y;



}
