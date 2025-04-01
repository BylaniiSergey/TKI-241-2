#include <iostream>
#include <deque>
#include <locale>

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main() 
{
    std::deque<int> D = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    size_t N = D.size();

    size_t middle_start = (N - 5) / 2;

    D.insert(D.begin(), D.begin() + middle_start, D.begin() + middle_start + 5);

    for (const auto& elem : D) 
    {
        std::cout << elem << " ";
    }

    return 0;
}