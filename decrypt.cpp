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
	int shiftAmt = 128;
	int shift;
	char c;
	
	keyFile.open(argv[1]);
	inputFile.open(argv[2]);

	while( inputFile >> ch )
	{
		keyFile >> shift;
		outputFile << (char)(ch - (shift % shiftAmt));
	}

	outputFile.close();
	keyFile.close();
	inputFile.close();
}
