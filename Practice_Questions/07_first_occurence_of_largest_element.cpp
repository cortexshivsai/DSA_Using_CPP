#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[100];
    cout<<"Enter any "<<n<<" numbers:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            index=i;
        }
    }
    cout<<"Largest Element is: "<<largest<<" First Occurence at index: "<<index;
    return 0;
}