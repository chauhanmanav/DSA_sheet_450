#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    string revword = "";
    for(int i=str.length()-1;i>=0;i--){
        revword = revword + str[i];
    }
    return revword;
  //Your code here
}

int main(){
    string word = "geeks";
    cout << reverseWord(word);
    return 0;
}