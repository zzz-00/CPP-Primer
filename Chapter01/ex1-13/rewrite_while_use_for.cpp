#include <iostream>
int main()
{
    int sum = 0;
    for (int val = 0; val < 11; val++)
    {
        sum += val;
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}
