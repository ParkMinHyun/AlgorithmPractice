#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

class Queue {
public:
	stack<int> st1;
	stack<int> st2;

	void enqueue(int v) {
		st1.push(v);
	}

	int dequeue() {
		if (st2.empty()) {
			while (!st1.empty()) {
				st2.push(st1.top());
				st1.pop();
			}
		}
		return st2.top();
	}
};

int main(int argc, const char *argv[]) {
	Queue queue;
	string command;
	int count, value;
	cin >> count;
	for (int i = 0; i < count; ++i) {
		cin >> command;
		if (command == "ENQUEUE") {
			cin >> value;
			queue.enqueue(value);
		}
		else if (command == "DEQUEUE") {
			cout << queue.dequeue() << endl;
			queue.st2.pop();
		}
	}
}
