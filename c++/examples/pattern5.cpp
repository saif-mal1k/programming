# include<iostream>
using namespace std;

int main()
{

    int rows =5, cols=10 ;

    for (int i=1;i<=rows;i++)
    {
        for(int j=1;j<=(cols/2)+1-i;j++)
        {
            cout<<"*";
        }

        int j_val =((cols / 2) + 1 - i) + 1 ;
//        cout<<j_val;
        for (int j = j_val ; j <= j_val-1+(i - 1) * 2; j++)
        {
            cout << " ";
        }
        
        j_val = j_val + (i - 1) * 2; 
//        cout<<j_val;
        for (int j = j_val; j <= cols; j++)
        {
            cout << "*";
        }

        cout<<endl;        
    }

    return 0;
}

/*

**********
****  ****
***    ***
**      **
*        *

*/