#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0,index;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    index=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=index && arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
}