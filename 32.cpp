#include <iostream>
using namespace std;

//      finding first and last occurence poistion of a repeating element in sorted array 

void firstocc(int arr[],int n,int key){
    int start=0;
    int end= n-1;
    int mid =start+(end-start)/2;
    int ans =-1;
    while(start<=end) {
        if (arr[mid] == key) { //if the middle element is equal to the key
        ans =mid;
        end =mid -1;
    }
    else if(arr[mid]< key){
        start = mid + 1; //the element on the right side is greater so we ignore it and changed new starting poisition to mid +1
    }
    else if(arr[mid]> key){
        end =mid -1;
    }
    mid = start + (end-start)/2;
   }
   cout<< ans<< endl;
}


void lastocc(int arr[],int n,int key){
    int start=0;
    int end= n-1;
    int mid =start+(end-start)/2;
    int ans =-1;
    while(start<=end) {
        if (arr[mid] == key) { //if the middle element is equal to the key
        ans =mid;
        start =mid +1;
    }
    else if(arr[mid]< key){
        start = mid + 1; //the element on the right side is greater so we ignore it and changed new starting poisition to mid +1
    }
    else if(arr[mid]> key){
        end =mid -1;
    }
    mid = start + (end-start)/2;
   }
   cout<< ans<< endl;
}
int main(){
    int arr[10] = {2,3,4,5,5,5,5,6,7,8};// sorted array
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"First occurrence of entered key is at index:"<<endl;
    firstocc(arr,n,key);
    cout<<"Last occurrence of entered key is at index:"<<endl;
    lastocc(arr,n,key);
    return 0;
}


// toatl occurrence = last index - first index + 1