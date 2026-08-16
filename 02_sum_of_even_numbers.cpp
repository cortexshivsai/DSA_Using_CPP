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
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
    }
    cout<<"Sum of even numbers is: "<<sum;
    return 0;
}