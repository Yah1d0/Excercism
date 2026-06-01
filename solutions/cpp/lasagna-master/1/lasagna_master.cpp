#include "lasagna_master.h"
#include <vector>
#include <string>

using namespace std;

namespace lasagna_master {

// TODO: add your solution here
    
int preparationTime(const vector<string>& layers, int time) {
    return layers.size() * time;
}

lasagna_master::amount quantities(const vector<string>& layers) {
    int ncount = 0;
    double scount = 0;
    for (const string& l : layers) {
        if (l == "noodles") ncount++;
        else if (l == "sauce") scount++;
        else continue;
    }
    return amount{ncount * 50, scount * 0.2};
}

void addSecretIngredient(vector<string>& myls, const vector<string>& sls) {
    myls[myls.size() - 1] = sls[sls.size() - 1];
}

void addSecretIngredient(vector<string>& myls, const string fls) {
    myls[myls.size() - 1] = fls;
}

vector<double> scaleRecipe(const vector<double>& scaleForTwo, int count) {
    vector<double> result;
    for (size_t i{0}; i < scaleForTwo.size(); i++) {
        result.push_back(scaleForTwo[i] * count / 2);
    }
    return result;
}
    
}  // namespace lasagna_master
