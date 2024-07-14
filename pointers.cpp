// special type of datatypes used to store address of another variable
#include <iostream>
int main(){
    int x= 6;
    int*p;
    p=&x;
    cout<<"address of variable"<<p<<endl;
}

/*
int x=5;
int *ptr; // ptr is apointer
ptr = &x; // storing address of x in ptr
cout<<ptr; //address of ptr
*/

