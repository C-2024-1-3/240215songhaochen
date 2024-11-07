#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	unsigned int testUnint = 65534; //oxfffe
	cout << "output in unsigned int type: " << testUnint << endl; //<<oct
	cout << "output in octal type: " << oct << testUnint << endl;
	cout << "output in char type: " << dec << static_cast<char>(testUnint) << endl;
	//intΪ4���ֽڣ�charΪ1���ֽڣ�ǿ��ת��ʱ����ȡ��λ�ضϣ�charʵ���ö����Ʊ�ʾΪ1111 1110
	//��VS��char�����з��ţ����Բ���洢������ʵ��Ϊ-2����ASCII���޷��ҵ���Ӧ��ֵ�������޷����
	cout << "output in short type: " << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?
	//�ش���Ϊshort����Ϊ2���ֽڣ�testUnintΪ4���ֽڣ�ǿ��ת��ʱ����ȡ��λ�ض�
	//shortʵ���ö����Ʊ�ʾΪ1111 1111 1111 1110�������һ��ȡ����Ϊ0010����Ϊ-2
	cout << "output in int type: " << static_cast<int>(testUnint) << endl; 
	//VS������ת����������32767ʱ��ת��Ϊunsigned int��ʽ
	cout << "output in double type: " << static_cast<double>(testUnint) << endl;
	cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type: 0x" << hex << testUnint << endl; //16�������
	system("pause");
	return 0;
}