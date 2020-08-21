#include<iostream>
using namespace std;
int main()
{
	int num[8]={1,2,5,10,20,50,100,200};
	int count =0;
	for(int i1=0;i1<=200/200;i1++)
	{
		for(int i2=0;i2<=200/100;i2++)
		{
			for(int i3=0;i3<=200/50;i3++)
			{
				for(int i4=0;i4<=200/20;i4++)
				{
					for(int i5=0;i5<=200/10;i5++)
					{
						for(int i6=0;i6<=200/5;i6++)
						{
							for(int i7=0;i7<=200/2;i7++)
							{
								for(int i8=0;i8<=200;i8++)
								{
									int k=i1*200+i2*100+i3*50+i4*20+i5*10+i6*5+i7*2+i8*1;
									if(k==200)
									{
										count++;
									//	cout<<count<<"\t"<<i1<<"\t"<<i2<<"\t"<<i3<<"\t"<<i4<<"\t"<<i5<<"\t"<<i6<<"\t"<<i7<<"\t"<<i8<<endl;
									}
									if(k>200)
									{
										break;
									}

								}
							}
						}
					}
				}
			}
		}
	}
	
	cout<<count<<endl;
}
