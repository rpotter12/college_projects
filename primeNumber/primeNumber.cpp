/* Create a mini project that will:
a) Allow a user to input a number
b) Allow the user to see if the number is prime or not
c) If the number is not prime, tell the user what number it is divisible by
d) Use a function to process whether or not the value is prime (this idea will be used in a future challenge
e) Use double or Long for increased number length  */
#include<iostream>
using namespace std;
void prime(int n)
{
	bool isPrime = true;
	for(int i = 2; i <= n / 2; ++i)
  	{
      		if(n % i == 0)
      		{
          		isPrime = false;
          		break;
      		}
  	}
  	if (isPrime)
      		cout<<"prime number"<<endl;
  	else
	{
      		cout<<"not a prime number"<<endl;
		for(int i=1;i<n/2;i++)
		{
			if(n%i==0)
				cout<<i<<endl;
			else
				continue;
		}
	}
}
int main()
{
	long int a;
	cin>>a;
	prime(a);
	return 0;
}
