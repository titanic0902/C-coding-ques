#include<iostream>
using namespace std;

void  mergesorted(int arr1[], int arr2[] , int n,int m){
    int i = n-1;
    int j = m-1;
    int k = n+m-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }
        else{
            arr1[k]= arr2[j];
            k--;
            j--;
        }
    }
     while(i>=0){
         arr1[k]= arr1[i];
            k--;
            i--;
    }

  
    while(j>=0){
         arr1[k]= arr2[j];
            k--;
            j--;
    }

}




int main(){
    int n;
    cin>>n;
    int arr1[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[100];
     for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    mergesorted(arr1,arr2,n,m);
// print array 
 for(int i=0;i<n+m;i++){
        cout<<arr1[i]<<" ";
    }

}