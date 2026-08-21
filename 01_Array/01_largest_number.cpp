#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter any 5 numbers:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest Number is:"<<largest;
    return 0;
}
