#include <iostream>
#include "gradeConverter.h"

using namespace std;

void gradeConverter()
{
	int numberGrade;
	char letterGrade;

	cout << "Enter your number grade and I'll convert it to a letter grade: ";
	cin >> numberGrade;

	if (numberGrade >= 90)
	{
		letterGrade = 'a';
	}
	else if (numberGrade >= 80)
	{
		letterGrade = 'b';
	}
	else if (numberGrade >= 70)
	{
		letterGrade = 'c';
	}
	else if (numberGrade >= 60)
	{
		letterGrade = 'd';
	}
	else if (numberGrade <= 59)
	{
		letterGrade = 'f';
	}

	switch (letterGrade)
	{
	case('a'):
		cout << "You made an A!";
		break;
	case('b'):
		cout << "You made a B.";
		break;
	case('c'):
		cout << "You made a C.";
		break;
	case('d'):
		cout << "You made a D.";
		break;
	case('f'):
		cout << "You made an F.";
		break;
	default:
		cout << "Enter a valid grade.";
	}
}