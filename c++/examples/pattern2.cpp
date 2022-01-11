# include<iostream>
using namespace std;

int main()
{

    int rows =5, cols=5 ;

    for (int i=0;i<rows;i++)
    {
        for(int j=1;j<=cols-i;j++)
        {
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

*/