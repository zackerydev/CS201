#include <iostream>
#include <fstream>
#include "TermGrade.h"
using namespace std;

int main() {
    TermGrade students[20];
    ifstream input_file;
    ofstream output_file;

    input_file.open("grade1.txt");
    output_file.open("grade_output.txt");

    for (int i = 0; i < 20; i++)
    {
        students[i].ReadData(input_file, output_file);
        students[i].OutputTest();
    }




    input_file.close();
    output_file.close();
    system("pause");
}