// File Header - Start
#include <iostream>
#include <fstream>
using namespace std;
// File Header - End

// Runtime Variables - Start
string file_name;
bool app_running = true;
bool editing = false;
string line_entry;
int line_number = 0;
// Runtime Variables - End

int main() {
	
	while(app_running == true) {
		
		line_entry = 0;
		cout << "file name: ";
		getline(cin, file_name);
		ofstream myfile(file_name.c_str());
		cout << endl;
		editing = true;
		while(editing == true) {
			
			line_number += 1;
			cout << line_number << " : ";
			getline(cin, line_entry);
			if(line_entry == "**exit**") {
				
				editing = false;
				myfile.close();
				
			} else {
				
				myfile << line_entry << "\n";
				
			}
			
		}
		
	}
	
}