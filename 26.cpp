//******************************************************         reverseing array        ***************************

#include <iostream>
using namespace std;

void reverse(int num[],int n){
    int start = 0, end = n-1;
    while (start <=end) {
        // Swap the elements at start and end
        int temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        /* Move towards both directions.
        We decrement start index to move towards left side of array
        And increment end index to move towards right side of array */
        start++;
        end--;

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
    reverse(arr,10);            // get reversed array by calling reversed function

    printarray(arr,10); 
    return 0;

}