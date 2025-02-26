#include <iostream>
using namespace std;
string check(int num, int bit)
{
    int check_bit = 1;
    check_bit = check_bit << bit - 1;

    if (check_bit & num)
        return "bit is set";
    else
        return "not set ";
}

int main()
{
    // ****************** AND & ******************
    // ********** (1) even or odd
    // int num1 = -2;
    // cin >> num1;
    // if (num1 & 1)
    //     cout << "odd" << endl;
    // else
    //     cout << "even" << endl;

    // ************ (2) set bit
    // int num, bit;
    // cin >> num >> bit;
    // cout << "check that bit " << bit << " is set or not ?" << endl;
    // cout << "Result " << check(num, bit) << endl;

    // *********** (3) clear bit
    // int num, bit;
    // cout << "clear number's ith bit  : \n";
    // cin >> num >> bit;

    // cout << "before " << num << endl;
    // int one = 1;
    // one = one << bit-1;
    // one = ~one;
    // num = (num & one);
    // cout << "after clear " << bit << " bit " << num << endl;

    // ********** 4 reset(zero) first set bit from number
    // eg .. 11000 => 10000 , 1010=>1000
    // int num;
    // cout << "enter num for first reset a bit ";
    // cin >> num;

    // cout << "before num : " << num << endl;
    // num = num & num - 1;
    // cout << "after num : " << num;

    // ******** 5
    //  // check wheather number is power of 2 or not
    // int n;
    // cout << "check num is power of 2 or not :  ";
    // cin >> n;

    // n = n & n - 1;
    // if (n)
    //     cout << "Not power of 2" << endl;
    // else
    //     cout << "Power of 2";

    // ************* 6 number of 1'a in number
    // int n;
    // cout << "returns the number of 1's ";
    // cin >> n;
    // int count = 0;
    // //one way
    // while (n)
    // {
    //     if (n & 1 == 1)
    //     {
    //         count++;
    //     }
    //     n = n >> 1;
    // }

    // //another way
    // while (n)
    // {
    //     n= n & n-1;
    //     count++;
    // }
    // cout<<"count is : "<<count;

    // ********** OR **********

    // *************(1) set the number's ith bit :

    // cout << "set the number's ith bit : " << endl;
    // int num = 12, bit;
    // cin >> bit;
    // cout << "before num : " << num << endl;

    // bit = 1 << (bit - 1);
    // num = num | bit;

    // cout << "set the number of " << bit << "th bit" << endl;
    // cout << "after num : " << num << endl;

    // ********** NOT **********
    int num = 16;
    num = ~num;
    cout << "the number is " << num << endl;

    // ********** XOR **********
    int num1 = 5, num2 = 12;
    cout << (num1 ^ num2) << endl;

    // (1) toggling/filiping the last bit & returns whole num
    int val = 0b001001;
    cout << (1 ^ val) << endl;

    return 0;
}