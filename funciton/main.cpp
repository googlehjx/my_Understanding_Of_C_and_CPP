#include <iostream>
#include <string>
int add(int, int);

class Student {
private:
	std::string name;
	float score;
public:
	Student(std::string n, float s) :name(n), score(s) {}
	void show() {
		std::cout << "name: " << name << " " << "score: " << score << std::endl;
	}


};
int main(int argc, char* argv[]) {
	int x;
	int y;
	x = 1;
	y = 2;
	Student s("John", 99.0);
	s.show();
	return add(x, y);
}

int add(int a, int b) {
	return a + b;
}