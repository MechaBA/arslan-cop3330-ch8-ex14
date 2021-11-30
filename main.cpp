/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Berkay Arslan
 */

/*
A non-reference function being declared the const parameter would mean that the arguments made would be constant,
therefore you have no ability to edit anything inside. Being a constant, it cannot be changed in the main function,
and a non-reference const cannot be changed once it is declared.
*/

int main() //Main Function
{
  int x = 5;
  int& ref = x;
  ref = 7;
  cout << "x = " << x << endl ;
  x = 10;
  cout << "ref = " << ref << endl ;
  return 0;
}

//Output being a constant because of the referencing involved