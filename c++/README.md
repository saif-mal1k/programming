# C++ Programming Notes

# Table of Contents
1. [Example](#example)
2. [Example2](#example2)
3. [Third Example](#third-example)
4. [Fourth Example](#fourth-examplehttpwwwfourthexamplecom)




## Example
## Example2
## Third Example
## [Fourth Example](http://www.fourthexample.com) 



# floating point output
```C++
#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
    double pi = 3.14159;
	
    // Let's say we wanted to scale this to 2 decimal places:
    cout << fixed << setprecision(2) << pi << endl;
    printf("%.2f", pi);
}
```


# taking user input for strings
***note:*** when we use cin for string it only grabs first word.
***example:*** 
```C++
#include<iostream>
using namespace std;
int main()
{
  string ans;
  cin>>ans;   // hello world
  cout>>ans;  // hello
}
```
***note:*** the output is hello because **cin** object needs to know when to stop user input, and they chose when space.
<br/> if you separate your words using white space, tab , or new line or "\n" it will take only the first word.

and if you do this...
```C++
#include<iostream>
using namespace std;
int main()
{
  string greeting;  
  cin>>greeting;    // hello world
  string left_over;
  cin>>left_over;
  cout<<greeting;   // hello
  cout<<left_over;  // world
}
```
notice how it take the next input from whats left in input.

so, what's the standard way of taking string input. ***getline***
```C++
#include<iostrean>
using namespace std;
int main()
{
  string greeting;
  getline(cin,greeting);  // hello world
  cout<<greeting<<endl;   // hello world
}
```

wait, how is ***getline(cin,greeting);*** different from ***cin.getline();***      ??????????

the ***getline(cin,greeting);*** is used for strings.
<br/> ***cin.getline();*** can be used for numbers, and other data types.


alternatively, To consume the whitespace or newline between the end of a token and the beginning of the next line:

``` getline(cin >> ws, s2);   // eat whitespace ```

how does it work, whats the difference in iy from other ?????????




