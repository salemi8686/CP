#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n  = citations.size();
        int l = 0, h= n-1;
        while(l<=h){
            int mid =l+(h-l)/2;
            if(citations[mid]==n-mid){
                return citations[mid];
            }
            else if(citations[mid]>n-mid){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return n-l;
    }
};
int main(){
	vector<int> v{3,0,6,1,5};
	Solution s;
	cout<<s.hIndex(v);
}
