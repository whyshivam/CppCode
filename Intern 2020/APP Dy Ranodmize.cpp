// C++ Program to Count the number of ways to 
// construct the target string 
#include <bits/stdc++.h> 

using namespace std; 

int mod = 1000000007; 

int dp[1000][1000]; 

int calculate(int pos, int prev, string s, vector<vector<int> > index) 
{ 

	// base case 
	if (pos == s.length()) {
		cout<<"\t\tsingle "<<pos<<"\n"; 
			return 1; 
	}

	// If current subproblem has been solved, use the value 
	if (dp[pos][prev] != -1) 	{
			cout<<"\t previous "<<pos<<" "<<prev<<"\n";
			return dp[pos][prev]; 
		}

	// current character 
	int c = s[pos] - 'a'; 

	// search through all the indiced at which the current 
	// character occurs. For each index greater than prev, 
	// take the index and move 
	// to the next position, and add to the answer. 
	int answer = 0; 
	for (int i = 0; i < index[c].size(); i++) { 
		if (index[c][i] > prev) { 
			cout<<"\t\t\t New"<<pos<<" "<<prev<<" "<<index[c][i]<<"\n";
			answer = (answer % mod + calculate(pos + 1, index[c][i], s, index) % mod) % mod; 
		} 
	} 

	// Store and return the solution for this subproblem 
	return dp[pos][prev] = answer; 
} 
void print(vector<vector<int> >  a){
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].size();j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
int countWays(vector<string>& a, string s) 
{ 
	int n = a.size(); 

	// preprocess the strings by storing for each 
	// character of every string, the index of their 
	// occurrence we will use a common list for all 
	// because of only the index matter 
	// in the string from which the character was picked 
	vector<vector<int> > index(26); 

	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < a[i].length(); j++) { 

			// we are storing j+1 because the initial picked index 
			// in the recursive step will ne 0. 
			// This is just for ease of implementation 
			index[a[i][j] - 'a'].push_back(j+1); 
		} 
	} 

	// initialise dp table. -1 represents that 
	// the subproblem hasn't been solved 
	memset(dp, -1, sizeof(dp)); 
	
	return calculate(0, 0, s, index); 
} 


// Driver Code 
int main() 
{ 
	vector<string> A; 
	A.push_back("afsdc"); 
	A.push_back("aeeeedc"); 
	A.push_back("ddegerg"); 

	string S = "ae"; 

	cout << countWays(A, S); 

	return 0; 
} 

