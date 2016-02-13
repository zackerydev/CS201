#include <iostream>
#include <fstream>
#include "TermGrade.h"
using namespace std;

int main() {
    TermGrade students[100];
    ifstream input_file;
    ofstream output_file;

    input_file.open("grade1.txt");
    output_file.open("grade_output.txt");

    if (input_file.fail())
    {
        cout << "The input file failed to open " << endl;
    }


    int idx = 0;
    while (students[idx].ReadData(input_file, output_file))
    {
        students[idx].OutputTest();
        idx++;
    }





    input_file.close();
    output_file.close();
    system("pause");
}