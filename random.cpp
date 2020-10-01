//C++ Program to guess a number 
#include <iostream>

using namespace std;
int main()
{
	int x;
	cout <<"I am thinking of a number between 1 and 20, can you guess what it is?";
	//create a loop for this
	for(int i=0;i<10;i++){
	cin >> x;

	if(x==13)
		cout<<"You got it right, it is 13" << endl ;
	if( x > 13)
		cout << "You number was too big" << endl;
	if(x < 13)
		cout << "Your number was too small" << endl;
	}
