//******************************************************        alternate swap        ***************************

#include <iostream>
using namespace std;

void alternateswap(int num[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if(i+1 < n){        // it means if next element is part of array then swap => if array is odd then leave last element and swap remaining paires 
            swap(num[i],num[i+1]);      //array get swap at alternative indices
        }
    }
    

}

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

}

int main() {
    
    int arr[10]={100,110,67,888,-88,29187,67890,345,425452,425,};
    
    cout<<"\n intial array is :"<<endl;
    printarray(arr ,10);

    cout << "\n Reversed array is: \n";
    alternateswap(arr,10);            //  array get swap at alternative indices by calling alternate -swap function

    printarray(arr,10); 
    return 0;

}