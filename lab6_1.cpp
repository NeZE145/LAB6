#include<iostream>
using namespace std;

int main(){
    int i=1;int a=0;int b=0;
    
    while(i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        if(i != 0){
        if(i%2 ==0){
            a=a+1;
        }else{
            
            b=b+1;
        }
        }

    }
    
    cout << "#Even numbers = " << a;
    cout << '\n';
    cout << "#odd numbers = " << b;
    return 0;
}
