#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//文本文件   写文件
#include<fstream>//头文件
//void test01()
//{
//	//创建流对象
//	ofstream ofs;
//	//指定打开方式
//	ofs.open("test.txt", ios::out);
//	//写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	//关闭文件
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//文本文件  读文件
#include<string>
//void test01()
//{
//	//创建流对象
//	ifstream ifs;
//	//打开文件判断是否成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//读数据
//	//第一种
//	/*char buf[1024] = { 0 };
//	while (ifs>>buf)
//	{
//		cout << buf << endl;
//	}*/
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//	//第三种
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//	//关闭文件
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//二进制文件  写文件
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
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//二进制文件  读文件
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
		cout << "文件打开失败" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}