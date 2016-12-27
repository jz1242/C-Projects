#include <iostream>
#include <cmath>
#include "quadraticFormula.h"
using namespace std;
//extern double x[2];


int main()
{
	int a, b, c;
	//double x[2];       

	cout<<"Please Enter a, b, and c to get Results of x:\n";

	cout<<"a: ";
	cin>>a;

	cout<<"b: ";
	cin>>b;

	cout<<"c: ";
	cin>>c;

	quadraticFormula qwe(a,b,c);

	if (qwe.getroot())
	{
		cout<<"\nYour Results are:"<<endl;
		
	}

	 system("pause");
	cin.get();
	return 0;
}