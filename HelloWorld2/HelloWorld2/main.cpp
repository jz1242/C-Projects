/*Jason Zhang
A6
4/10/12*/
#include <stdio.h>
 
int integerpower( int a, int b );//function prototype
 
int main()// beginning
{
	//variables used
    int q;
    int w;
    int power;
  
 
    printf("Enter the base number \n ");
    scanf("%d", &q);// takes input of number
     printf("Enter the exponent number \n ");
    scanf("%d", &w);
   
power= integerpower(q, w);//function call

	printf("%d to the power of %d equals %d\n", q, w, power);//printing
    return 0; //indicates termination
} 
 
int integerpower( int a, int b)//function definition, finds integer powers
{

if(b==1)
		return a;
	else{
		return a* integerpower(a, b-1);}
  
}// end of function
