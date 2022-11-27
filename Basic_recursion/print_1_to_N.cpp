// Linearly recursion.
/*
#include<iostream>
using namespace std;
void print(int n)
{
      static int i = 1;
      if(i>n)
            return;
      cout << i<< ' ';
      i++;
      return print(n);

}
int main()
{
      int num;
      cin >> num;
      print(num);
      return 0;
}
*/
// Backtracking (Recursion)
#include <iostream>
using namespace std;
void print(int n)
{

      if (n == 0)
            return;
       print(n-1);    //Incase of back traking can't use return in the recursive fucntion call
      cout << n << ' ';
}
int main()
{
      int num;
      cin >> num;
      print(num);
      return 0;
}
