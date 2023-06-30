#include <iostream>
#include <cmath>

using namespace std;

int main(){

	cout << "**********Hytotenuse Calculator**********" << endl;
	cout << "\n";
	cout << "Cateto A: "; //I'm portuguese, so idk what are that thing that "builds" the Hypotenuse
	double CatetoA;
	cin >> CatetoA;
	cout << "\n";
	cout << "Cateto B: ";
	double CatetoB; //Double -- Decimal Numbers (ex.: 16.6; 18.1013; 1.02; 0.02...)
	cin >> CatetoB;
	cout << "Cateto A is " << CatetoA << ";" << endl;
	cout << "Cateto B is " << CatetoB << ";" << endl;
	double PcatetoA = pow(CatetoA, 2);
  double PcatetoB = pow(CatetoB, 2);
  double Result = PcatetoA + PcatetoB;
	double FinalResult = sqrt(Result);
	cout << "The result is: " << FinalResult;
}
