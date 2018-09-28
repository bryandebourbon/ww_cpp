#include <stdio.h>

class Stage {

  public:

    std::vector<int> actors;

    int player1;

    int player2;

    const int Width;

    const int Height;

    static const icon_dimension;

    int pixel_width;

    int pixel_height;

    int pixel_size;

    static const Screen;

    string stage_pic;

    string colour;

    string colour_change;

    int is_winner;

    int is_in_bounds(int x, int y) {

      int x_in = Stage.is_in_bounds_x(x);
      int y_in = State.is_in_bounds_y(y);

      if (x_in || y_in == -1) {

        return 0;

      }

      else {

        return 1;

      }

    }

    int is_in_bounds_x(int x) {

      int x_bounds = x;

      if (x_bounds > width) {

        return 0;

      }

      else {

        return 1;

      }

    }

    int is_in_bounds_y(int y) {

      if (y_bounds > height) {

        return 0;

      }

      else {

        return 1;

      }

    }

    int get_width() {

      return Width;

    }

    int get_height() {

      return Height;

    }

    void set_player(int play1, int play2) {

      player1 = play1;
      player2 = play2;

    }

    void remove_player(int other) {

      if (other == player1) {

        player1 = 0;

      }

      if (other == player2) {

        player2 = 0;

      }

    }

    //player_event

    void add_actor(Actor* actor) {

      actors.push_back(actor);

    }

    void remove_actor(Actor* actor) {

      actors.erase(actors.begin());

    }

    //step

    int get_actors() {

      return actors;

    }

    /*int get_actor(int x, int y) {

      int i;
      int actors_size = actors.size();
      std::vector<int> current_actors = Stage.get_actors();

      if (!is_in_bounds_x(x) || !is_in_bounds_y(y)) {

        return 0;

      }

      else {
        for (i = 0; i < actors_size; i++) {



        }

      }

    }*/

}
