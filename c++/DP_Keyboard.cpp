
#include<bits/stdc++.h>
using namespace std;

class LeetcodeKeyboard{
public:
    int minSteps(int n) {
        int dp[n+1];
        for(int i=1;i<=n;++i) dp[i] = INT_MAX;
        dp[1] = 0;
        for(int i=2;i<=n;++i){
            for(int j=2;j<=i;++j){
                 if(i%j!=0) continue;
                 dp[i] = min(dp[i], dp[i/j]-1+j+1);
                 
            }
        }
        return dp[n];
    }
};

int main(){
	LeetcodeKeyboard lk;
	int n;
	cin>>n;
	cout<<lk.minSteps(n);
}
