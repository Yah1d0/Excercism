#include <string>
#include <vector>

using namespace std;

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    string name{};
    // Number of votes the candidate has
    int votes{};
};

int vote_count(const ElectionResult& object) {
    return object.votes;
}

void increment_vote_count(ElectionResult& object, int number) {
    object.votes += number;
}

ElectionResult& determine_result(vector<ElectionResult>& final_count) {
    int winner_id = 0;
    for (int i = 1; i < final_count.size(); i++) {
        if (final_count[i].votes > final_count[winner_id].votes) {
            winner_id = i;
        }
    }
    final_count[winner_id].name = "President " + final_count[winner_id].name;
    return final_count[winner_id];
}

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.

// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.

// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.

}  // namespace election
