#include<iostream>
#include<math.h>
using namespace std;

bool isPrimeNumber(int n)
{
	int i;
	bool pr=1;
	for(i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		{
			pr=0;
			break;
		}	
		
	}
	return pr;
}

//changing int to string
#include <sstream>
string si(int n)
{
std::string out_string;
std::stringstream ss;
ss << n;
out_string = ss.str();
return out_string;
}

//changing string to int
int is(string text)
{
int number;
std::istringstream iss (text);
iss >> number;
return number;
}

int main(){
	int f,l,t=999999;
	cin>>f>>l;
	int count;
	string num= "";
	int i;
	for(f=0;f<=999;f++){
		for(l=1;l<8;l++){
		
			count=0;
			for(i=9;i>=0;i--){
				num= ""+ si(f)+ si(i) + si(l);
				if (isPrimeNumber(is(num)))
				{
				count++;}
				if((is(num)<=t))
				{
					t=is(num);
				}
			}
			if (count==8)
			{
				cout<<t;
			}
			l++;
			if (l==4)
			{l+=2;
			}
		}
	}
}
