#include <iostream>
#include <fstream>


using namespace std;

class TermGrade {
    public:
        void TermGrade::OutputTest();
        bool ReadData(ifstream& fin, ofstream& fout);
        /*
        const bool MidsemesterScore();
        
        const double FinalScore(); */
        const char LetterGrade(double final_grade);
        void SetGrade(double grade);
    private:
        double assignments, exam1, exam2, final_grade;
        int ID;




};
