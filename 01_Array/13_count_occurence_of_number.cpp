#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[100];
    cout<<"Enter any "<<n<<" numbers:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    int count=0;
    cout<<"Enter Target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"No.of Occurences for the target element are: "<<count;
    return 0;

}