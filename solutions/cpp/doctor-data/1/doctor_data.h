// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#pragma once
#include <string>
using namespace std;

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        string name;
        int generation;
        star_map::System current_system;
        int busters = 0;
    
        Vessel(string _name , int _generation,
    star_map::System _current_system = star_map::System::Sol) {
            this->name = _name;
            this->generation = _generation;
            this->current_system = _current_system;
        }
    
        Vessel replicate(const string& new_name) {
            Vessel new_vessel = Vessel(new_name, this->generation);
            new_vessel.generation++;
            new_vessel.current_system = this->current_system;
            new_vessel.name = new_name;
            return new_vessel;
        }

        void make_buster() {
            this->busters++;
        }

        bool shoot_buster() {
            if (this->busters > 0) {
                this->busters--;
                return true;
            }
            return false;
        }
    };

    string get_older_bob(const Vessel& vsl1, const Vessel& vsl2) {
        if (vsl1.generation < vsl2.generation) {
            return vsl1.name;
        } else {
            return vsl2.name;
        }
    }

    bool in_the_same_system(const Vessel& vsl1, const Vessel& vsl2) {
        return vsl1.current_system == vsl2.current_system;
    }
}