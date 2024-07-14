/*
class 
- userdefined datatype
- blueprint for an object

object 
- real world entity
- instance of a class

*/

/*
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
};
int main(){
    student s1;
    s1.name="gaurav";
    s1.id=1;
    cout<<"name "<<s1.name<<" id "<<s1.id;

}
*/

#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
    void print(){
        cout<<"name "<<s1.name<<" id "<<s1.id;
    }
    student(string n,int i){
        name=n;
        id=i;
    }
};
int main(){
    student s1= student("gaurav",1);
    s1.print();
    /*
    student s1;
    s1.name="gaurav";
    s1.id=1;
    s1.print();
    student s2;
    s2.name="manish";
    s2.id=2;
    s2.print();
    student s3;
    s3.name="ashish";
    s3.id=3;
    s3.print();
    */
}

// constructor - way to initialize an obj
// - default constr - no parameter passed
// - parameterized constr - used to pass arguments

// inheritance - class gets properties and behavior from diff class 
// - super class - class which is inherited
// - sub class - which inherits
