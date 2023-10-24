// Student class that stores name and average.
#include <string>

class Student {
    public:
    // constructor initializes data members
    Student(std::string studentName, int studentAverage): name(studentName) {
        // sets average data member if studentAverage is valid
        setAverage(studentAverage);
    }
    // setters
    void setName(std::string studentName) {
        name = studentName;
    }

    void setAverage(int studentAverage) {
        // validate studentAverage is between 0 and 100
        if (studentAverage > 0) {
            if (studentAverage <= 100) {
                average = studentAverage;
            }
        }
    }

    // getter
    std::string getName() const {
        return name;
    }

    int getAverage() const {
        return average;
    }

    // determines and returns the student's letter grade
    std::string getLetterGrade() const {
        std::string letterGrade;

        if (average >= 90) {
            letterGrade = "A";
        }
        else if (average >= 80) {
            letterGrade = "B";
        }
        else if (average >= 70) {
            letterGrade = "C";
        }
        else if (average >= 60) {
            letterGrade = "D";
        }
        else {
            letterGrade = "F";
        }
        return letterGrade;
    }

    private:
    std::string name;
    int average{0};
};