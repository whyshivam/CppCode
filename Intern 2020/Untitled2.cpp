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

#define rep(n) for for(ll i=0;i<n;i++)
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

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* prev;
    if(A->val > B->val)
    swap(A,B);
    prev=A;
    ListNode* head=A;
    while(A!=NULL){
        if(A->val > B->val){
            prev->next=B;
            B=B->next;
            A=prev->next;
            prev=A;
        }else{
            A=A->next;
            prev=A;
        }
        
        if(A==NULL){
            A->next=B;
            break;
        }else if(B==NULL){
            break;
        }
    }
    return head;
}
void print(ListNode *A){
	while(A!=NULL){
		cout<<A->val<<" ";
		A=A->next;		
	}
	cout<<"\n";
}
ListNode* removeDup(ListNode* A){
	ListNode* temp=A;
    ListNode* match=NULL;
   	
   
	while(temp->next!=NULL){
	   
		if(temp->val==temp->next->val){
			while(temp->val==temp->next->val){
			temp->next=temp->next->next;
				if(temp->next==NULL){
					break;
				}
			}
			if(match==NULL){
				A=temp->next;	
			}else{
				match->next=temp->next;
				temp=match;
			}
			if(temp->next==NULL){
				break;
			}
		}else{
			match=temp;
		}
		
		temp=temp->next;
	}
				
	return A;
}
int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0);
	ll n;
	cin>>n;
	ListNode*  A;
	ListNode* C=A;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		ListNode* curr;
		curr=new ListNode(k);
		if(i==0){
			A=(curr);
			C=curr;
		}else
		{
			A->next=curr;
			A=A->next;
		}
	}
	print(C);
	A=removeDup(C);
	cout<<" \nAns:  ";
	print(A);
}

