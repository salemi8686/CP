// 310. Minimum Height Trees

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1) return {0};
        
        //storing the edges in the adjancency list
        unordered_map<int, unordered_set<int>> adj;
        for(auto it : edges){
            adj[it[0]].insert(it[1]);
            adj[it[1]].insert(it[0]);
        }
        
        //storing the leaves
        vector <int> leaves;
        
        for(auto [u, v] : adj){
            if(adj[u].size() == 1) leaves.push_back(u);
        }
    
        //for each iteration we are removing all the leaves and check if the nextNode become a leaf if yes we push it and initialize the next Leaves with current leaves after the iteration 
        while(n > 2){
            // decreasing the count of nodes on removing the leaves
            n -= leaves.size();
            
            vector <int> nextLeaves;
            
            for(auto l : leaves){
                //erasing the leaf l
                int nextNode = *(adj[l].begin());
                adj[l].erase(nextNode);
                adj[nextNode].erase(l);
                
                //checking if the nextNode becomes leaf 
                if(adj[nextNode].size() == 1) nextLeaves.push_back(nextNode);
            }
            
            //leaves initialized by nextLeaves 
            leaves = nextLeaves;
        }
        
        //if the count of nodes reduce to 2 or 1 so we can say that these are the root of minimum tree
        
        return leaves;
    
    }
};
int main(){
	Solution s;
	int n = 6; // number of nodes
	vector<vector<int> > v{{3,0},{3,1},{3,2},{3,4},{5,4}} // edges
	cout<<s.findMinHeightTrees(n,v);
}
