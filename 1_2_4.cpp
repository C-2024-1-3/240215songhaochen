#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	unsigned int testUnint = 65534; //oxfffe
	cout << "output in unsigned int type: " << testUnint << endl; //<<oct
	cout << "output in octal type: " << oct << testUnint << endl;
	cout << "output in char type: " << dec << static_cast<char>(testUnint) << endl;
	//int为4个字节，char为1个字节，强制转换时，采取高位截断，char实际用二进制表示为1111 1110
	//在VS中char类型有符号，并以补码存储，所以实际为-2，在ASCII中无法找到对应的值，所以无法输出
	cout << "output in short type: " << static_cast<short>(testUnint) << endl;//为什么结果为-2?
	//回答：因为short类型为2个字节，testUnint为4个字节，强制转换时，采取高位截断
	//short实际用二进制表示为1111 1111 1111 1110，对其减一并取反，为0010，即为-2
	cout << "output in int type: " << static_cast<int>(testUnint) << endl; 
	//VS的智能转换，当超过32767时会转换为unsigned int形式
	cout << "output in double type: " << static_cast<double>(testUnint) << endl;
	cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type: 0x" << hex << testUnint << endl; //16进制输出
	system("pause");
	return 0;
}