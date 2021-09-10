#include<bits/stdc++.h>

using namespace std;

void solve(int a[], int &n){
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else if(a[i]==2){
                count2++;
            }
        }
        int idx = 0;
        for(int i=0;i<count0;i++){
            a[idx] = 0;
            idx++;
        }
        for(int i=0;i<count1;i++){
            a[idx] = 1;
            idx++;
        }
        for(int i=0;i<count2;i++){
            a[idx] = 2;
            idx++;
        }
}
int main(){
    int ar[] = {0,1,0,2,0,2};
    solve(ar,6);
    return 0;
}