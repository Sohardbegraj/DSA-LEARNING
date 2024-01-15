
//*********************************************    MAXIMUM/MINIMUM VALUE IN ARRAY ******************************************

#include <iostream>
using namespace std;

int getmax(int num[],int n){
    int max=INT8_MIN;                      //INT8_MIN returns minimum value of integer
    for (int i=0;i<n;i++){
        if(num[i] > max){                       // here getmax run loop untill it gets maximum no.
            max = num[i];
        }
    }
    return max;
}

int getmin(int num[],int n){
    int min=INT8_MAX;
    for (int i=0;i<n;i++){
        if(num[i] < min){                  //// here getmin run loop untill it gets minimum no.
            min = num[i];
        }
    }
    return min;
}

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

}

int main() {
    int size;
    cout<< "enter size of array(100 elements only)"<<endl;
    cin >> size;       // we define size of array we need
    int num[100];
    if(size<100){           // if entering no. of elements more then size it simply reject them
        for (int i = 0; i < size; i++) {
            cout << "Enter element[" << i + 1 << "]: ";     //+1
            cin >> num[i];
    }
        cout<<"array is"<<endl;
        printarray(num ,size);
        cout << "Max: "<<getmax(num,size)<<endl;
        cout << "Min: "<<getmin(num,size)<<endl;


    }
    else{
        cout<<"error! enter array upto 100 elements"<<endl;
    }
    
}