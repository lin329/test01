#include<iostream>
using namespace std;


//template<typename T>
//void myswap(T& a, T& b)
//{
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void mysort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[j] < arr[max])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			myswap(arr[i], arr[max]);
//		}
//		
//	}
//}
//
//template<class T>
//void pringtarr(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test01()
//{
//	char arr[] = "acdbpj";
//	int len = sizeof(arr) / sizeof(char);
//	mysort(arr, len);
//	pringtarr(arr,len);
//}
//
//void test02()
//{
//	int arr[] = { 1,5,6,1,0,3,4,99 };
//	int len = sizeof(arr) / sizeof(int);
//	mysort(arr, len);
//	pringtarr(arr, len);
//}


//void func(int a,int b)
//{
//	cout << 1111 << endl;
//}
//
//template<class T>
//void func(T a, T b)
//{
//	cout << 22222 << endl;
//}
//
//void test01()
//{
//	int a = 2;
//	int b = 3;
//	func<>(a, b);
//}

//class person
//{
//public:
//	int age;
//	string name;
//	person(int a, string b)
//	{
//		age = a;
//		name = b;
//	}
//};
//
//template<class T>
//bool comp(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//template<> bool comp(person &p1,person &p2)
//{
//	if (p1.age == p2.age && p1.name == p2.name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

template<class A,class B=int>
class person
{
public:
	A name;
	B age;

	person(A  n, B a)
	{
		name = n;
		age = a;
	}

	void show()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

void test01()
{
	person<string>p1("lin", 18);
	p1.show();
}

int main()
{
	test01();
	system("pause");

	return 0;
}