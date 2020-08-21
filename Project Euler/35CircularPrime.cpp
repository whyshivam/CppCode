#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int len(int n)
{
	int h=n;
	int i=0;
	while(h>0)
	{
		h/=10;
		i++;
	}
	return i;
}
int shift(int n)
{
	int l=len(n)-1;
	int la=n%10;
	n/=10;
	n=n+pow(10,l)*la;
	return n;	
}

int main()
{
	int n =1000000;
	 bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    int sum=0;
    int ad=0;
    for(int i=1;i<=1000000;i++)
    {
    	if(prime[i]==true)
	    {
	    	int lenn=len(i);
	    	ad=0;
	    	int k=i;
	    	for(int j=0;j<lenn;j++)
	    	{
	    		k=shift(k);
	    		if(prime[k]==true)
	    		{
	    			ad=1;
	    			prime[k]==false;
				}
				else
				{
					ad=0;
					break;
				}
			}
				if(ad==1)
				{
				cout<<i<<"\t"<<sum<<endl;
				}
			sum+=ad;
		}
	}
	cout<<sum;
}
