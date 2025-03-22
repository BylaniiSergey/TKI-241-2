#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <locale>

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main() 
{
    setlocale(LC_ALL, "RU");
    std::ifstream File("C:/Програмирование.коды/II курс 2 семестр/Tasks_1/name.txt");
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