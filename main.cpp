#include <iostream>
#include <fstream>

int main() 
{
    std::ifstream input_file(__FILE__);

    char c;

    while (input_file.get(c) && input_file.good()) 
    {
        std::cout.put(c);
    }
    
    input_file.close();
}