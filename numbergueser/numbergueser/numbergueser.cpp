// numbergueser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
		int x;
	cout <<"I am thinking of a number between 1 and 20, can you guess what it is?";
	cin >> x;

	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "You number was too big" << endl;
	if(x < 13)
		cout << "Your number was too small" << endl;

	cin >>x ;

	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "You number was too big" << endl;
	if(x < 13)
		cout << "Your number was too small" << endl;
	cin>>x;
	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "You number was too big" << endl;
	if(x < 13)
		cout << "Your number was too small" << endl;
	cin>>x;
	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "You number was too big" << endl;
	if(x < 13)
		cout << "Your number was too small" << endl;
	cin>>x;
	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "You number was too big" << endl;
	if(x < 13)
		cout << "Your number was too small" << endl;
	cin>>x;
	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "It was 13" << endl;
	if(x < 13)
		cout << "You did not get it right it was 13" << endl;
	cin>>x;
	return 0;
}

