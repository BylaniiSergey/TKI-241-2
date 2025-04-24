#include "point.h"

bool Point::operator<(const Point& other) const
{
    return (x < other.x) || (x == other.x && y < other.y);
}

std::istream& operator>>(std::istream& is, Point& p)
{
    is >> p.x >> p.y >> p.s;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    os << p.x << " " << p.y << " " << p.s;
    return os;
}

void processFile(const std::string& filename)
{
    std::ifstream inFile(filename);
    if (!inFile)
    {
        std::cerr << "Cannot open file: " << filename << std::endl;
        return;
    }

    std::vector<Point> points;
    std::copy(std::istream_iterator<Point>(inFile), std::istream_iterator<Point>(), std::back_inserter(points));
    inFile.close();

    std::stable_sort(points.begin(), points.end());

    std::ofstream outFile(filename);
    if (!outFile)
    {
        std::cerr << "Cannot open file for writing: " << filename << std::endl;
        return;
    }

    std::copy(points.begin(), points.end(), std::ostream_iterator<Point>(outFile, "\n"));
}