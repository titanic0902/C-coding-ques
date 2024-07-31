#include<iostream>
#include<climits>
using namespace std;

int profit(int arr[], int n){
    int mini = arr[0];
    int profit = 0;
    
    for(int i=1;i<n;i++){
        int diff = arr[i]-mini;
       profit = max(profit,diff);
       mini = min(mini,arr[i]);
    }
    return profit;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<profit(arr,n);

}
