#include <iostream>
#include <vector>
#include <set>

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main() 
{
    std::vector<int> V = { 5, 2, 8, 2, 3, 5, 1, 8, 4 }; 

    std::set<int> unique_elements(V.begin(), V.end());
    if (unique_elements.size() < 3) 
    {
        std::cout << "Вектор содержит менее 3 уникальных элементов." << std::endl;
        return 0;
    }

    std::vector<int> unique_vec(unique_elements.begin(), unique_elements.end());

    unique_vec.erase(unique_vec.begin());
    unique_vec.pop_back();

    std::copy(unique_vec.rbegin(), unique_vec.rend(),std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}