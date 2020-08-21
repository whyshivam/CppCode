#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int t1=0;t1<t;t1++)
	{
		int n;
		cin>>n;
		string word[n];
		int time[n];
		int totaltime=0;
		for(int n1=0;n1<n;n1++)
		{
			cin>>word[n1];
			time[n1]=0;
			//int q=0;
			int check=0;
			for(int q=0;q<n1;q++)
			{
				if(word[n1].compare(word[q])==0)
				{
					time[n1]=time[q]/2;
					//cout<<"\n\t CASE 1\n";
					
					break;	
				}
			
			}
			/*while(q<n1)
			{
				if(word[n1].compare(word[n1-1])==0)
				{
					time[n1]=time[q]/2;
					cout<<"\t\n\tHIH\n";
					break;
				}
				q++;
				
			}*/
			if(time[n1]==0)
			{
				int tim=2;
				for(int l=1;l<word[n1].size();l++)
				{
					char l1,l2;
					int tot;
					l2=word[n1].at(l);
					l1=word[n1].at(l-1);
					if((l1=='d')||(l1=='f'))
					{
						if((l2=='j')||(l2=='k'))
						{
							tot=2;
						}
						else if((l1=='d')||(l1=='f'))
						{
							tot=4;
						}
						else
						tot =0;
					}
					else if(l1=='j'||l1=='k')
					{
						if(l2=='j'||l2=='k')
						{
							tot=4;
						}
						else if(l2=='d'||l2=='f')
						{
							tot=2;
						}
						else
						tot =0;
					}
					else 
					tot=0;
					tim+=tot;
				}
				time[n1]=tim;
			}
			totaltime+=time[n1];
		}
		cout<<totaltime<<endl;
	}
}
