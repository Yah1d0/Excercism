#include "space_age.h"

namespace space_age {
    space_age::space_age(long long seconds) {
        sec = seconds;
    }

    long long space_age::seconds() const {
        return this->sec;
    }

    double space_age::on_earth() const {
        return this->sec / 3600 / 24 / 365.25;
    }
    
    double space_age::on_mercury() const {
        return this->on_earth() / 0.24084;
    }

    double space_age::on_venus() const {
        return this->on_earth() / 0.61519726;
    }

    double space_age::on_mars() const {
        return this->on_earth() / 1.8808158;
    }

    double space_age::on_jupiter() const {
        return this->on_earth() / 11.862615;
    }

    double space_age::on_saturn() const {
        return this->on_earth() / 29.447498;
    }

    double space_age::on_uranus() const {
        return this->on_earth() / 84.016846;
    }
    
    double space_age::on_neptune() const {
        return this->on_earth() / 164.79132;
    }
}
