#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{

    string str;
    stack< char > s;
    char chTop;
    cin >> str;

    string::iterator it = str.begin();

    while (it != str.end()) {
        if (!s.empty()) {
        	chTop = s.top();
        	if (chTop == *it) {
        		s.pop();
        	} else {
        		s.push(*it);
        	}
    	} else {
        	s.push(*it);
    	}
        ++it;
    }

    if (s.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
