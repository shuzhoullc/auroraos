#include <iostream>
#include <time.h>
#include "choice.h"
#include <windows.h>
using namespace std;
int main(int argc, char** argv){
	cout <<"AuroraOS Windows Sub-System Console [Version 1.2.10041.1000]"<<endl;
	cout <<"(c) 2020 Shuzhou Foundation. All rights reserved."<<endl;
	string cdpath="/home";
	string comname="AuroraOS:";
	int insider=0;
	int chargemode=0;
	while (true){
		string choice;
		cout <<comname<<cdpath<<">";
		cin >> choice;
		when_choice "cd" end_choice{
			cin >> cdpath;
		}
		when "charge" end{
			cout <<"You are entering 'charge' mode, please type 'COMFIRM'(All in capital letters) to continue."<<endl;
			cin >> choice;
			if (choice == "COMFIRM"){
				cout <<"Successful. Registry /reg/chargemode.reg.aurora value=0x01"<<endl;
				chargemode=1;
			} 
			else {
				cout <<"Unsuccessful. Your confirm code is maybe wrong. The Registry Service has set /reg/chargemode.reg.aurora value=0x00"<<endl;
			}
		}
		when "clear" end{
			system ("cls");
		}
		when "title" end{
			string title;
			cin >> title;
			string space = " "; 
			string cmd = "title";
			string a = cmd.append(space);
			string b = a.append(title);
			const char* cmdc = b.c_str();
			system (cmdc);
		}
		when "shugit" end{
			string dir;
			cin >> dir;
			string dir2;
			cin >> dir2;
			string space = " "; 
			string cmd = "C:/ShuFiles/Git/bin/git clone";
			string a = cmd.append(space);
			string b = a.append(dir);
			string c = b.append(space);
			string d = c.append(dir2);
			const char* cmdc = d.c_str();
			system (cmdc);
		}
		when "license" end{
		cout <<"Shuzhou AuroraOS Console"<<endl;
		cout <<"Copyright (C) 2020 Shuzhou Foundation. All rights reserved."<<endl;
        cout <<"This program comes with ABSOLUTELY NO WARRANTY; for details type `showw'."<<endl;
    	cout <<"This is free software, and you are welcome to redistribute it,"<<endl;
    	cout <<"under certain conditions; type `showc' for details. (Please don't type any of showw or showc when you are using it in Windows Terminal or other terminal applications. It will cause returning of -1)."<<endl;
		}
		when "showw" end{
			MessageBox (NULL,"You should also get your employer (if you work as a programmer) or school, if any, to sign a 'copyright disclaimer' for the program, if necessary. For more information on this, and how to apply and follow the GNU GPL, see <https://www.gnu.org/licenses/>.","ShowW - GNU Public License",MB_OK|MB_ICONINFORMATION);
		}
		when "showc" end{
			MessageBox (NULL,"The GNU General Public License does not permit incorporating your program into proprietary programs.  If your program is a subroutine library, you may consider it more useful to permit linking proprietary applications with the library.  If this is what you want to do, use the GNU Lesser General Public License instead of this License.  But first, please read <https://www.gnu.org/licenses/why-not-lgpl.html>.","ShowC - GNU Public License",MB_OK|MB_ICONINFORMATION);
		}
	}
}
