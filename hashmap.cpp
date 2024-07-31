#include<iostream>
#include <unordered_map>
using namespace std;

int ocuurence(int arr[],int n){
    unordered_map<int,int> mapp;

   for(int i=0;i<n;i++){
    mapp[arr[i]]++;
   }
    for(auto pair : mapp){
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
}