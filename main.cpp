#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cout << "Nhap n: ";
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}