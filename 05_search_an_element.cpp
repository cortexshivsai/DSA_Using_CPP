#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[100];
    cout<<"Enter any "<<n<<" numbers:\n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=true;
            break;
        }
    }
    if(found){
        cout<<target<<" is found!";
    }
    else{
        cout<<target<<" is not found";
    }
    return 0;
}