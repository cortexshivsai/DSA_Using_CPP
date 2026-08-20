#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:\n ";
    cin>>n;
    int arr[100];
    cout<<"Enter any "<<n<<" numbers:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int positive_count=0;
    int neagtive_count=0;
    int zero_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive_count+=1;
        }
        else if(arr[i]<0){
            neagtive_count+=1;
        }
        else{
            zero_count+=1;
        }
    }
    cout<<"Positive Numbers Count is: "<<positive_count<<"\n Negative Numbers Count is: "<<neagtive_count<<"\nZero Count is:"<<zero_count;
    return 0;
}