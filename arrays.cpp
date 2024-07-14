// collection of elements of same datatypes
// stored in adjacent memory locations
// elements accessed through indexing 0 to ...
// a[0]=10 
// a[4]

/* initialisation-
1) static 
int x[6]={3,5,6,7,8,9,1}

2) dynamic - user defined
int x[6];
for (int i=0;i<6;i++)
cin>>x[i]

1d array int a[5];
2d array int a[10][5];
*/

#include <iostream>
using namespace std;
int main(){
    int arr[3][5]={{7,8,9,10,11},{10,11,12,13,14},{1,2,3,4,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<"the value at"<<i<<" "<<j<<"is "<<arr[i][j]<<endl;
        }
    }

}


