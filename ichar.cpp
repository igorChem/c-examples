// ichar.cpp
// file input with characters 
#include <fstream> 
#include <iostream> 
using namespace std; 

int main()
{
	char ch;
	ifstream infile("test.txt");
	while( infile )
	{
		infile.get(ch);
		cout << ch;
	}
	cout << endl;
	return 0;	
}
