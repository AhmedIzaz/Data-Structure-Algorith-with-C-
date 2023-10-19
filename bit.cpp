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
// we can also clear a bit by using reverseInPosition function.but the limitation is
//  if in given position is there a 0 bit. then it will be transform into 1 because of xor operation
// thats why for clearing bit in a given position its always safe to use clearBit function
int reverseInPosition(int value, int position)
{
    return (value ^ (1 << position));
};

bool isPowerOfTwo(int value)
{
    // the binary differences between every power of two with the value less than one is equal to 0
    // thats why we check the value of given number with one less of its using and operation
    return (value && !(value & value - 1));
};

// suppose value is 18 = 10010
// value - 1 = 17      = 10001
//   &                 = 10000
// if new value > 0 then value = (value & (value-1)) and count++
// if value = 0 then the count is the counted number of 1 in the binary value of given value
// we can solve this in both recursive function or loop
int countOneInBinaryValue(int value, int count = 0)
{
    if (value <= 0)
        return count;
    return countOneInBinaryValue((value & value - 1), ++count);
};

void subsets(int array[], int length)
{
    for (int i = 0; i < (1 << length); i++)
    {
        for (int j = 0; j < length; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << array[j] << " ";
            };
        };
        cout << endl;
    };
};


// remember it will work only on the condition where only one unique number
// other number must have to be repeated twice, not more
int findUnique(int array[], int size)
{
    int xorsum = 0;
    for (int i = 0; i < size; i++)
        xorsum = xorsum ^ array[i];
    return xorsum;
};

int main()
{
    int array[] = {3, 3, 8, 13, 15, 8, 13};
    cout << findUnique(array, 7) << endl;
    return 0;
};
