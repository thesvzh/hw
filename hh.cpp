#include <iostream>
#include <vector>
#include <set>

int main()
{
    std::vector<double> v = { 1, 2, 2, 1, 4, 5, 3, 1 };

    std::cout << "Number of unique elements is "
              << std::set<double>( v.begin(), v.end() ).size()
              << std::endl;

    return 0;
}
