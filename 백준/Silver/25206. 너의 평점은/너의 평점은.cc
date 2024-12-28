#include <iostream>
using namespace std;

int main()
{
	int GradeCount = 20;
	string Subject;
	double Grade;
	string GradeStr;

	double Hop = 0;
	double GradeHop = 0;

	for (int i = 0; i < GradeCount; i++)
	{
		cin >> Subject >> Grade >> GradeStr;
		
		double x = 0;
		if (GradeStr == "A+") { x = 4.5; }
		else if (GradeStr == "A0") { x = 4.0; }
		else if (GradeStr == "B+") { x = 3.5; }
		else if (GradeStr == "B0") { x = 3.0; }
		else if (GradeStr == "C+") { x = 2.5; }
		else if (GradeStr == "C0") { x = 2.0; }
		else if (GradeStr == "D+") { x = 1.5; }
		else if (GradeStr == "D0") { x = 1.0; }
		else if (GradeStr == "F") { x = 0.0; }
		else if (GradeStr == "P") {
			continue;
		}
		
		Hop += x * Grade;
		GradeHop += Grade;
		
	}

	cout.precision(5);
	double Answer = Hop / GradeHop;
	cout << Answer;
	
}