#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define rep(i,j,n)   for(int i=j;i<n;i++)
#define scn(a)       scanf("%d",&a)
#define scns(a,b)    scanf("%d %d",&a,&b)
#define print(a)     printf("%d\n",a)
#define tc           int t; scn(t); while(t--)
#define vec          vector<int>
#define pb           push_back    
#define pairs        pair<int,int>
#define f            first
#define s            second
#define all(v)       v.begin(),v.end()
#define mem(a,b)     memset(a,b,sizeof(a))
#define maxx         500005
int n;

int main()
{
    tc
    {
        scn(n);

        if(n<4)
        {
            print(-1);

            continue;
        }
        
        if(n==4)
        {
            printf("3 1 4 2\n");

            continue;
        }

        vec ans;

        for(int i=1;i<=n;i+=2)
        ans.pb(i);

        int firstEven=n-4;

        if(n%2)
        firstEven++;

        ans.pb(firstEven);

        if(n%2==0)
        ans.pb(firstEven+4);

        ans.pb(firstEven+2);

        for(int i=firstEven-2;i>1;i-=2)
        ans.pb(i);

        for(auto it:ans)
        printf("%d ",it);

        printf("\n");
    }
}
