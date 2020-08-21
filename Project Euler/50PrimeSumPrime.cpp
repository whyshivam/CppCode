#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std; 
int main()
{   
    
    int prime[1000001]; 
    memset(prime,1, sizeof(prime)); 
  
    for (int p=2; p<=sqrt(1000001); p++) 
    { 
        if (prime[p] == 1) 
        {  
            for (int i=p*2; i<=1000000; i += p) 
                prime[i] = 0; 
        } 
    } 
    int pno[78499]={};
    int i=1;
    for (int p=2; p<=1000001; p++) 
    {
    	if (prime[p]) 
		{
			pno[i]=p;
      		cout<<i<<"\t"<<p;
      		i++;
		}     
	}
}

