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



int main()
{
	int number = 2;
        int t=0,count=0;
        long sum = 0;
        while(sum<1000000){
            if(isPrimeNumber(number)){
                sum += number;
                count++;}
                if(isPrimeNumber(sum)==1&&sum>=t){
                	t=sum;
				}
            
            number++;
            
        }
        cout<<t;
        
}

