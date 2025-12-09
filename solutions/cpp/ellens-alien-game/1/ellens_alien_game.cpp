using namespace std;

namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
        public:
            Alien(int x, int y) {
                x_coordinate = x;
                y_coordinate = y;
            }
            int get_health() const {
                return health;
            }
            bool hit() {
                if (health > 0) {
                    health--;
                }
                return true;
            }
            bool is_alive() {
                return health ? true : false;
            }
            bool teleport(int new_x, int new_y) {
                x_coordinate = new_x;
                y_coordinate = new_y;
                return true;
            }
            bool collision_detection(Alien object) {
                if (object.x_coordinate == this->x_coordinate && 
                    object.y_coordinate == this->y_coordinate) {
                    return true;
                } else {
                    return false;
                }
            }
            int x_coordinate;
            int y_coordinate;
        private:
            int health{3};
    };
}  // namespace targets
