#include <iostream>
#include<Windows.h>

using namespace std;

__declspec(dllexport) int Ver()
{
	cout << "[info]����ն˰汾��NT3.1 - x " << endl; 
	return 0;
}
 
__declspec(dllexport) int cntnet()
{
	cout << "���Ѿ����ӵ�����Ժ��" << endl;
	return 0;
}

__declspec(dllexport) int help()
{
	cout << "[Msg]��ʾ�����б�:" << endl;
	cout << "  n ��������" << endl;//
	cout << "  p ping����" << endl;//
	cout << "  v ϵͳ��Ϣ" << endl;//
	cout << "  g ��ȡ֪ʶ" << endl;//
	cout << "  d ���֪ʶ" << endl;
	cout << "  u �������" << endl;
	cout << "  ����������" << endl;//
	cout << "  e �˳��ն�" << endl;//
	return 0;
}

__declspec(dllexport) int exit()
{
	cout << "[info]�˳�����ն���..." << endl;
	Sleep(1000);
	cout << "[info]�Ͽ���������..." << endl;
	cout << "[info]����Ȩ�ѽ���BIOS." << endl;
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
