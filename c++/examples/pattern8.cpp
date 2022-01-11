# include<iostream>
using namespace std;

int main()
{

    int rows =10, cols=5 ;

    for (int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if (i<=5 && j<= cols-(i-1))
            cout<<"*";
            else if (i>=6 && j<=(i-5))
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}

/*

*****
****
***
**
*
*
**
***
****
*****

*/