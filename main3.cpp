/* #include <iostream>

using namespace std;


// ------[constexpr ����]
constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1; //n�� 1���� Ŭ �� ���̸� : ���� �� �����̸� : ���� �� (�� ������ n! ���ϴ� ��, 5! = 5*4*3*2*1)
}

int main() {

	int x = 2999999999;
	cout << "x = " << x << endl; //���� �� x�� -�� ���� (int �ִ� ������ 2,147,483,647�̶� ���� ���� �� ���� ù ���� ���ư��� �������� ���. �׷��� ���� �̻��ϰ� ��µǴ� ��)
	//unsigned int x = 2999999999; �� ǥ�� �� ���������� ���
	
	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; // ++ = 1�� ����. =257
	someInteger *= 2; // 514
	someShort = static_cast<short>(someInteger); //514 (�ܼ� ��ȯ��)
	someLong = someShort * 10000; //5140000
	someFloat = someLong + 0.785f; //5140000.785, Float�� 7�ڸ� ���ڱ����� ǥ���� ��? �׷��� �Ҽ��� �Ʒ��� ���⼭ �������� ���̶��
	someDouble = static_cast<double>(someFloat) / 100000; //51.40000785
	cout << someDouble << endl;


	int firstNumber = 0; //�ʱ�ȭ
	cout << "firstNumber : " << endl;
	cin >> firstNumber;
	int secondNumber = 0; //�ʱ�ȭ
	cout << "secondNumber : " << endl;
	cin >> secondNumber;
	cout << "sum = " << firstNumber + secondNumber << endl;


	//���: ���� ������ �ʴ� ��, �������� ������ �� ���� (������ �ݴ�) (������ �������� ���� �� ���� �� �־ ������??)
	const int a = 0; //const = ���. ������ �ʴ� ���� �����ϹǷ� a=1���� a ���� �ٲٷ��ϸ� ������
	constexpr int b = 0; // constexpr = �������� �� �̸� ���� �� �־��ִ� ��

	// ------[constexpr ����]
	constexpr int c = fac(4); //�� ��� �̹� ���Ǿ� ���� �Էµ� ��
	int d = fac(4); //�� ��� �� ���� ������ ���ƿ� �� ����

}
*/


