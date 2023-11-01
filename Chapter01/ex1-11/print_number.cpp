#include <iostream>
int main()
{
    int start = 0, end = 0;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> start >> end;
    std::cout << std::endl;
    if (start < end)
    {
        while (start <= end)
        {
            std::cout << start << std::endl;
            start++;
        }
    }
    else
    {
        while (start >= end)
        {
            std::cout << start << std::endl;
            start--;
        }
    }
    return 0;
}