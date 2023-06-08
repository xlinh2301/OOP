#include <iostream>
#include <string>
using namespace std;

class Person{
private:
	int age;
	string name;
public:
	Person() {
		name = "noname";
		age = 0;
	}
	friend iostream &operator >> (iostream & input, Person & p);
	friend ostream &operator << (ostream & output, Person & p);
};
iostream& operator >> (iostream& input, Person& p) {
	input >> p.name >> p.age;
	return input;
}
ostream& operator << (ostream& output, Person& p) {
	output << "My name is " << p.name << " and my age is " << p.age << endl;
	return output;
}
int main() {
	Person p;
	cin >> p;
	cout << p;
}