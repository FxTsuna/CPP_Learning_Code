#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Expected argument" << std::endl;
        return -1;
    }
    int length = std::stoi(argv[1]);
    if (length <= 0)
    {
        std::cerr << "Expected strictly positive value" << std::endl;
        return -1;
    }

    std::cout << length << std::endl;

    std::vector<int> array;

    for (int i = 0; i < length; i++)
    {
        array.emplace_back(i + 1);
    }

    for (int value : array)
    {
        std::cout << value << std::endl;
    }
    

    return 0;
}
