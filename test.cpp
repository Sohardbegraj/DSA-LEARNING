#include <iostream>
#include <string>
using namespace std;
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
}


void printarray(int arr[],int x){
     for (int i=0;i<x;i++){                     // funtion to print array
        cout<<" "<< arr[i]<<" ";
     }
     cout<<endl;

}
int main() {

    int arr[6]={1,2,3,4,5,6};
    populate(arr,6);
    printarray(arr,6);
    
}