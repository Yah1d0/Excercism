#include "power_of_troy.h"
#include <memory>

namespace troy {
    void give_new_artifact(human& person, std::string artifact_name) {
        person.possession = std::make_unique<artifact>(artifact_name);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& first_item,
    std::unique_ptr<artifact>& second_item) {
        std::unique_ptr<artifact> temp = std::move(first_item);
        first_item = std::move(second_item);
        second_item = std::move(temp);
    }

    void manifest_power(human& person, std::string power_effect) {
        person.own_power = std::make_shared<power>(power_effect);
    }

    void use_power(human& caster, human& target) {
        target.influenced_by = caster.own_power;
    }

    int power_intensity(human& person) {
        if (!(person.own_power)) return 0;
        return person.own_power.use_count();
    }
}  // namespace troy
