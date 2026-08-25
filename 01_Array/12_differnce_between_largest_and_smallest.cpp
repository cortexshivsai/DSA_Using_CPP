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
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    int difference=largest-smallest;
    cout<<"Largest is: "<<largest<<"\n Smallest is: "<<smallest<<"\n Difference is: "<<difference;
    return 0;
}