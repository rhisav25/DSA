#include  <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j= i;
        while(j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
} 
int main()
{
    int arr[6] = {1,4,3,6,5,2};
    insertionsort(arr,6);
    for(auto it:arr){
        cout<<it<<" ";
    }
      
    return 0;
}