#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double sum=0;
        for(int i=0;i<nums.size();++i){
            pq.push(double(nums[i]));
            sum+=double(nums[i]);
        }
        double cur = sum,cnt=0;
        double half = sum/2.0;
        while(cur>half){
            double a=(pq.top()/2.0);
            pq.pop();
            pq.push(a);
            cur-=a;
            cnt++;
        }
        return cnt;
    }
};
int main(){
	Solution s;
	vector<int> v{5,19,8,1};
	cout<<s.halveArray(v);
}
