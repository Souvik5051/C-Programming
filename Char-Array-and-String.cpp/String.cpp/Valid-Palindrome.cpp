#include <iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
bool validPalindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<=j){
        if(str[i]!=str[j]){
            //Ek bar i ko remove,ek bar j ko remove
            return checkPalindrome(str,i+1,j)||checkPalindrome(str,i,j-1); //atmost 1 bar check 
        }
        else{
            //if(str[i]===str[j]) no check simple
             i++;
             j--;
        }
    }
    return true; //0 remove means simple string is already palindrome
}




int main(){
    string str;
    getline(cin,str);
    bool a=validPalindrome(str);
    cout<<a;
    return 0;
}