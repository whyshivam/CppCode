#include<isotream>
#include<math.h>
using namespace std;
int siz(long long int n)
{
	long long int h=n;
	int i=0;
	while(h>0)
	{
		h/=10;
		i++;
	}
	return i;
}
bool chk(long long int n)
{
	
}
int main()
{
	int c=1;
	for(long long int i=1;;,i++)
	{
		if(6*i>pow(10,c+1))
		{
			i=pow(10,c)-1;
		}
		else
		{
			
		}
	}
}
