#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
#include<set>

int main(){
    std::vector<int> vec{1,2,3,4,5,4,3,2,1};
    for (size_t i = 0; i < vec.size(); i++) 
        std::cout << " " << vec[i]; 
    std::cout << "\n"; 
    std::vector<int>::iterator last;
    last = std::remove(vec.begin(), vec.end(), 2);
    std::cout << "remove 2 : ";
    for(size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<std::endl;
    vec.erase(last,vec.end());
    std::cout<<std::endl;
    std::cout << "erase : ";
    for(size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<std::endl;

    auto double2 = [](int& n) { n *= 2; };
    std::for_each(vec.begin(), vec.end(), double2);
    std::cout << "vec * 2: ";
    for(size_t i = 0; i < vec.size(); i++)
        {
            std::cout<<vec[i]<<" ";
        }
    std::cout << std::endl;
    int sum = std::accumulate(vec.begin(),vec.end(), 0,std::plus<>());
    sum /= vec.size();
    //std::cout<<a;
    std::sort(vec.begin(), vec.end(), [sum](const int& a,const int& b){return std::abs(a-sum) < std::abs(b-sum);});
    for(size_t i = 0; i < vec.size(); i++)
        {
            std::cout<<vec[i]<<" ";
        }
    std::cout << std::endl;

    last = std::unique(vec.begin(), vec.end());
    vec.erase(last,vec.end());

    for(size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout << std::endl;

    std::set<int> Vecset;
    for(size_t i = 0; i < vec.size(); i++)
    {
        Vecset.insert(vec[i]);
    }
    //std::set<int>::iterator setIT;
    auto setIT = std::find_if(Vecset.begin(), Vecset.end(), [](int n){return n > 3;});
    Vecset.erase(setIT, Vecset.end());

    for(auto setIT:Vecset)
        {
            std::cout << setIT;
        }
    std::cout << std::endl;



    return 0;
}