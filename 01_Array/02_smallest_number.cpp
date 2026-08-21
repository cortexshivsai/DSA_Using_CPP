#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 Numbers:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Smallest Number is:"<<smallest;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter any 5 numbers: ";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int smallest=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<"Smallest number is:"<<smallest;
//     return 0;
// }