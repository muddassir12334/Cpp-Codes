#include "filehandler.h"

int main() {
    const string filename = "sample.txt";

    writeFile(filename);
    readFile(filename);
    appendFile(filename);
    readFile(filename);
    cout<<"Hello Testing for Muddassir";

    return 0;
}
