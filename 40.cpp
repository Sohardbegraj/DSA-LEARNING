#include <iostream>
using namespace std;
//                                     reversing array

int reversearray(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
};


void printarray(int arr[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<< arr[i]<<" ";
     }
     cout<<endl;

}

int main(){

    int arr[10]={11,2,3,4,5,6,766,7,77,6};
    cout<<"intial array"<<endl;
    printarray(arr,9);
    reversearray(arr,9);
    cout<<"reversed array"<<endl;
    printarray(arr,9);
}