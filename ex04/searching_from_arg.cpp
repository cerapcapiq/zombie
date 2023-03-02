#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int ac, char **argv)
{
    string searching;

    searching = argv[1];

    ifstream infile ("copy.txt");

    string x;

    bool ans=false;

    int line=1;

    if (infile.is_open())
    {
        while (getline(infile, x))
        {
            if (x.find(searching, 0) != string::npos)
            {
                cout << "found at line" << line << endl;
                ans=true;
            }
            line++;
        }
        infile.close();
    }
    else
    cout << "cant" << endl;

    if (!ans)
        cout << "nade" << endl;
}