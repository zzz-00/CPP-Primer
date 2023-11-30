#include <iostream>
#include "sales_item.h"

int main()
{
    Sales_item book, total;
    if (std::cin >> total)
    {
        while (std::cin >> book)
        {
            if (compareIsbn(total, book))
            {
                total += book;
            }
            else
            {
                std::cout << "输入了不同的ISBN" << std::endl;
                return -1;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cout << "没有数据" << std::endl;
        return -1;
    }
    return 0;
}