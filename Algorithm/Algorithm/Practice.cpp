#include <iostream>
#include <time.h>
using namespace std;

int main() {
	clock_t before;
	double result;
	before = clock();

	cout << "Hellow world" << endl;

	result = (double)(clock() - before) / CLOCKS_PER_SEC;

	printf("�ɸ��ð��� %5.2f �Դϴ�.n", result);
	return 0;


}