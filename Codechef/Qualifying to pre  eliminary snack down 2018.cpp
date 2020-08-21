/*
Qualifying to Pre-elimination Problem Code: QUALPREL

Snackdown 2019 is coming! There are two rounds(A and B) after the Qualification. In both of them teams can qualify to the Pre-elimination round. According to the rules, teams will be sorted in descending order by their score, each team with score at least equal to score of the team at 1500-th place will advance to Pre-elimination round, i.e. it's possible to have more than 1500 qualified teams in the case of tie.

Today the organizers ask you to count the number of qualified teams in Pre-elimination round. They provide you scores of each team and ensure that all teams scoring at least equal to K-th team (instead of 1500-th) qualify.

Input:
The first line contains one integer T - the number of testcases. The next 2·T lines contains test cases.
The first line of each test case contains two integers - N and K
The second line contains N space-separated integers Si, i-th of them denoting the score of i-th team.
Output:
For each testcase, output in a single line containing the answer to the problem.

Constraints
1=T=1000
1=K=N=105
1=S[i]=109
sum of N over all test-cases doesn't exceed 106
Sample Input:
2
5 1
3 5 2 4 5
6 4
6 5 4 3 2 1
Sample Output:
2
4
*/



#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// --------------FUNCTIONING--------------
void MaxHeapify(long unsigned int a[], int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2*i;
 
 	while (j <= n)
	{
		if (j < n && a[j+1] > a[j])
		j = j+1;
		// Break if parent value is already greater than child value.
		if (temp > a[j])
			break;
		// Switching value with the parent node if temp < a[j].
		else if (temp <= a[j])
		{
			a[j/2] = a[j];
			j = 2*j;
		}
	}
	a[j/2] = temp;
	return;
}
void HeapSort(long unsigned int a[], int n)
{
	int i, temp;
	for (i = n; i >= 2; i--)
	{
		// Storing maximum value at the end.
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		// Building max heap of remaining element.
		MaxHeapify(a, 1, i - 1);
	}
}
void Build_MaxHeap(long unsigned int a[], int n)
{
	int i;
	for(i = n/2; i >= 1; i--)
		MaxHeapify(a, i, n);
}
//---------------------M-------A-------I-------N------------------
int main()
{
	int t;
	cin>>t;
	/*for(;;)
	{
		if(t>=0&&t<=1000)
		{
			break;
		}
		else
			cin>>t;
	}*/
	int out[t];
	long int sumn=0;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		sumn+=n;
		/*for(;;)
		{
			if(n>=0&&n<=100000&&sumn<=1000000)
			{
				break;
			}
			else
				cin>>n;
		}
		for(;;)
		{
			if(k>=0&&k<=n)
			{
				break;
			}
			else
				cin>>k;
		}*/
		 //-----------------------------------------------------------------------
		unsigned long int s[n];
		for(int j=0;j<n;j++)
		{
		 	cin>>s[j];
		 	/*for(;;)
		 	{
			 	if(s[j]>=0&&s[j]<=1000000000)
				break;
				else
				cin>>s[j];
			}
			*/
		}
		 //--------INPUT-------------TAKEN------------------------------------------
		Build_MaxHeap(s,(n-1));
		HeapSort(s, n-1);
    	int test=s[n-k];
    	int count= k;
    	for(int we=0;we<n;we++)
    	{cout<<s[we]<<endl;
		}
    	for(int l=1;;l++)
    	{
    		if(s[n-k-l]!=test)
			break;
			count++;
    		
		}
		cout<<count<<endl;
	
	}	
	/*	out[i]=count;
	}
	for(int i=0;i<t;i++)
	{
		cout<<out[i]<<endl;
	}*/
}
