#include<iostream>
#include<sstream>
#include"ArrayList.h"
using namespace std;

int main() {

	ArrayList<int>* v1 = new ArrayList<int>;
	v1->insertarAlFinal(8);
	v1->insertarAlFinal(5);
	v1->insertarAlFinal(7);
	v1->insertarAlFinal(2);
	system("pause");
	return 0;
}