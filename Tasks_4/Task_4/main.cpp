#include "point.h"

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main()
{
    setlocale(LC_ALL, "RU");
    std::string filename = "C:/Програмирование.коды/II курс 2 семестр/Tasks_4/name.txt";
    processFile(filename);
    return 0;
}