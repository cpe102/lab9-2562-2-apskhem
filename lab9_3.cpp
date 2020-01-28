#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    
    ifstream file;
    file.open("cheerbook");
    
    string textLine;
    float mean = 0, xall = 0;
    n++;
    while (getline(file, textLine)) {
        mean += atof(textLine.c_str());
        xall += pow(atof(textLine.c_str()), 2);
        n++;
    }

    float sd = sqrt((xall/n)-pow(mean, 2));

    cout << "Number of data = " << n << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
    
	return 0;
}


