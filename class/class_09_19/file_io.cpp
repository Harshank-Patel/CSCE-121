#include <fstream>
#include <iostream>
#include <limits>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::numeric_limits;
using std::streamsize;
using std::string;

int main(int argc, char* argv[]) {
    
    if (argc < 3) {
        cout << "usage: " << argv[0] << " <file to read> <file to write>" << endl;
        return 1;
    }
    
    ifstream fin(argv[1]);
    if (!fin.is_open()) {
        cout << "could not open " << argv[1] << endl;
        return 1;
    }
    while (!fin.eof()) {
        string word;
        fin >> word;
        cout << word << endl;
        
        /*
        int n;
        fin >> n;
        while (!fin.eof() && !fin.good()) {
            fin.clear();
            fin.ignore();
            fin >> n;
        }
        cout << n << endl;
        */
    }
    
    ofstream fout(argv[2]);
    if (!fout.is_open()) {
        cout << "could not open " << argv[2] << endl;
        return 1;
    }
    while (!cin.eof()) {
        string word;
        cin >> word;
        fout << word << endl;
    }
    cout << "done reading from cin" << endl;
    
    return 0;
}
