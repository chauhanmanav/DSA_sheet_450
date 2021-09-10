#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[0];
    for(int i=0;i<n;i++){
        int prev = arr[(i+1)%n];
        arr[(i+1)%n] = temp;
        temp = prev;
    }
}

int main(){
    int ar[5] = {1,2,3,4,5};
    rotate(ar,5);
    for(int i=0;i<5;i++){
        cout << ar[i] << " ";
    }
    return 0;
}