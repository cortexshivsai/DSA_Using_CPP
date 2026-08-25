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
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd_count++;
        }
    }
    cout<<"Count of odd numbers is: "<<odd_count;
    return 0;
}