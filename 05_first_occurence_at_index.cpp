#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[100];
    cout<<"Enter any "<<n<< "numbers:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            continue;
        }
    }
    if(index!=-1){
        cout<<target<<" first occurence found at index "<<index;
    }
    else{
        cout<<target<< "not found";
    }
    return 0;
}