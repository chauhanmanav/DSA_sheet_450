#include<bits/stdc++.h>
using namespace std;

void swap(int id1,int id2, vector<int> &ar){
        int temp = ar[id1];
        ar[id1] = ar[id2];
        ar[id2] = temp;
    }
    
void shiftdown(int idx,int n,vector<int> &ar){
        int lchild = 2*idx + 1;
        int rchild = 2*idx + 2;
        int smalleridx = idx;
        if(lchild<n && ar[lchild]<ar[smalleridx]){
            smalleridx = lchild;
        }
        if(rchild<n && ar[rchild]<ar[smalleridx]){
            smalleridx = rchild;
        }
        if(smalleridx!=idx){
            swap(idx,smalleridx, ar);
            shiftdown(smalleridx,n,ar);
        }
    }
    
void make_heap(vector<int> &ar, int n){
        int start = (n-1)/2;
        for(int i=start;i>=0;i--){
            shiftdown(i,n,ar);
        }
    }
    
    
int extract_min(int &size,vector<int>&ar){
        int result = ar[0];
        swap(0,size-1,ar);
        shiftdown(0,size-1,ar);
        return result;
    }
    
int kthSmallest(int arr[], int l, int r, int k) {
        vector<int> ar;
        for(int i=0;i<=r;i++){
            ar.push_back(arr[i]);
        }
        make_heap(ar, r-l+1);
        int result;
        int size = r-l + 1;
        for(int i=0;i<k;i++){
            result = extract_min(size, ar);
            size--;
        }
        return result;
    }

int main(){
    int ar[] = {7,10,4,3,20,15};
    int k = 3;
    cout << kthSmallest(ar,0,5,k);
    return 0;
}