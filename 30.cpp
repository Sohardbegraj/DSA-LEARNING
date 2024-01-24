#include <iostream>
using namespace std;
//                             binary search(give index of key/searched element)

int binarysearch(int array[],int size, int key){
    // initialize low and high pointers
    int start=0;
    int end =size-1;
    int mid =size -(end + size)/2 ;  // so that it doesn't exceed (2^-31) -1 integer limit
    while(size >= end){
        if(array[mid]==key){
            return mid;   // element found at middle index
        }
        if(array[mid]>key){
            end = mid -1;     // the key is smaller than the middle element
        }
        else{
            start = mid+1;      // the key is greater than the middle element
        }
        int mid =size -(end + size)/2 ;
    }
    return -1;
};
int main() {
    int even[10]={ 4,6,8,9,10,12,15,17,10,20};
    int odd[11]={1,3,5,7,9,11,13,15,17,19,21};
    int index1= binarysearch(even,10,15);
    int index2= binarysearch(odd,11,23);
    cout<< index1 <<endl;
    cout <<" "<<index2<< endl;


    return 0;
}