#include <iostream>
#include "sales_item.h"
int main()
{
    Sales_item book;
    std::cout << "请输入销售记录" << std::endl;
    while (std::cin >> book)
    {
        std::cout << "ISBN 售出本数 销售额为：" << std::endl;
        std::cout << book << std::endl;
    }
    return 0;
}