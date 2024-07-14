/*
returntype funcname(argtype argname){}*/

#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    cout<<"the value after addition is "<<add(3,4);
}

// function overloading
int sub(int c, int d){
    return c-d;
}
double sub(double c, double d){
    return c-d;
}
int main(){
    cout<<sub(10,7)<<endl;
    cout<<sub(5.25,3.66);
}