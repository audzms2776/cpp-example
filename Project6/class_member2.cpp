#include <iostream>

class pen
{
public:
    int get_a(){return a;}
    void set_a(int _a){a = _a;}
    int get_b(){return b;}
    void set_b(int _b){b = _b;}
private:
    int a, b;
};

int main()
{
    pen p1, p2;
    
    p1.set_a(10);
    p1.set_b(20);
    
    p2.set_a(p1.get_a());
    p2.set_b(p1.get_b());
    
    std::cout << p2.get_a() << std::endl;
    std::cout << p2.get_b() << std::endl;
}