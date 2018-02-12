#include <iostream>
#include <memory>

using namespace std;

shared_ptr<double> f()
{
    shared_ptr<double> p1{new double};
    shared_ptr<double> p2{new double};
    shared_ptr<double> p3 = p2;
    
    cout<<"p3 count : "<<p3.use_count() <<endl;
    
    return p3;
}

shared_ptr<double> f2()
{
    shared_ptr<double> p1 = make_shared<double>();
    shared_ptr<double> p2 = make_shared<double>();
    shared_ptr<double> p3 = p2;
    
    cout<<"p3 count : "<<p3.use_count() <<endl;
    
    return p3;
}

int main()
{
    shared_ptr<double> p = f2();
    
    cout<<"p count : "<<p.use_count() <<endl;
}