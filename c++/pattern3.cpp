# include<iostream>
using namespace std;

int main()
{

    int rows =5, cols=5 ;

    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if (j<cols - (i+1))
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}

/*

    *
   **
  ***
 ****
*****

*/