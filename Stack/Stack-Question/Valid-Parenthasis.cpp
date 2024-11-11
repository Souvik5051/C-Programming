#include <iostream>
#include<stack>
using namespace std;

bool validParenthasis(string str){
    stack<char>st;
    
    for(int i=0;i<str.length();i++){
        char ch=str[i];

        //Opening Bracket
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else{
            //Closing Bracket
            if(!st.empty()){
                char topCh=st.top();
                if(ch==')' && topCh=='('){
                    //matching bracket
                    st.pop();
                }
                else if(ch=='}' && topCh=='{'){
                    //matching bracket
                    st.pop();
                }
                else if(ch==']' && topCh=='['){
                    //matching bracket
                    st.pop();
                }
                else{
                    //brackets not matching
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }

    if(st.empty()){
        //valid
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str;
    cout<<"Enter your string ";
    getline(cin,str);
    bool ans=validParenthasis(str);
    if(ans){
        cout<<"Valid parenthasis";
    }
    else{
        cout<<"Invalid parenthasis";
    }
    return 0;
}
