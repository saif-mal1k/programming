#include <iostream>
using namespace std;

class employee{
    public:
        string name;
        int age;
        int empno;
        employee(){};
        employee(string a, int b, int c){
            name = a;
            age = b;
            empno = c;
        }
        employee(employee &a){
            name = a.name;
            age = a.age;
            empno = a.empno;
        }
};

int main(){
    employee emp1("raju", 24, 101);
    employee emp2(emp1);
    return 0;
}
