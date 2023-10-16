#include <iostream>

void Statement1()
{
    std::cout << "/*" << std::endl;
}

void Statement2()
{
    std::cout << "*/" << std::endl;
}

void Statement3()
{
    // std::cout << /* "*/ " */;
}

void Statement4()
{
    std::cout << /*  "*/ " /* " /*"  */;
}

int main()
{
    Statement1();
    Statement2();
    Statement3();
    Statement4();
    return 0;
}
