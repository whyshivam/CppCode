#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int A,B,n;
	cin>>A>>B>>n;
	long long int C[n];
	//long long int n= size(C);
	for(long long int i=0;i<n;i++)
	{
		cin>>C[i];
	}
    
    sort(C,C+n);
    long long int c=C[0],count=0;
    if(n<A)
    {
       cout<<(C[n-1]*B%10000003);
    }
    else
    {
        long long int max[A];
        for(long long int i=1;i<n;i++)
        {
            if(C[i]-C[i-1]==1)
            {
                c+=C[i];
            }
            else
            {
               	max[count]=c;
            	count++;
            	c=C[i];
            }
        }
       
        for(long long int i=count;i<A;i++)
        {
        	long long int nt=max[i-1]/2+1;
        	max[i-1]=nt-2;
        	max[i]=nt;
        	sort(max,max+i);
		}
        cout<<(max[A-1]*B%10000003);
    }
}

