//FOR N NUMBER OF ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout<<"Sum is: "<<sum;
//     return 0;

// }
//FOR DECLARED ARRAY
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 numbers you want to add:\n  ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of entered numbers is: "<<sum;
    return 0;

}