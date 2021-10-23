#include <iostream>
using namespace std;

int main()
{
    int no,rev=0,org,rem;
    cout<<"enter the no: ";
    cin>>no;

    org = no ;

    while ( no>0)
    {
        rem = no % 10 ;
        rev = rev*10 + rem ;
        no/=10;
    }

    if(org == rev)
    cout<<" \n no is palindrome ";
    else
    cout<<"no isn't a  palindrome"; 

    return 0;
}
