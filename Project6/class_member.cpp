#include<iostream>

class complex
{
public:
    double r, i;
};

int main()
{
    complex z, c;
    
    z.r = 3; z.i = 2;
    c.r = 2; c.i = 1;
    
    complex *p = &c;
    
    std::cout << (*p).r << std::endl;    
    std::cout << p->i << std::endl;
}