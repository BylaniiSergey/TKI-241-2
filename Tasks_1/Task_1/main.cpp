#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>

int main() 
{

    std::ifstream File("name.txt");
    if (!File) 
    {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    std::istream_iterator<int> inIter(File);
    std::istream_iterator<int> endIter;

    std::ostream_iterator<int> outIter(std::cout, " ");

    std::vector<int> Numbers;

    int index = 0;
    std::remove_copy_if(inIter, endIter, std::back_inserter(Numbers),[&index](int) { return (index++) % 2 == 1; });

    std::copy(Numbers.begin(), Numbers.end(), outIter);

    return 0;
}