#include <stdio.h>

void EvenOdd(int n) //function definition to find Even or odd number
{
 if(n%2==0)
 {
     printf(" The given number is Even \n");
 }
 else
 {
     printf(" The given number is odd \n");
 }
}

int main()
{
int x=10;
EvenOdd(x); //function call

}
