#include <iostream>
#include <vector>
#include <algorithm>

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main() 
{
    std::vector<int> V = { 5, 2, 8, 2, 3, 5, 1, 8, 4 }; 

    std::sort(V.begin(), V.end());

    auto last = std::unique(V.begin(), V.end());
    V.erase(last, V.end());

    if (V.size() < 3) 
    {
        std::cout << "Вектор содержит менее 3 уникальных элементов." << std::endl;
        return 0;
    }

    V.erase(V.begin());
    V.pop_back();

    std::copy(V.rbegin(), V.rend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}