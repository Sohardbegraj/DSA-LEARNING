//******************************************************         linear search        ***************************

#include <iostream>
using namespace std;

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

}

bool search(int arr[],int size, int key){
    for(int i=0 ;i < size;i++){             // it runs the loop from zero index n-1 if element at any index is equal to key it retuen true
        if(arr[i] == key) 
        return true ;          // element found
    }
    return 0;      // if element not found
}

int main() {
    
    int arr[10]={100,110,67,888,-88,29187,67890,345,425452,425,};    // it is coder-define array 
    cout<< "enter element you want to search:"<<endl;
    int key;
    cin>>key;               // input key we want to check present in array or not

    int found=search(arr ,10 ,key);// as search function only returns true or false

    if(found==true){
        cout << "Element is present in the array." << endl;
    }
    else{
        cout << "Element is not present in the array.\n" << endl;
        cout<<"\nfollowing elements are present"<<endl;
        printarray(arr ,10);
        cout<<endl;
    }
    return 0;
}