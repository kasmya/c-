
/*
- if else

if (condition)
{
statement 1;
}
else{
statement 2;
}
*/

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter yor age";
    cin>>age;
    if(age>110 || age<1){
        cout<<"invalid input for vaccination";
    }
    else if(age>=18){
        cout<<"you are eligible for vaccination";
    } // else if statement
    else{
        cout<<"you are not eligible";
    }
}

/* switch case - multi cases
switch(x){
    case 1: // executition if x = 1;
    break;
    case 2: // if x =2;
    break;
    default: // when x value does not match any case
}
*/

int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    switch(age){
        case 18: 
        cout<<"you are eligible";
        break;
        case 15:
        cout<<"you are not eligible";
        break;
        case 110:
        cout<<"you are not reccomended";
        break;
        default: 
        cout<<"idk";
        break;
    }
}

// loops
/* 
1) for loop

for(i=0;i<n;i++){
//statement
}

2) while loop

while(condition is true){
//info
}

*/

int main(){
    for(int i=0;i<5;i++){
        cout<<"the value of i is "<<i<<endl;
    }
    int a=0;
    while(a<70){
        a+=1;
        cout<<"the value of a is "<<a<<endl;
    }
}









