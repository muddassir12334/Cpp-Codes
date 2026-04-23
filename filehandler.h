#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not open file for writing.\n";
        return;
    }
    outFile << "Hello, File Handling!\n";
    outFile << "This is line 2.\n";
    outFile << "This is line 3.\n";
    outFile.close();
    cout << "Data written to " << filename << "\n";
}

void readFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Could not open file for reading.\n";
        return;
    }
    string line;
    cout << "\nReading from " << filename << ":\n";
    while (getline(inFile, line)) {
        cout << line << "\n";
    }
    inFile.close();
}

void appendFile(const string& filename) {
    ofstream outFile(filename, ios::app);
    if (!outFile) {
        cerr << "Error: Could not open file for appending.\n";
        return;
    }
    outFile << "This line was appended.\n";
    outFile.close();
    cout << "\nData appended to " << filename << "\n";
}
