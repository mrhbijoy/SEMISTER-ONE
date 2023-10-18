#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
    private:
        string name;
        int rollNo;
        vector<int> marks;
    public:
        Student(string name, int rollNo) {
            this->name = name;
            this->rollNo = rollNo;
        }
        void addMark(int mark) {
            marks.push_back(mark);
        }
        string getName() {
            return name;
        }
        int getRollNo() {
            return rollNo;
        }
        vector<int> getMarks() {
            return marks;
        }
        double getAverage() {
            double sum = 0;
            for(int i = 0; i < marks.size(); i++) {
                sum += marks[i];
            }
            return sum / marks.size();
        }
};

class StudentDatabase {
    private:
        vector<Student> students;
    public:
        void addStudent(Student student) {
            students.push_back(student);
        }
        void addMark(int rollNo, int mark) {
            for(int i = 0; i < students.size(); i++) {
                if(students[i].getRollNo() == rollNo) {
                    students[i].addMark(mark);
                    break;
                }
            }
        }
        void getMarks(int rollNo) {
            for(int i = 0; i < students.size(); i++) {
                if(students[i].getRollNo() == rollNo) {
                    vector<int> marks = students[i].getMarks();
                    for(int j = 0; j < marks.size(); j++) {
                        cout << marks[j] << " ";
                    }
                    cout << endl;
                    break;
                }
            }
        }
        void displayStudentInfo(int rollNo) {
            for(int i = 0; i < students.size(); i++) {
                if(students[i].getRollNo() == rollNo) {
                    vector<int> marks = students[i].getMarks();
                    cout << "Name: " << students[i].getName() << endl;
                    cout << "Roll No: " << students[i].getRollNo() << endl;
                    cout << "Marks: ";
                    for(int j = 0; j < marks.size(); j++) {
                        cout << marks[j] << " ";
                    }
                    cout << endl;
                    break;
                }
            }
        }
        void displayTopPerformers() {
            vector<pair<string, double>> performers;
            for(int i = 0; i < students.size(); i++) {
                performers.push_back(make_pair(students[i].getName(), students[i].getAverage()));
            }
            sort(performers.begin(), performers.end(), [](pair<string, double> a, pair<string, double> b) {
                return a.second > b.second;
            });
            cout << "Top Performers:" << endl;
            for(int i = 0; i < performers.size(); i++) {
                cout << performers[i].first << " - " << performers[i].second << endl;
            }
        }
};

int main() {
    StudentDatabase database;
    database.addStudent(Student("John", 1));
    database.addStudent(Student("Jane", 2));
    database.addStudent(Student("Bob", 3));
    database.addMark(1, 80);
    database.addMark(1, 90);
    database.addMark(2, 85);
    database.addMark(2, 95);
    database.addMark(3, 75);
    database.addMark(3, 85);
    database.displayStudentInfo(1);
    database.displayStudentInfo(2);
    database.displayStudentInfo(3);
    database.displayTopPerformers();
    return 0;
}
