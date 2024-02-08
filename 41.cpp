#include <iostream>
using namespace std;

//                              merging two array in third array

void printarray(int arr[],int x){
     for (int i=0;i<x;i++){                     // funtion to print array
        cout<<" "<< arr[i]<<" ";
     }
     cout<<endl;

}


void merge(int arr1[],int n, int arr2[], int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while (i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while (j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    
    
}
int main(){
    int arr1[10]={1,2,3,4,5,6,76,78,77,69};
    int arr2[6] = {11,15,44,46,55,67};
    int arr3[100]={};
    merge(arr1,10,arr2,6,arr3);
    cout<<"merged array is"<<endl;
    printarray(arr3,16);
    return 0;
}