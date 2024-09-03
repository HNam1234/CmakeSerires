#include<iostream>

template <typename T>
T add(T a, T b)
{
    return a+b;
}
int main()
{
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<"The sum is "<< add(8,6) <<std::endl;
    return 0;
}