#include <iostream>
#include <fstream>
#include "TermGrade.h"
using namespace std;

int main() {
    TermGrade first_student;
    first_student.SetGrade(90.0);
    ifstream input_file;
    ofstream output_file;

    input_file.open("grade1.txt");
    output_file.open("grade_output.txt");



    input_file.close();
    output_file.close();
    cout << first_student.LetterGrade(90.0);
    system("pause");
}