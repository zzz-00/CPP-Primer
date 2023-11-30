#include <iostream>

int reused = 42; // reused  has global scope
int main()
{
    int unique = 0; // unique  has block scope
    std::cout << reused << " " << unique << std::endl;
    int reused = 0; // new, local object named  reused  hides global  reused
    std::cout << reused << " " << unique << std::endl;
    // explicitly requests the global  reused
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}