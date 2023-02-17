#include <iostream>
#include <set>

using namespace std;

// this is a day one file

int main()
{

    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(3);
     s.insert(1);

    //

    cout<<"sdad"<<endl;

    for (auto it : s)
    {

        cout << it << endl;
    }

    return 0;
}
