#include<bits/stdc++.h>
using namespace std;
void dTb(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
int main()
{
	int x=0;
	x=~x;
	//cout<<x;
	int A[10]={1,1,3,1,3,3,4,4,4,5};
	int ones = 0, twos = 0;
    for(int i = 0; i < 10; i++){
        ones = (ones ^ A[i]) & ~twos;
        twos = (twos ^ A[i]) & ~ones;
        dTb(A[i]);
        cout<<" "<<A[i]<<"\t";
        dTb(ones);
        cout<<" "<<ones<<"\t";
        dTb(twos);
        cout<<" "<<twos<<"\n";
    }
    return ones;
}
