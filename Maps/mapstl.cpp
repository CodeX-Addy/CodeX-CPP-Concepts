#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    // creation
    unordered_map<string, int> mapping;

    /// insertion
    pair<string, int> p = make_pair("Aditya", 21);

    pair<string, int> q("dipansh", 24);

    pair<string, int> r;
    q.first = "arun";
    q.second = 21;
    // insertion
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);
    // insert
    mapping["aditya"] = 51;

    cout << "Size of map: " << mapping.size() << endl;
    // ACCESS
    cout << mapping.at("Aditya") << endl;
    cout << mapping["Aditya"] << endl;

    // searching
    cout << mapping.count("lover") << endl;
    cout << "Size of map: " << mapping.size() << endl;

    if (mapping.find("aditya") != mapping.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    cout << "Size of map: " << mapping.size() << endl;
    cout << mapping["kumar"] << endl;
    cout << "Size of map: " << mapping.size() << endl;
    return 0;
}
