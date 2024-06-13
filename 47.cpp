#include <iostream>
using namespace std;



int getlenght(char arr[]){
    int count=0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}

void reversechar(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}

int main(){
    char name[20];//                   string is array of character data type
    cin>>name;//                       let it take 6 character then remaining elements will be null character
    cout << name<< endl;
    int len=getlenght(name);
    cout<<"lenght :"<<len<<endl;
    reversechar(name,len);
    cout <<name<< endl;

}