#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> output;
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i=0, j=0;
		
        output.push_back(mat[i][j]);
        while((i < mat.size()-1) || (j < mat[0].size()-1)) {
            if(j < mat[0].size()-1) j++; //if right exists go right else go down
            else i++;
            diagonalDown(mat, i, j);
            if(i < mat.size()-1) i++; //if down exists go down else go right
            else j++;
            diagonalUp(mat, i, j);            
        }
		
        return output;
      }
    
    void diagonalDown(vector<vector<int>>& mat, int& i, int& j) {
        while(j >= 0 && i <= mat.size()-1) output.push_back(mat[i++][j--]);
        i--;
        j++;
    }
    
    void diagonalUp(vector<vector<int>>& mat, int& i, int& j) {
        while(i >= 0 && j <= mat[0].size()-1) output.push_back(mat[i--][j++]);
        i++;
        j--;
    }
    
};
int main(){
	vector<vector<int> > v{{1,2,3},{4,5,6},{7,8,9}};
	Solution s;
	cout<<s.findDiagonalOrder(v);
}
