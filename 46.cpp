#include <iostream>
#include<vector>
using namespace std;

//                                 add two array

  
int reversearray(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
};

vector<int> findsumofarray(vector<int>&a,int n,vector<int>&b,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;
    while (i>=0 && j>=0)
    {
        int val1=a[i];
        int val2=b[j];

        int sum=val1+val2+carry;
        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        i--;
        j--; 
    }
    while(i>=0){
        int sum=a[i]+carry;
         carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        i--;
    }
     while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        int value=sum%10;
        ans.push_back(value);
        i--;
        j--; 
    }
cout<<endl;
}

void printarray(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr;
    int x;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>x;
        arr.push_back(x);

    }
    
    vector<int> arr2;
    int y;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>y;
        arr.push_back(y);

    }
    cout<<"sum of two array"<<endl;
    printarray(arr);
    cout<<"and"<<endl;
    printarray(arr2);
    cout<<"is"<<endl;
    findsumofarray(arr,5,arr2,6);


}