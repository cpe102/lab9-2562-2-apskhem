#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    ofstream newFile;
    newFile.open("cheerbook_copy.txt");
    
    ifstream oldFile;
    oldFile.open("cheerbook");
    
    string textLine;
    newFile << "----------------- SOTUS -----------------\n";
    while (getline(oldFile, textLine)) {
        newFile << textLine;
    }
    newFile << "----------------- SOTUS -----------------\n";
    newFile.close();
    
    
	return 0;
}