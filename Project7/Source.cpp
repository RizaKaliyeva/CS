#include "Cs.h"

int main() {
	Circle_in_Square cs;
	ifstream in_file("in.txt");
	if (!in_file) {
		cerr << "file open errror" << endl;
	}
	else {
		while (!in_file.eof()) {
			in_file >> cs;
			cout << cs << endl;
		}
	}


	system("pause");
	return 0;
}