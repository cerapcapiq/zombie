#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    string line;
    ifstream myfile("copy.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }
    return 0;
}
