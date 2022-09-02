#include <iostream>
#include<Windows.h>

using namespace std;

__declspec(dllexport) int Ver()
{
	cout << "[info]虚空终端版本：NT3.1 - x " << endl; 
	return 0;
}
 
__declspec(dllexport) int cntnet()
{
	cout << "你已经连接到教令院！" << endl;
	return 0;
}

__declspec(dllexport) int help()
{
	cout << "[Msg]显示帮助列表:" << endl;
	cout << "  n 连接网络" << endl;//
	cout << "  p ping测试" << endl;//
	cout << "  v 系统信息" << endl;//
	cout << "  g 获取知识" << endl;//
	cout << "  d 检查知识" << endl;
	cout << "  u 软件更新" << endl;
	cout << "  ？帮助主题" << endl;//
	cout << "  e 退出终端" << endl;//
	return 0;
}

__declspec(dllexport) int exit()
{
	cout << "[info]退出虚空终端中..." << endl;
	Sleep(1000);
	cout << "[info]断开网络连接..." << endl;
	cout << "[info]控制权已交还BIOS." << endl;
	system("pause");
	return 0;
}

__declspec(dllexport) int ping()
{
	system("ping www.microsoft.com");
	system("ping www.bilibili.com");
	system("ping www.google.com");
	system("pause");
	system("cls");
	return 0;
}
