#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std ;
int main(){
	ofstream outfile("out.txt",ios::out);
	if (!outfile){
		cout << "open error!" << endl;
	}
	string name, sID, place_of_birth;
	int age;
	double weight, height;

	cout << "name:";
	cin >> name;
	outfile << "name:" << name << endl;

	cout << "age:";
	cin >> age;
	outfile << "age:" << age << endl;

	cout << "StudentID:";
	cin >> sID;
	outfile << "StudentID" << sID << endl;

	cout << "place of Birth:";
	cin >> place_of_birth;
	outfile << "place of Birth:" << place_of_birth << endl;

	cout << "weight:";
	cin >> weight;
	outfile << "weight:" << weight << endl;

	cout << "height:";
	cin >> height;
	outfile << "height" << height << endl;

	return 0;
}