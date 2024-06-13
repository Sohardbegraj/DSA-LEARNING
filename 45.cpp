#include<iostream>
#include<algorithm>
using namespace std;

int searchfunc(int arr[], int n, int newarr[]){
    int j=0;
    for (int i=0;i<8;i++){
        if (arr[i]==arr[i+1]){
            newarr[j]=arr[i];
            j++;
        }
    }
    if (j==0){
        newarr[j]=-1;
    }
    return j;
}

int main(){
    int arr[8]={1,2,4,6,4,2,8,0};
    sort(arr ,arr+8);
    int newarr[8];
    
    int k = searchfunc(arr,8,newarr);
    for (int j=0;j<k;j++){
        cout<<newarr[j]<<" ";
    }
     
    return 0;
}