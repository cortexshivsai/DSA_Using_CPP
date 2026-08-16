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
    int pos_count=0;
    int neg_count=0;
    int zero_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos_count++;
        }
        if(arr[i]<0){
            neg_count++;
        }
        if(arr[i]==0){
            zero_count++;
        }
    }
    cout<<"Count of Positive Numbers is: "<<pos_count<< "\nCount of Negative Numbers is: "<<neg_count<< "\nCount of Zeroes is:"<<zero_count;
    return 0;
}