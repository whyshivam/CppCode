#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
string p;
cin>>p;
int k=p.size()-1;
char c=p[k];
int l=(int)c;
c='0';
int l2=(int)c;
l=l-l2;
cout<<(l%2);
}
