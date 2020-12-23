#include <map>
#include <string>
#include <iostream>

using namespace std;


int main() 
{
    int n;
    cin >> n;
    map<string, string> a;
    for (int i = 0; i < n; ++i) 
    {
        string s1, s2;
        cin >> s1 >> s2;
        a.emplace(s1, s2);
    }
    string word, wordFound;
    cin >> word;
    wordFound = a[word];
    if (wordFound.empty())
    {
        for (auto elem : a)
        {
            if (elem.second == word) 
                cout << elem.first;
        }
    } 
    else cout << wordFound;
}