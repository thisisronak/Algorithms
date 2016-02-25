#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

set < int > s; // allows no duplicates , non-linear container

int main()
{
    for(int i=0;i<100;i++) s.inert(i); //insert 100 elements
    s.insert(42); //inserts 42 if not already present
    s.erase(22); //erases 22
    int elements = s.size();//gives total no of elements
    
    /*traversing sets*/
    // Calculate the sum of elements in set
    set<int> myset;
    int r = 0;
    for(set<int>::const_iterator it = myset.begin(); it != myset.end(); it++) {
      r += *it;
    }

}