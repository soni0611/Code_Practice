#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for (int col = 0; col < n-row; col++)
        {
           cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}