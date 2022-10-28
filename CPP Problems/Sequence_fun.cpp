//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
	    int mod=1000000007;
		int NthTerm(int n){
		    // Code  here
		    long z=1;
		    long res;
		    for(int i=1;i<=n;i++)
		    {
		        res=((z%mod*i%mod)%mod+1)%mod;
		        z=res%mod;
		    }
		    return res;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
