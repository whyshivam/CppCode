#include<iostream>
#include<math.h>
using namespace std;

bool isPrimeNumber(int n)
{
	int i;
	bool pr=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			pr=0;
			break;
		}	
		
	}
	return pr;
}



int fnPrime(int upN)
{
  int number = 2;
        int count = 1;
        
        while(count <= upN){
            if(isPrimeNumber(number)){
                count++;
            }
            number++;
        }
        
	return number-1;
}


int main()
{
	int n;
	cout<<"Enter the number   ";
	cin>>n;
	cout<<"The "<<n<<"th prime numbers is "<<fnPrime(n);
}

