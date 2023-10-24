#include <iostream>
int main()
{
    int start = 0, end = 0;
    std::cin >> start >> end;
    std::cout << std::endl;
    while (start <= end)
    {
        std::cout << start << std::endl;
        start++;
    }
}