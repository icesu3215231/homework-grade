#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
	char grade;
	double gpa=0 ,gradeall=0;
	int All=0;
	do
	{
		cout << "Enter the letter grade (Enter X to exit)" << endl;
		cout << ":";
		cin >> grade;
		if(grade =='A' || grade=='a')gradeall += 4;
		else if(grade =='B' || grade=='b')gradeall += 3;
		else if(grade =='C' || grade=='c')gradeall += 2;
		else if(grade =='D' || grade=='a')gradeall += 1;
		else if(grade =='F' || grade=='f')gradeall += 0;
		else if(grade =='X' || grade=='x')break;
		else cout << "This input is invalid try agin" << endl;
		All++;
	}while (grade !='X' && grade !='x');
	cout << All << endl;
	gpa = gradeall / (double)All;
	cout << "Totle grade point :"<< gradeall << endl;
	cout << "GPA :" << gpa << "\n\n\n" << endl;
	return 0;
}
