#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> rounded_scores{};
    for (int i = 0; i < student_scores.size(); ++i) {
        rounded_scores.emplace_back(student_scores.at(i));
        }
    return rounded_scores; 
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int student_fails{};
    for (int i{}; i < student_scores.size(); ++i) {
        if (student_scores.at(i) <= 40) 
            student_fails++;
    }
    return student_fails;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    const int failing_grade = 40;
    const int grade_jump = (highest_score - failing_grade) / 4;
    std::array<int, 4> grades{};
    for (int i = 0; i < 4; ++i) {
        grades[i] = failing_grade + 1 + i * grade_jump;
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> student_ranks;
    if (student_scores.size() != student_names.size()) {
        return {};
    }
    for (auto i = 0; i < student_scores.size(); ++i) {
        student_ranks.emplace_back(std::to_string(i + 1) 
        + ". " 
        + student_names.at(i)
        + ": "
        + std::to_string(student_scores.at(i)));
    }
    return student_ranks;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    const int ideal_score = 100;
    for (int i = 0; i < student_scores.size(); ++i) {
        if (student_scores.at(i) == ideal_score) { 
            return student_names.at(i); 
        }
    }
        
    return "";
}
