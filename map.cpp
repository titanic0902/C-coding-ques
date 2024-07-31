#include<iostream>
#include<map>
using namespace std;

int ocuurence(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto pair: mpp){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}





int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ocuurence(arr,n);
};