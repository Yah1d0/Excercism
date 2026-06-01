#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string>& layers, int time = 2);
amount quantities(const std::vector<std::string>& layers);
void addSecretIngredient(std::vector<std::string>& myls, const std::vector<std::string>& sls);
void addSecretIngredient(std::vector<std::string>& myls, const std::string fls);
std::vector<double> scaleRecipe(const std::vector<double>& scaleForTwo, int count);
    
}  // namespace lasagna_master
