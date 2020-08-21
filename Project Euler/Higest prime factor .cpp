#include<iostream>
#include <bits/stdc++.h>
#include<math.h> 
using namespace std; 

using namespace std;
int main()
{
 int n;
	cin>>n;
	
	bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=n; p>0; p--) 
    {  if (prime[p]==true) 
          {
		
		 {cout<<p<<endl;
		 //break;
		 }
      }
	}
}
