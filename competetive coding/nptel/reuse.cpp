# include<stdio.h>
using namespace std;

class vector{

    double *elem = nullptr;
    int size = 0;

    vector (int sz): elem {new double[sz] }, size{sz} {}
    double & operator[] (int i){ return (elem[i]);  }   


}