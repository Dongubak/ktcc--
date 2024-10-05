#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;
int main() {
    char filename[SIZE];
	
	ifstream inFile; 
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open()){ 
	cout << "Could not open the file " << filename << endl;
	cout << "Program terminating.\n";
	exit(EXIT_FAILURE);
	}

    char ch;
	int count = 0;

    while (inFile.get(ch)) { 
        count++;
    }

    inFile.close(); 
    cout << "Total number of characters: " << count << endl;

    return 0;
}
