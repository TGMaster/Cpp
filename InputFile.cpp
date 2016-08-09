// InputFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


struct data {
	string name;
	string ID;
	string answer;
};
typedef struct data dulieu;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, ID, i;
	ifstream input;
	

	string temp;
	// Khai bao struct
	dulieu danhsach[100];

	cout << "Input number of students: " << endl;
	cin >> a;

	for (i = 0; i < a; i++) // for each student
	{
		printf("Enter name student %i: ", i + 1);
		cin >> danhsach[i].name;
		input.open("input.txt"); // Open file inside for ... loop . Look throught the file to search
		while (!input.eof())
		{
			getline(input, temp);
			if (temp == danhsach[i].name) {
				getline(input, danhsach[i].ID);
				getline(input, danhsach[i].answer);
			}
		}
		cout << danhsach[i].ID << endl;
		cout << danhsach[i].answer << endl;
		input.close(); // close after search throught the input.txt
	}
	
	system("pause");

	return 0;
}

