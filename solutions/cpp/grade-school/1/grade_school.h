#pragma once
#include <string>
#include <vector>
#include <map>

namespace grade_school {
    class school {
    public:
        void add(const std::string& name, int grade);
        std::map<int, std::vector<std::string>> roster() const;
        std::vector<std::string> grade(int grade) const;
    private:
        std::map<int, std::vector<std::string>> roster_;
    };
}
