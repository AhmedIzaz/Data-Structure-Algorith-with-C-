#include <bits/stdc++.h>
using namespace std;

int getBit(int value, int position)
{
    // here value 12 = 1100
    // 1 << 2 =        0100
    // so & is       = 0100 = 4
    // otherwise all the position returned 0, that why (!= 0) condition checked.
    // (== 1) will not worked cause it will return the value of position, not digit
    return (value & (1 << position)) != 0;
};

int setBit(int value, int position)
{
    // it will only set 1 in given position
    return (value | (1 << position));
};

int clearBit(int value, int position)
{
    return (value & (~(1 << position)));
};
//we can also clear a bit by using reverseInPosition function.but the limitation is
// if in given position is there a 0 bit. then it will be transform into 1 because of xor operation
//thats why for clearing bit in a given position its always safe to use clearBit function
int reverseInPosition(int value, int position)
{
    return (value ^ (1 << position));
};



int main()
{
    cout << reverseInPosition(12, 2);
    return 0;
};
