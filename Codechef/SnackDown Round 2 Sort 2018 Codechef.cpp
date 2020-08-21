#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long int n;
		cin>>n;
		long int a[n];
		long int k=0; long int index;
		bool count=1;
		for(long int q=0;q<n;q++)
		{
			cin>>a[q];
			if(q>0)
			{	
				if(a[q]>k)
				{
					k=a[q];
					index=q;
				}
			}
		}
			
			if(index<n-1)
			{
				if(a[0]<a[n-1])
				{
					count=0;
				}
				else
				{
					for(long int test=0;test<index-1;test++)
					{
						if(a[test]>a[test+1])
						{
						count=0;
						break;
						}
					}
					if(index<n-2)
					{
						for(long int test=index+1;test<n-2;test++)
						{
							if(a[test]>a[test+1])
							{count=0;
							break;
							}
						}
					}
				}
			}
			else if(index=n-1)
			{
				for(long int test=0;test<n-1;test++)
				{
					if(a[test]>a[test+1])
					{count=0;
					break;
					}
				}	
			}
		if(count==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
	}


