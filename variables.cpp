#include<iostream>
using namespace std;
int main(){
    int score = 82;
    cout<<"marks scored is "<<score;
}

void print(){
    int marks=92; //local vaqriable
    cout<<marks;
}

int main(){
    cout<<"marks obtained is";
    print();  //calling function
    return 0;
}

int glob = 10; //global variable

void pr(){
    cout<<"global variable value"<<glob<<endl;
}

int main(){
    pr();
    glob=100;
}

