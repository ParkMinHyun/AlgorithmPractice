#include <iostream>
#include <time.h>
using namespace std;

int main() {
	clock_t before;
	double result;
	before = clock();

	cout << "Hellow world" << endl;

	result = (double)(clock() - before) / CLOCKS_PER_SEC;

	printf("걸린시간은 %5.2f 입니다.n", result);
	return 0;


}