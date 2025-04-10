#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


struct Point
{
    int x;
    int y;
    std::string s;

    /**
    * @brief ќператор сравнени¤ дл¤ отношени¤ пор¤дка
    */
    bool operator<(const Point& other) const;

    /**
    * @brief ќператор ввода дл¤ структуры Point
    */
    friend std::istream& operator>>(std::istream& is, Point& p);

    /**
    * @brief ќператор вывода дл¤ структуры Point
    */
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

/**
* @brief ќбрабатывает файл с точками: читает, сортирует и перезаписывает
* @param filename »м¤ файла дл¤ обработки
*/
void processFile(const std::string& filename);