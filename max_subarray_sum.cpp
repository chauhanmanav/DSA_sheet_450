#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        vector<long long int> left(n,0);
        vector<long long int> right(n,0);
        long long int cursum = 0;
        for(int i=0;i<n;i++){
            cursum = cursum + arr[i];
            if(cursum > arr[i]){
                left[i] = cursum;
            }
            else{
                left[i] = arr[i];
            }
            cursum = left[i];
        }
        cursum = 0;
        for(int i=n-1;i>=0;i--){
            cursum = cursum + arr[i];
            if(cursum > arr[i]){
                right[i] = cursum;
            }
            else{
                right[i] = arr[i];
            }
            cursum = right[i];
        }
        long long int result = INT_MIN;
        for(int i=0;i<n;i++){
            long long temp = right[i] + left[i] - arr[i];
            if(temp>result){
                result = temp;
            }
        }
        return result;
    }

/*APPROACH 2 
long long maxSubarraySum(int arr[], int n){
       long long int result = INT_MIN;
       long long int cursum = 0;
       for(int i=0;i<n;i++){
           cursum = cursum + arr[i];
           result = max(cursum, result);
           if(cursum<0){
               cursum = 0;
           }
       }
       return result;
    }
*/


int main(){

    return 0;
}