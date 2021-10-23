// file Vector.cpp:
module; // this compilation will define a module
// ... here we put stuff that Vector might need for its implementation ...
export module Vector; // defining the module called "Vector"
export class Vector{
public  :
    Vector(int s);
    double &operator[](int i);
    int size();

private:
    double *elem; // elem points to an array of sz doubles
    int sz;
};
Vector::Vector(int s)
    : elem{new double[s]}, sz{s} // initialize members
{
}
double &Vector::operator[](int i){
    return elem[i];
}
int Vector::size(){
    return sz;
}
export int size(const Vector &v) { return v.size(); }
//This defines a module called Vector, which exports the class Vector,
//all its member functions, and the nonmember function size().
//The way we use this module is to import it where we need it.
