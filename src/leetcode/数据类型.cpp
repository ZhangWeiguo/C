#include <iostream>
#include <limits>

using namespace std;
const int a1 = 18;
const int* a2 = &a1;
int* const a3 = new int(100);

// const int* ָ��ָ��Ķ��󲻿��Ըı䣬��ָ�뱾���ֵ���Ըı䣻
// int* const ָ�뱾���ֵ���ɸı䣬����ָ��Ķ�����Ըı䡣

int main() {
  int x0 = 100;
  long x1 = 12;
  unsigned int x2 = 14;
  double x3 = 15.4;
  cout << x3 << " " << x2 << endl;
  cout << a1 << endl;
  a2 = &x0;
  cout << sizeof(int) << endl;

  cout << "type: \t\t"
       << "************size**************" << endl;
  cout << "bool: \t\t"
       << "��ռ�ֽ�����" << sizeof(bool);
  cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
  cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
  cout << "char: \t\t"
       << "��ռ�ֽ�����" << sizeof(char);
  cout << "\t���ֵ��" << (numeric_limits<char>::max)();
  cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
  cout << "signed char: \t"
       << "��ռ�ֽ�����" << sizeof(signed char);
  cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
  cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
  cout << "unsigned char: \t"
       << "��ռ�ֽ�����" << sizeof(unsigned char);
  cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
  cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
  cout << "wchar_t: \t"
       << "��ռ�ֽ�����" << sizeof(wchar_t);
  cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
  cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
  cout << "short: \t\t"
       << "��ռ�ֽ�����" << sizeof(short);
  cout << "\t���ֵ��" << (numeric_limits<short>::max)();
  cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
  cout << "int: \t\t"
       << "��ռ�ֽ�����" << sizeof(int);
  cout << "\t���ֵ��" << (numeric_limits<int>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
  cout << "unsigned: \t"
       << "��ռ�ֽ�����" << sizeof(unsigned);
  cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
  cout << "long: \t\t"
       << "��ռ�ֽ�����" << sizeof(long);
  cout << "\t���ֵ��" << (numeric_limits<long>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
  cout << "unsigned long: \t"
       << "��ռ�ֽ�����" << sizeof(unsigned long);
  cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
  cout << "double: \t"
       << "��ռ�ֽ�����" << sizeof(double);
  cout << "\t���ֵ��" << (numeric_limits<double>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
  cout << "long double: \t"
       << "��ռ�ֽ�����" << sizeof(long double);
  cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
  cout << "float: \t\t"
       << "��ռ�ֽ�����" << sizeof(float);
  cout << "\t���ֵ��" << (numeric_limits<float>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
  cout << "size_t: \t"
       << "��ռ�ֽ�����" << sizeof(size_t);
  cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
  cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
  cout << "string: \t"
       << "��ռ�ֽ�����" << sizeof(string) << endl;
  cout << "\t���ֵ��" << (numeric_limits<string>::max)() << endl;
  cout << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;
  cout << "type: \t\t"
       << "************size**************" << endl;
  return 0;
}
