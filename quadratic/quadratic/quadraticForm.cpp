//#include "quadraticFormula.h"
#include <iostream>
using namespace std;
 class quadraticForm{
	private:
		double a;
		double b;
		double c;
	public:
		bool getroot(){
			if( ((b*b) - (4*a*c)) < 0 )
	{
		cout<< "\nSquare root can not be performed with a negative number" <<endl;
		return false;
	}
	double numeratorSqrtResult = sqrt( (b*b) - (4*a*c) );
	double denominatorResult = 2 * a;
	double addNegativeTo_b = 0 - b;

	if (denominatorResult == 0)
	{
		cout<<"Denominator is zero\n";
		return false;
	}
	
//	x[0] = (addNegativeTo_b + numeratorSqrtResult)/denominatorResult;
//	x[1] = (addNegativeTo_b - numeratorSqrtResult)/denominatorResult;

	return true;
		}

		void seta(int set){
			a=set;
		}
		void setb(int set){
			b=set;
		}
		void setc(int set){
			c=set;
		}
		



};
