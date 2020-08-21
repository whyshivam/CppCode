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



void sumPrimeUpto(int upN)
{
  int number = 2;
        int count = 1;
        long sum = 0;
        while(sum <= upN){
            if(isPrimeNumber(number)){
                sum += number;
               if(isPrimeNumber(sum)){
                	cout<<sum<<endl;
				} 
            }
            
            number++;
        }

}


int main()
{
	int p =1000;
	sumPrimeUpto(p);
}

