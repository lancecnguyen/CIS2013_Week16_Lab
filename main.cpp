#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile("example.txt");
	string line;
	
	if(myfile.is_open()){
		myfile << "This is a line of stuff" << endl;
		myfile << "This will appear on the same line" << endl;
		myfile << "This should not.";
		myfile.close();
	} else {
		cout << "Unable to open file example.txt";
	}
	
	ifstream myoutfile("example.txt");
	if (myoutfile.is_open()){
		
		while (getline(myoutfile,line)){
			cout << line << endl;
		}
		myoutfile.close();
	}else{
		cout << "Unable to open file example.txt";
	}
return 0;
}