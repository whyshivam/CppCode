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



int sumPrime(int st, int en)
{
  int number = st;
        
        long sum = 0;
        while(number <= en){
            if(isPrimeNumber(number)){
                sum += number;
             
            }
            number++;
        }
	return sum;
}


int main()
{
	int n,m;
	cout<<"Enter the numbers";
	cin>>n>>m;
	cout<<"The sum of the  prime numbers is "<<sumPrime(n,m);
}

