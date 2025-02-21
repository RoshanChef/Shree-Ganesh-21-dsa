#include <iostream>

using namespace std;

int main()
{
  // Arithmetic
  int a = 10, b = 20, c = a + b;
  cout << "plus val " << c << endl;

  c = a - b;
  cout << "minus val " << c << endl;

  c = a * b;
  cout << "multi val " << c << endl;

  c = a / b;
  cout << "div val " << c << endl;

  cout << endl;
  cout << "53 % 3 : " << 53 % 3 << endl;
  cout << "2 % -5 : " << 2 % -5 << endl;
  cout << endl;

  // relational return 0 or 1
  /*
      <  ,  >  , >= , <= , == , !=
  */

  // logical return 0 or 1
  /*
    && , ||
  */

  int val = 1;

  int rel_a = 10, rel_b = 10;
  int resullt = rel_a > 10 || rel_b > 10 || val++;

  cout << "check the " << !12 << endl;

  cout << "resullt " << resullt << endl;

  cout << "value " << val << endl;

  // Pre-increment  , Pre=decrement
  int in_a = 2, in_b = 2;
  // in_a++, in_b++;

  val = in_a++;
  cout << "post " << val << endl;
  val = ++in_a;
  cout << "pre " << val << endl;

  cout << endl;
  cout << "increment a++ " << in_a++ << "\tincrement b++ " << in_b++ << endl;
  cout << "increment ++a " << ++in_a << "\tincrement ++b " << ++in_b << endl;

  int x = 5, y;
  y = x++ * x++;
  cout << "value " << x << endl;
  cout << "value " << y << endl;

  // assignment operator
  int cnt = 1;
  cnt -= 1;
  cout << "count " << cnt << endl;

  cnt = 2;
  cnt *= 2;
  cout << "count " << cnt << endl;

  cnt = 1;
  cnt += 1;
  cout << "count " << cnt << endl;

  // shifting operator <<  , >>
  int c_val = 2;
  c_val <<= 2;
  cout << "value is " << c_val << endl;

  c_val = 8;
  cout << (c_val >> 2) << endl;

  // bitwise operator & | ^ ~
  int val1 = 10, val2 = 6;

  cout << "Bitwise & " << (val1 & val2) << endl;
  cout << "Bitwise | " << (val1 | val2) << endl;
  cout << "Bitwise ^ " << (val1 ^ val2) << endl;
  cout << "Bitwise ~ " << (~val1) << endl;

  // Ternary operator
  string str = (10 > 4) ? "yes" : "no";
  cout << str << endl; 

  return 0;
}