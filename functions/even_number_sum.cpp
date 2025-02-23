#include<iostream>
using namespace std;

int evensum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;

}


int main(){
    int result=evensum(5);
    cout<<result;
    return 0;
}