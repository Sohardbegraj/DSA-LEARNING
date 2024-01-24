#include <iostream>
using namespace std;

// finding peak of mountain array

int peakelement(int arr[],int n){
    int start =0;
    int end =n-1;
    int mid =start -(end + start)/2;
    while (start < end) {
        if(arr[mid]<arr[mid +1 ]){
            start=mid +1;
        }
        else if(arr[mid]<arr[mid -1 ] ){
            end=mid -1 ;
        }
        else {
            end=mid;
        }
        int mid =start +(end - start)/2;
    }
 return start;
}

int main(){
    int arr[11] = {1,2,3,4,5,6,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    peakelement(arr,n);
}