#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int fac(int n)
{
	int pro=1;
	for(int i=1;i<n;i++)
	{
		pro*=i;
	}
	return pro;
}
int arr(int n)
{
	int pr[10]={0,1,2,3,4,5,6,7,8,9};
	memset(pr,0,sizeof(pr));
	int p=n;
	while(p>0)
	{
		int c=p%10;
		pr[c]++;
		p/=10;
	}
	int h=0;
	for(int i=1;i<10;i+=2)
	{
	
		for(int j=0;j<pr[i];j++)
		{
			h*=10;
			h+=i;
		}
	}
	for(int i=0;i<10;i+=2)
	{
		if(pr[i]!=0)
		{
			h=0;
			break;
		}
	}
	return h;
}
int per(int n)
{
	int pr[10]={0,1,2,3,4,5,6,7,8,9};
	memset(pr,0,sizeof(pr));
	int p=n;
	while(p>0)
	{
		int c=p%10;
		pr[c]++;
		p/=10;
	}
	int den=1;
	int num=0;
	for(int i=0;i<10;i++)
	{
		num+=pr[i];
		den*=fac(pr[i]);
	}
	num=fac(num);
	num/=den;
	return num;
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
  
  int c=0;
  int kk=0;
  int primenum[78498];
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]==true) 
          {
          		int kaj=arr(p);
		  		if(kaj!=0)
		  		{
		 		 	primenum[c]=kaj;
		  			c++;
					cout<<c<< "\t"<<kaj<<endl;
		  		}
			}
	int jkjk=sizeof(primenum)/sizeof(primenum[0]);
	sort(primenum,primenum+jkjk);
	for(int i=0;i<78498;i++)
	{
		cout<<i<<"\t"<<primenum[i]<<endl;
	}
	c=0;
	int prev=primenum[0];
	for(int i=1;i<78498;)
	{
		int hg=per(primenum[i])+i-1;
		 if(prev==primenum[hg])
		 {
		 	c++;
		 	cout<<c<<"\t"<<prev<<endl;
		 	prev=primenum[hg];
		 	i=hg+1;
		 }
	}
			cout<<c;
	
    
}
