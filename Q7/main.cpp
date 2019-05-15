#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
#include<set>
#include<ctime>

void print(std::vector<int>);

int main(){
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    ////////////////// Part 1 ///////////////////
    int a[50]; 
    std::vector<int> cont;
    std::vector<int> temp(50);
    int i{1};
    std::for_each(a, a+50, [&cont,&i](const int& n){ cont.push_back(i++);});
    print(cont);
    ////////////////// Part 2 ///////////////////
    int b[50];
    std::for_each(b ,b+50, [](int& n){n = rand() % 50 + 1;}); // b = rand between 1 to 50
    std::copy(b, b+50, temp.begin()); //temp = b
    print(temp);
    ////////////////// Part 3 ///////////////////
    std::sort(temp.begin(), temp.end()); 
    auto last = std::unique(temp.begin(),temp.end());
    temp.erase(last, temp.end());
    print(temp);
    ////////////////// Part 4 ///////////////////
    int randArr[50];
    int result[50];
    i = 0;
    std::vector<int> temp1(50);
    std::vector<int> temp2(50);
    std::for_each(randArr, randArr + 50, [&i](int& n){n = i++;}); //randArr = suffle of 1 to 50
    std::random_shuffle(randArr, randArr + 50);
    std::copy(randArr, randArr+50, temp1.begin());
    print(temp1);
    ////////////////// Part 5 ///////////////////
    std::transform(randArr, randArr + 50, b, result,[](const int& n, const int& m){return m * m - n * n;});
    std::copy(result, result+50, temp2.begin());
    print(temp2);
    return 0;
}

void print(std::vector<int> temp1){
    for (std::vector<int>::iterator it{temp1.begin()}; it != temp1.end(); it++)
    {
       std::cout << *it << " ";
    }
    std::cout << std::endl;
}