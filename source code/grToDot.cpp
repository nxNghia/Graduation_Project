#include <iostream>
#include <fstream>

using namespace std;

const string toDot = "toDot.dot";
const string source = "ex001.gr";

int main()
{
	ofstream file;
	ifstream file2;

	file.open(toDot);
	file2.open(source);
	string s1, s2;
	int i1, i2;

	file << "graph toDot {" << endl;

	file2 >> i1 >> i2;

	while (file2 >> i1 >> i2)
	{
		file << i1 << " -- " << i2 << endl;
	}

	file << "}" << endl;

	file.close();
	file2.close();
}