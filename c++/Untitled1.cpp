//# include<iostream.h>
//using namespace stdlib;
# include<stdio.h>
# include<conio.h>

void func (int*);

int main()
{
    int arr[]= {1,2,3,4,5,6};
    func(arr);

  // int v = &b;
 //  int &c = b;
//   cout<<v"\t"<<b;
    return 0;
}

void func(int* arr)
{
    for (int i=0;i<6;i++)
    {
      printf("%d",*(arr+i));
    }
    //return ( )
}
