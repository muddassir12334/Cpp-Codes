#include "filehandler.h"

int main() {
    const string filename = "sample.txt";

    writeFile(filename);
    readFile(filename);
    appendFile(filename);
    readFile(filename);

    return 0;
}
