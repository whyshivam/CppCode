#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		string word[n];
		int time[n];
		int ttime=0;
		for(int i=0;i<n;i++)
		{
			cin>>word[i];
			cout<<endl<<"\n\they \t"<<word[i];
			int lk=0;
			ttime=0;
			for(int q=0;q<i;q++)
			{
				if(word[i].compare(word[q])==0)
				{
					time[i]=time[q]/2;
					cout<<"\n\t CASE 1\n";
					lk=1;
					break;	
				}
			
			}
				
			int waqt=2;
		
			for(int l=1;l<word[i].size();l++)
			{
				int ti;
				if(lk=1)
				break;
				
				if(word[i].at(l)=='d'||word[i].at(l)=='f')
				{
					if(word[i].at(l-1)=='j'||word[i].at(l-1)=='k')
					{
						ti=2;cout<<"\n\t CASE 2\n";
					}
					else if(word[i].at(l-1)=='d'||word[i].at(l-1)=='f')
					{
						ti=4;cout<<"\n\t CASE 2 B\n";
					}
				}
				
				else if(word[i].at(l)=='j'||word[i].at(l)=='k')
				{
					if(word[i].at(l-1)=='d'||word[i].at(l-1)=='f')
					{
						ti=2;cout<<"\n\t CASE 3\n";
					}
					else if(word[i].at(l-1)=='j'||word[i].at(l-1)=='k')
					{
						ti=4;cout<<"\n\t CASE 3 B\n";
					}
				}
					
				else
				{
					ti=0;cout<<"\n\t CASE 4\n";
				}
				
				waqt+=ti;
				cout<<"\n\t CASE 5  \n"<<waqt<<endl;	
				time[i]=waqt;cout<<"\n\t CASE 6 \n"<<time[i]<<endl;
			}
			ttime+=time[i];cout<<"\n\t CASE 7 \n"<<ttime<<endl;	
		}
		cout<<(ttime)<<endl;cout<<"\n\t CASE 8\n"<<ttime<<endl;
	}
}
		
		

