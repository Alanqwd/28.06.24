#include <iostream>
#include <Windows.h>
   

typedef void (*FunctionPtr)(int); 


void function1(int x) 
{
    std::cout << "1 " << x << std::endl;
}

void function2(int x) 
{
    std::cout << "2 " << x << std::endl;
}

void function3(int x) 
{
    std::cout << "3 " << x << std::endl;
}

int main() 
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
    

    FunctionPtr functionArray[] = { function1, function2, function3 };

    for (int i = 0; i < 3; ++i) 
    {
        functionArray[i](i); 
    }

    return 0;
}
    

  