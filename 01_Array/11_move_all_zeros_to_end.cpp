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
    int position=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[position]=arr[i];
            position++;
        }
    }
    while(position<n){
        arr[position]=0;
        position++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}