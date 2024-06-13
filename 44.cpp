#include <iostream>
#include<vector>
using namespace std;


//                                       check array is sorted and Rotated Array


void printarray(int arr[],int x){
     for (int i=0;i<x;i++){                     // funtion to print array
        cout<<" "<< arr[i]<<" ";
     }
     cout<<endl;

}
 
bool check(int  nums[],int n){
    int count=0;
    
    for (int i = 1; i < n; i++)
    {
        if (nums[i-1]=nums[i]){
            count++;
        } 
    }
    if(nums[n-1]=nums[0]){
        count++;
        return count<=1;
    }
}

int main(){
    int arr[5]={2,5,6,7,8};
    printarray(arr,5);
    cout<<"array is"<<check(arr,5)<<endl;

    int arr2[5]={1,1,1,1,1};
    printarray(arr2,5);
    cout<<"array is"<<check(arr2,5)<<endl;

    int arr3[5]={3,4,5,1,2};
    printarray(arr3,5);
    cout<<"array is"<<check(arr3,5)<<endl;

}