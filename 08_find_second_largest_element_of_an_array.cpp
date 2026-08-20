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
    int second_largest=arr[1];
    if(second_largest>largest){
        int temp=largest;
        largest=second_largest;
        second_largest=temp;
    }
    for(int i=2;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<"Largest is: "<<largest<<"\nSecond Largest is: "<<second_largest;
    return 0;
}