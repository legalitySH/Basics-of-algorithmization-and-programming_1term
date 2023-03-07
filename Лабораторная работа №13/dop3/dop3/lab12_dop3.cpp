//7
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include <iterator>
#include <sstream>
using namespace std;
int main() {
     string s1;
     string s2;
     cout << "Input first sentence...\n";
    getline(cin, s1);
    cout << "Input second sentence...\n";
    getline(cin, s2);
    stringstream sss(s2);
    unordered_set<string>sal{ istream_iterator<string>(sss),istream_iterator<string>() };
    sss.str("");
    sss.clear();
    sss << s1;
    cout << "\nWord:";
    cout << *min_element(istream_iterator<string>(sss), istream_iterator<string>(), [&sal](const string& a, const string& b) {
        return a.length() < b.length() && sal.find(a) == sal.end();
        });
    return 0;
}