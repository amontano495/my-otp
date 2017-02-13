#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main( int argc , char *argv[] )
{
	ifstream inputFile;
	ifstream keyFile;
	ofstream outputFile ("deciphered");
	char ch;
	int count = 0;
	int shiftAmt = 100;
	int shift;
	char c;
	
	keyFile.open(argv[1]);
	inputFile.open(argv[2]);

	while( inputFile >> ch )
	{
		keyFile >> shift;
		cout << shift << endl;
		outputFile << (char)(ch - shift);
	}

	outputFile.close();
	keyFile.close();
	inputFile.close();
}
