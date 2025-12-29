#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int left = 0;
        int right = 0;
        int ast = 0;
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                ast++;
            }
            else if(s[i]=='<'){
                left++;
            }
            else{
                right++;
            }
        }
        if(ast>=2){
            cout<<-1<<endl;
        }
        else if(s.find("><")!= string :: npos){
            cout<<-1<<endl;
        }
        else if(s.find(">*")!= string::npos || s.find("*<")!= string::npos){
            cout<<-1<<endl;
        }
        else{
            if(left>=right){
                cout<<left+ast<<endl;
            }
            else{
                cout<<right+ast<<endl;
            }
        }
    }
}
// Successfully submitted