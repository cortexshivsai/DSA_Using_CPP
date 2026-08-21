#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[100];
    cout<<"Enter Any "<<n<<" Numbers:\n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest= arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Smallest Number is: "<<smallest<< "\nLargest Number is: "<<largest;
    return 0;

}
