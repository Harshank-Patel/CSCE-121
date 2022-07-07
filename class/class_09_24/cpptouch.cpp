#include <iostream>
#include <fstream>
using std::ofstream;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "usage: " << argv[0] << " <output file>" << endl;
        return 1;
    }
    ofstream fout(argv[1]);
    if (!fout.is_open()) {
        cout << argv[1] << " could not be opened." << endl;
        return 1;
    }
    fout << "// This program was written by a program." << endl;
    fout << endl;
    fout << "#include <iostream>" << endl;
    fout << endl;
    fout << "using std::cout;" << endl;
    fout << "using std::endl;" << endl;
    fout << endl;
    fout << "int main() {" << endl;
    fout << "    cout << \"hello, world!\" << endl;" << endl;
    fout << "    return 0;" << endl;
    fout << "}" << endl;
    
    return 0;
}