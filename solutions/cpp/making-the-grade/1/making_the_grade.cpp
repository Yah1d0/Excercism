#include <array>
#include <string>
#include <vector>
using namespace std;

// Round down all provided student scores.
vector<int> round_down_scores(vector<double> student_scores) {
    vector<int> result;
    for (double score : student_scores) {
        result.push_back(static_cast<int>(score));
    }
    return result;
}

// Count the number of failing students out of the group provided.
int count_failed_students(vector<int> student_scores) {
    int count = 0;
    for (double score : student_scores) {
        count += score <= 40 ? 1 : 0;
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    array<int, 4> l_grades;
    int min = 41;
    int diff = (highest_score - min + 1) / 4.0;
    for (int i = 0; i < 4; i++) {
        l_grades[i] = min;
        min += diff;
    }
    return l_grades;
}

// Organize the student's rank, name, and grade information in ascending order.
vector<string> student_ranking(vector<int> student_scores, vector<string> student_names) {
    // TODO: Implement student_ranking
    vector<string> result;
    for (int i = 0; i < student_scores.size(); i++) {
        string subresult;
        subresult += to_string(i + 1);
        subresult += ". ";
        subresult += student_names[i];
        subresult += ": ";
        subresult += to_string(student_scores[i]);
        result.push_back(subresult);
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
string perfect_score(vector<int> student_scores, vector<string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100)
            return student_names[i];
    }
    return "";
}
