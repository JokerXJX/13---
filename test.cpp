#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�ı��ļ�   д�ļ�
#include<fstream>//ͷ�ļ�
//void test01()
//{
//	//����������
//	ofstream ofs;
//	//ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//	//д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	//�ر��ļ�
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�ı��ļ�  ���ļ�
#include<string>
//void test01()
//{
//	//����������
//	ifstream ifs;
//	//���ļ��ж��Ƿ�ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//������
//	//��һ��
//	/*char buf[1024] = { 0 };
//	while (ifs>>buf)
//	{
//		cout << buf << endl;
//	}*/
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//	//������
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//	//�ر��ļ�
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�������ļ�  д�ļ�
//class Person
//{
//public:
//
//	char m_Name[64];
//	int m_Age;
//};
//void test01()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//�������ļ�  ���ļ�
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}