#include <iostream>
using namespace std;
int main(int argc, char** argv){
	cout << "Shuzhou AuroraOS Windows Sub-System Console [Version 1.2.10045.1000]"<<endl;
	cout << "(c) 2020 Shuzhou Foundation. All rights reserved."<<endl;
	while (true){
		cout <<"$ ";
		string command;
		cin >> command;
		const char* comm_and;
		comm_and = command.c_str();
		system (comm_and);
	}
} 
