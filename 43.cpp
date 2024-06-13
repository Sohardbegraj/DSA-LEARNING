#include <iostream>
using namespace std;


//                                        Rotated Array


void printarray(int arr[],int x){
     for (int i=0;i<x;i++){                     // funtion to print array
        cout<<" "<< arr[i]<<" ";
     }
     cout<<endl;

}

int main(){
   int arr[5]={2,5,6,7,8};
   printarray(arr,5);

   int k;
   cout<<"enter value of k :"<<endl;
   cin>>k;

   int temp[5]={0,0,0,0,0};
   for (int i = 0; i < 5; i++)
   {
      temp[(i+k)%5]=arr[i];
   }
   
   printarray(temp,5);
}