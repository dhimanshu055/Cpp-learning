// vactor declaration 

#include<iostream>
#include<vector>
using namespace std;


int main() {
// int arr[]= {1,2,3,4,5};
 vector<int>values;
  values.push_back(4);
  values.push_back(5);
  values.push_back(6);
    int arr[5];
   
    for (int i = 0; i < values.size(); i++)
    {
        cout<<values[i]<<" ";
    }
    
   
    cout << "vector";
    return 0;
}


for(auto value:arr){

}

