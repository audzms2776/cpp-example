#include <iostream>
using namespace std;

void v_add(vector<int>& v1, vector<int>& v2, vector<int>& v3)
{
    assert(v1.size() == v2.size());
    assert(v1.size() == v3.size());
    
    for(unsigned i=0; i<3; ++i)
        v3[i] = v1[i] + v2[i];
}

int main()
{
    // std::vector<float> v(3), w(2);
    
    vector<float> v = {1,2,3}, w={4,5,6};
    vector<float> z(3);    
    
    v_add(v, w, z);
}

// ?????  error: ‘vector’ is not a member of ‘std’