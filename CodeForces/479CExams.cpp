
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
int binarySearch(string arr, int p, int r, char num) { 
   if (p <= r) { 
      int mid = (p + r)/2; 
      if (arr[mid] == num)   
         return mid ; 
      if (arr[mid] > num)  
         return binarySearch(arr, p, mid-1, num);            
      if (arr[mid] > num)
         return binarySearch(arr, mid+1, r, num); 
   } 
   return -1; 
} 
string rev(string n)
{
	char c=' ';
	int l=sizeof(n);
	int k=binarySearch(n,0,(l-1),c);
	if(k>=0)
	{
		string m=n.substr((k+1),(l-k-1));
		n.erase(k);
		n=m+" "+n;
		
		return n;
	}
	else
	{
		return n;
	}

	
}
int main()
{
	int n;
	cin>>n;
	string num[n];
	string num2[n];

	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		stringstream g1;
		stringstream g2;
		int a1,b1;
		g1 << a1;
		g2<< b1;
		string a2;
		g1>>a2;
		string b2;
		g2>>b2;
		num[i]=a2+" "+b2;
		num2[i]=b2+" "+a2;
	}
	sort(num,num+n);
	sort(num2,num2+n);
	bool fl=true;
	for(int i=0;i<n;i++)
	{
		if(rev(num2[i])!=num[i])
		{
			fl=false;
			break;
		}
	}
	if(fl!=false)
	{
		char c=' ';
		int l=sizeof(num[n-1]);
		int k=binarySearch(num[n-1],0,(l-1),c);
		if(k>=0)
		{
			string m=num[n-1].substr((k+1),(l-k-1));
				cout<<m;
		}
	}
	else
	{
		char c=' ';
		int l=sizeof(num[n-1]);
		int k=binarySearch(num[n-1],0,(l-1),c);
		if(k>=0)
		{
			string m=num[n-1].substr(0,(k+1));
	cout<<m;
		}
		
	}
}
