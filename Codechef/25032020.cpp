#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
long long int XOR(const long long int n) 
{ 
    // Modulus operator are expensive on most of the  
    // computers. n & 3 will be equivalent to n % 4.    
  
    switch(n & 3) // n % 4  
    { 
    case 0: return n;     // if n is multiple of 4 
    case 1: return 1;     // If n % 4 gives remainder 1   
    case 2: return n + 1; // If n % 4 gives remainder 2     
    case 3: return 0;     // If n % 4 gives remainder 3   
    } 
} 
long long int cxor(long long int n, long long int i)
{
	n=XOR(n);
	i=XOR(i);
	n=n^i;
	return n;
}

int main()
{
	long long int n,q;
	cin>>n>>q;
	long long int k;
	long long int it;
	long long int j=0,i=0;
		long long int c,x;
	vector <int> num;
	for(i=0;i<q;i++)
	{
		cin>>c>>x;
		if(c==1)
		{
			num.push_back(x);
			j++;
		}
		else
		{
			k=cxor(n,x);
			cout<<k<<endl;
			//sort(num.begin(), num.end()); 
			//vector<int> iterator it;
			
			for(long long int it= num; it != num.begin(); --it)
			{
				
				if(*it>=x)
				{
					cout<<*it<<endl;
					k=k^(*it);
				}
				/*else
				{
					break;
				}*/
			}
			cout<<k<<endl;
		}
		
	}
}
