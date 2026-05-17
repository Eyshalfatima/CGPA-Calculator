#include <iostream>
#include <iomanip>
using namespace std;

float getGradePoint(string grade) {
    if (grade == "A" || grade == "a") return 4.0;
    else if (grade == "A-") return 3.7;
    else if (grade == "B+") return 3.3;
    else if (grade == "B") return 3.0;
    else if (grade == "B-") return 2.7;
    else if (grade == "C+") return 2.3;
    else if (grade == "C") return 2.0;
    else if (grade == "D") return 1.0;
    else return 0;
}

int main() {

    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << " --------------------  CGPA CALCULATOR  ------------------------ " << endl;
    cout << " ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    int semesters;
    cout << "Enter number of semesters: ";
    cin >> semesters;

    float totalCGPA = 0;

    for (int s = 1; s <= semesters; s++) {
        int courses;
        cout << "\n--- Semester " << s << " ---\n";
        cout << "Enter number of courses: ";
        cin >> courses;

        float totalCredits = 0;
        float totalPoints = 0;

        string courseName, grade;
        float credit;

        cout << "\nCourse Details:\n";

        for (int i = 1; i <= courses; i++) {
            cout << "Course " << i << " Name: ";
            cin >> courseName;

            cout << "Enter Grade (A, B+, etc): ";
            cin >> grade;

            cout << "Enter Credit Hours: ";
            cin >> credit;

            float gp = getGradePoint(grade);

            totalCredits += credit;
            totalPoints += (gp * credit);
        }

        float GPA = totalPoints / totalCredits;
        totalCGPA += GPA;

        cout << fixed << setprecision(2);
        cout << "Semester " << s << " GPA = " << GPA << endl;
    }

    float CGPA = totalCGPA / semesters;

   
    cout << "Final CGPA = " << CGPA << endl;
   
    return 0;
}