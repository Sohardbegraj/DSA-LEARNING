#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
        cout<<"The original vector is : ";
         for (int i=0 ;i<v.size();i++)  {
           cout << v[i] << " ";    
         }
          cout << endl;
	//Removing the last element of the vector using pop_back() function
	cout << "After removing the last element, The modified vector is: ";
	if (!v.empty())  
	{   // check if the vector is not empty  
		v.pop_back();    // remove the last element    
	}    
	for (int i = 0; i < v.size(); ++i) 
	{
		cout << v[i] << " ";    
	}

    cout <<  "size of v is "<<v.capacity() <<endl;
    cout <<  "front element of v is "<<v.front() <<endl;
    cout <<  "back element of v is "<<v.back() <<endl;
    cout <<  "element at 3 index of v is "<<v.at(1) <<endl;


    vector<int> a(5,1);                     // a is assigned 1 five times
    for (int i = 0; i < a.size(); ++i) 
	{
		cout << a[i] << " ";    
	}


	return 0;
}