//Cut my wings and ask me to fly,
//to your astonishment I'll be lost in the sky
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
struct TreeNode  {  
 
    int data;  
    TreeNode* left;  
    TreeNode* right;  
};  

#define rep(n)  for(ll i=0;i<n;i++)
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define cint ll t;for(cin>>t;t>0;t--)

bool areIdentical(TreeNode * tree1, TreeNode *tree2)  {
     if (tree1 == NULL && tree2 == NULL)  
        return true;  
  
    if (tree1 == NULL || tree2 == NULL)  
        return false;  
    return (tree1->data == tree2->data &&  areIdentical(tree1->left, tree2->left) &&  areIdentical(tree1->right, tree2->right) );  
} 
bool isSubtree(TreeNode *T, TreeNode *S)  {  
    
    if (S == NULL)  
        return true;  
  
    if (T == NULL)  
        return false;  
  
    
    if (areIdentical(T, S))  
        return true;  
    return isSubtree(T->left, S) ||  
        isSubtree(T->right, S);  
}  
int countNode(TreeNode* tree){
	if(tree==NULL)
	return 0;
	else{
		return (1+countNode(tree->left)+countNode(tree->right));
	}
}
int CountIfSubtree(struct TreeNode* tree1, struct TreeNode* tree2){
	if(isSubTree(tree1,tree2)){
		return (countNode(tree2));
	}
	else{
		return -1;
	}
}
TreeNode* newTreeNode(int data)  
{  
    TreeNode* Node = new TreeNode();  
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
    return(Node);  
}  
  
/* Driver code*/
int main()  
{  
    // TREE 1  
    /* Construct the following tree  
            26  
            / \  
        10 3  
        / \ \  
    4 6 3  
    \  
        30  
    */
    TreeNode *T = newTreeNode(26);  
    T->right         = newTreeNode(3);  
    T->right->right = newTreeNode(3);  
    T->left         = newTreeNode(10);  
    T->left->left     = newTreeNode(4);  
    T->left->left->right = newTreeNode(30);  
    T->left->right     = newTreeNode(6);  
  
    // TREE 2  
    /* Construct the following tree  
        10  
        / \  
    4 6  
    \  
        30  
    */
    TreeNode *S = newTreeNode(10);  
    S->right     = newTreeNode(6);  
    S->left     = newTreeNode(4);  
    S->left->right = newTreeNode(30);  
  
  
    if (isSubtree(T, S))  
        cout << "Tree 2 is subtree of Tree 1";  
    else
        cout << "Tree 2 is not a subtree of Tree 1";  
  
    return 0;  
}  

