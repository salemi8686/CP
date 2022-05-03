#include<bits/stdc++.h>
using namespace std;

class Stack_Map{
public:
    int scoreOfParentheses(string s) {
        stack<char> st;
        map<int,int> m;
        map<int,bool> ch; 
        int ans=0,cur=0,in=1;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('){
                if(!st.empty() && st.top() =='('){
                     ch[st.size()] = true;
                }
                st.push(s[i]);
            }
            else{
                if(!ch[st.size()]){
                    m[st.size()]++;
                }
                else{
                    if(st.size()==1){m[st.size()]+=(m[st.size()+1]*2); m[st.size()+1]=0;}
                    else{
                        m[st.size()]+=(m[st.size()+1]*2);
                        m[st.size()+1]=0;
                    }
                    ch[st.size()] = false; 
                }
                st.pop();
            }
        }
        return m[1];
    }
};
int main(){
	 Stack_Map sm;
	 string s = "(())()()()((()))";
	 cout<<sm.scoreOfParentheses(s);
}
