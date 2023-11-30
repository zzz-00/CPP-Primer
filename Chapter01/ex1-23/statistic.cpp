#include <iostream>
#include "sales_item.h"
int main()
{
    Sales_item book1, book2;
    int num = 1;
    std::cout << "请输入若干销售记录：" << std::endl;
    if (std::cin >> book1)
    {
        while (std::cin >> book2)
        {
            if (book1.isbn() == book2.isbn())
            {
                num++;
            }
            else
            {
                std::cout << book1.isbn() << " 共有 " << num << " 条销售记录" << std::endl;
                book1 = book2;
                num = 1;
            }
                }
        std::cout << book1.isbn() << " 共有 " << num << " 条销售记录" << std::endl;
    }
    else
    {
        std::cout << "没有数据" << std::endl;
        return -1;
    }
    return 0;
}