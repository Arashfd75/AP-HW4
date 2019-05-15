#include <iostream>
#include <memory>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

template <typename T>
void print(const std::vector<T>& vec){
    std::cout << "size = " << std::setw(4) << vec.size() << "   ";
    std::cout << "capacity = " << vec.capacity() << std::endl;

}

int main()
{
    const size_t Number{1000};
    std::vector<std::unique_ptr<std::string>> unique_vec(Number);
    for(size_t i{}; i < Number; i++)
    {
        std::stringstream ss;
        ss << "str" << std::setw(3) << std::setfill('0') << std::to_string(i);
        unique_vec[i] = std::make_unique<std::string>(ss.str());
        std::cout << *(unique_vec[i]) << "   ";
        print(unique_vec);
    }

    std::vector<std::unique_ptr<std::string>> unique_vec2{};
    unique_vec2.reserve(Number);

    for(size_t i{}; i < Number; i++)
    {
        std::stringstream ss;
        ss << "str" << std::setw(3) << std::setfill('0') << std::to_string(i);
        unique_vec2.push_back(std::make_unique<std::string>(ss.str()));
        std::cout << *(unique_vec2[i]) << "   ";
        print(unique_vec2);
    }

    return 0;
}