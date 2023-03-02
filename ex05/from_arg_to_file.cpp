#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

//copy arg to file 

int main(int ac, char **av)
{
   // size_t len = av[1].length();
    string character[1] = {av[1]};
    int arraySize = *(&character + 1) - character;

    //open file to be written
    ofstream fw("copy.txt", std::ofstream::out);

    if (fw.is_open())
    {
        for (int i = 0; i < arraySize; i++)
        {
            fw << character[i] << endl;
        }
        fw.close();
    }
}
