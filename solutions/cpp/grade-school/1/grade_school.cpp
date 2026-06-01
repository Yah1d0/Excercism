#include "grade_school.h"
#include <string>
#include <vector>
#include <algorithm>
#include <map>

namespace grade_school {
    void school::add(const std::string& name, int grade) {
        auto& students = roster_[grade];
        auto it = std::upper_bound(begin(students), end(students), name);
        students.insert(it, name);
    }

    std::map<int, std::vector<std::string>> school::roster() const {
        return roster_;
    }
    
    std::vector<std::string> school::grade(int grade) const {
        auto it = roster_.find(grade);
        if (it != end(roster_)) {
            return it->second;
        }
        return {};
    }
}
