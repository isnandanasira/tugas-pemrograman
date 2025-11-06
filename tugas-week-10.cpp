#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void getData(studentType s[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Masukkan nama depan, nama belakang, dan nilai ke-"
<<i + 1 << ": ";
        cin >> s[i].studentFName >> s[i].studentLName >> s[i].testScore;
   }
}

void assignGrade(studentType s[], int size) {
    for (int i = 0; i < size; i++) {
        int score = s[i].testScore;
        if (score >= 90) s[i].grade = 'A';
        else if (score >= 80) s[i].grade = 'B';
        else if (score >= 70) s[i].grade = 'C';
        else if (score >= 60) s[i].grade = 'D';
        else s[i].grade = 'F';
    }
}

int highestScore(studentType s[], int size) {
    int highest = s[0].testScore;
    for (int i = 1; i < size; i++) {
        if (s[i].testScore > highest)
            highest = s[i].testScore;
    }
    return highest;
}

void printHighest(studentType s[], int size, int highest) {
    cout << "\nsiswa dengan nilai tertinggi (" << highest << ") :\n";
    for (int i = 0; i < size; i++) {
        if (s[i].testScore == highest)
        cout << s[i].studentLName << ", " << s[i].studentFName << endl;
    }
}

void printAll(studentType s[], int size) {
    cout << "\nDaftar Nilai Siswa:\n";
    cout << left << setw(20) << "Nama"
         << setw(10) << "Nilai"
         << "Grade\n";
    cout << "----------------------------------\n";

    for (int i = 0; i < size; i++) {
        string fullName = s[i].studentLName + ", " + s[i].studentFName;
        cout << left << setw(20) << fullName
             << setw(10) << s[i].testScore
             << s[i].grade << endl;
    }
}

int main() {
    const int SIZE = 20;
    studentType students[SIZE];

    getData(students, SIZE);
    assignGrade(students, SIZE);
    printAll(students, SIZE);

    int top = highestScore(students, SIZE);
    printHighest(students, SIZE, top);

    return 0;
}