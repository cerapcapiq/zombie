#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    fstream fin(argv[1]);
    string wordToReplace(argv[2]);
    string wordToReplaceWith(argv[3]);

    fin.open(argv[1], ios::in);

/*
    if (!fin)
    {
        cerr << "Could not open " << argv[1] << "\n";
        return 1;
    }


    string line;
    size_t len = wordToReplace.length();
    while (getline(fin, line))
    {
        while (true)
        {
            size_t pos = line.find(wordToReplace);
            if (pos != string::npos)
                line.replace(pos, len, wordToReplaceWith);
            else 
                break;
        }

        fin << line << '\n';
    }


*/

    while(fin)
    {
        getline(fin, wordToReplace);
        cout << wordToReplace << endl;
    }
    fin.close();
    fin.open(argv[1], ios::in);
    wordToReplaceWith="";
    if (!fin)
    {
        cerr << "Could not open " << argv[1] << "\n";
        return 1;
    }
    while (fin)
    {
        getline(fin, wordToReplace);
        int a =(int) wordToReplace.find(argv[2], 0);
        while (a != string::npos)
        {
            wordToReplace.replace(a, strlen(argv[2]), argv[3]);
            a= (int) wordToReplace.find(argv[2], (a + 1));
        }
        wordToReplaceWith= wordToReplaceWith+wordToReplace+ "\n";
    }
    fin.close();
    fin.open(argv[1], ios::out);
    fin<<wordToReplaceWith;
    fin.close();
    fin.open(argv[1], ios::in);
     if (!fin)
    {
        cerr << "Could not open " << argv[1] << "\n";
        return 1;
    }
    while (fin)
    {
        getline(fin, wordToReplace);
        cout << wordToReplace << endl;
    }
    fin.close();
    return 0;

}