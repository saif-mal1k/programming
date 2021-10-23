# include<iostream>
using namespace std;

int main()
{

    int rows =5, cols=10 ;

    for (int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if (j<=cols/2 && j<=i)
            cout<<"*";
            else if (j>i && cols-j>=i)
            cout<<" ";
            else if (j>cols/2 && cols-j<i)
            cout<<"*";
//            cout<<j;
            //cout<<" ";
            //else if (cols/2-i<=j && j<cols-(cols/2-i))
            //cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}

/*

*        *
**      **
***    ***
****  ****
**********

*/