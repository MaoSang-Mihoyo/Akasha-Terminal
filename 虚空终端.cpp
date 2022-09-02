#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

extern int cntnet();
extern int help();
extern int Ver();
extern int ping();
extern int exit();

int main() 
{
	cout << "[info]初始化虚空终端中";
	for (int i = 0; i <= 5;) {
		Sleep(1000);
		cout << '.';
		i++;
	}
	cout << endl;
	cout << "---   ---        __    ___  ______                       __               __ " << endl;
	cout << "\\  \\ /  /  ---   ||   _| /  \\    / ____  _____   _____   ||  ___  ____    ||  "  << endl;
	cout << " \\  Y  /  / _ \\  ~~  / _ |   ~||~ / __ \\ \\_ _ \\ /     \\  ~~ /   \\ \\_  \\   ||  " << endl;
	cout << "  \\   /  | < > | || / /| |    ||  \\ ___/  | |\\/ | Y Y  \\ || | |  \\  /_ \\_ ||__  " << endl;
	cout << "   \\ /   \\  - /  || \\ ~  |    ||   \\    > | |   | | |  / || | |  / (___ / |   /   " << endl;
	cout << "    ~      ~~~   ~~  ~~~V     ~~    ~~~V  ~~~   ~~~~~~V  ~~ ~~~~V      V  ~~~~  " << endl; \
	cout << "[info]虚空终端初始化完毕" << endl;
	Label1:
	char a;
	cin >> a;
	switch (a) 
	{
		case('?'):
			{
			;	help();
				break;
			}
		case('n'):
			{
				cntnet();
				break;
			}
		case('v'):
			{
				Ver();
				break;
			}
		case('g'):
			{
				cout << "教令院拒绝了你的知识请求.请联系系统管理员." << endl;
				break;
			}
		case('d'):
			{
				
				break;
			}
		case('u'):
			{
				cout << "你和你的系统是最新的！" << endl;
				break;
			}
		case('p'):
			{
				ping();
				break;
			}
		case('e'):
			{
				exit();
				return 0;
				break;
			}
		default:
			break;
	
	}
	goto Label1;
}
