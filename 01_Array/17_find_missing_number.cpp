#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[100];
    int actualSum=0;
    cout<<"Enter any "<<n<<" numbers:\n";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        actualSum+=arr[i];
    }
    int expectedSum=n*(n+1)/2;
    int missing=expectedSum-actualSum;
    cout<<"Missing Number is: "<<missing;
    return 0;
}