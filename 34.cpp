#include <iostream>
using namespace std;

// finding pivot element in arry
//*An element in an array is a pivot element if the sum of all the elements in the list to its left is equal to the sum of all the elements to its right. 


int getpivot(int arr[],int n){
    int start =0;
    int end =n-1;
    int mid =start -(end + start)/2;
    while (start<end) {
        if(arr[mid] > arr[0]){
            start=mid +1;
        }
        else {
            end=mid; 
        }
        int mid =start -(end + start)/2;
    }
return mid;
}

int main(){

    int arr[11] = {3,8,10,17,1};
    cout<<"pivot element is"<<endl;
    getpivot(arr,11);
}