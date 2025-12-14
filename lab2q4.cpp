//dma an integer and deallocates it using delete
#include<iostream>

using namespace std;

int main(){
    int *p;
    p = new int;
    *p = 555;
    cout<<"The entered number is: "<<*p;
    delete p;
    return 0;
}