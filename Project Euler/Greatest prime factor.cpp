#include<iostream>
 
using namespace std;
bool prime(unsigned long long int n ) 
{
	bool flag=true;
	for(unsigned long long int i=2;i*i<=n;i++)
	{
		if (n%i==0)
		{
			flag =false;
			break;
		}
		return flag;
	}
}
int main()
{
	unsigned long long int n= 600851475143;
	cout<<prime(n)<<endl;
  unsigned long long int k=3;
    for (unsigned long long int p=2; p*p<=n; p++) 
    { 
           if(n%p==0)   
        {
        	n=n/p;
        	
		}
    } 
    cout<<n;
    
  
  
 
		 
         
}
