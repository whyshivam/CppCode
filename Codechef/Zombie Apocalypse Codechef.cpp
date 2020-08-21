#include<iostream>
using namespace std;
int main(){
	int noZombie=3, noGun=2, i,a, j,p, count=0; bool finalend=1;
	
	int zombie[noZombie]={4,50,2},gun[noGun]={5,6};
	
	for(i=0;i<=noGun-1;i++){
		
		p=max(zombie[i],zombie[noZombie-1-i]);
		if(p>0){
		
		if(gun[i]<p){
				finalend=0;break;
			}
		else{
			count+=p;gun[i]-=p;
				for(a=i;a<=noZombie-i-1;a++){
					
				
					zombie[a]-=p;
					zombie[noZombie-1-a]-=p;
				}
			}
		
		}
		else
		continue;
	}
	
	if(finalend)
	{cout<<"YES"<<count;
	}
	else
	{
		cout<<"NO";
	}
}
