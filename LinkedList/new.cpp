    // C++ program to sort an array
    #include <algorithm>
    #include <iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        vector<int> v;
        for(int i=0;i<5;i++)
        {
            v.push_back(i);
        }
        cout<<v.at(4);
        v.erase(v.begin());
        cout<<v.at(0);
        v.emplace_back(12);
    }
