#include<bits/stdc++.h>

using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        int count = 0;
        unordered_map<int, int> freqar;
        for(int i=0;i<n;i++){
            auto itr = freqar.find(a[i]);
            if(itr==freqar.end()){
                count++;
                freqar[a[i]] = 1;
            }
        }
        for(int i=0;i<m;i++){
            auto itr = freqar.find(b[i]);
            if(itr==freqar.end()){
                count++;
                freqar[b[i]] = 1;
            }
        }
        return count;
    }

int main(){
    int a[5] = {1,2,3,4,5};
    int b[3] = {1,2,3};
    cout << doUnion(a,5,b,3);
    return 0;
}