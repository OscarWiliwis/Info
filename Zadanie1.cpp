﻿#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int tab[2][2];
	int i;
	int j;

	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {
			cin >> tab[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < 2; j++) {

			cout << tab[i][j] << " ";

		}
		cout << endl;
	}


}