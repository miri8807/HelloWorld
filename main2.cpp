#/*include <iostream>


using namespace std;

namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30; //�������� (��� �Լ����� ���� ����?)


int main(int argc, char* argv[]) {
	int n = 40; //�������� (�����Լ� �ȿ����� ���� ����)

	std::cout << myNS1::n << std::endl;
	std::cout << myNS2::n << std::endl;
	std::cout << ::n << std::endl; //�������� ǥ��?
	std::cout << n << std::endl;

// ------[62p]
	float myFloat = 3.14f;
	int i1 = (int)myFloat; //����
	int i2 = int(myFloat); //����
	int i3 = static_cast<int>(myFloat); //��Ȯ�� ����ȯ ���

	double d1 = 1200.; //�� ū �Ǽ��� (�ڿ� f ���̸� �÷��� �� �ƹ��͵� �Ⱥ��̸� ����)
	double d2 = 1200.0;
	double d3 = 12e2;  //= 12 * (10^2) = 1200
	double d4 = 1.2e+3;  // =1.2 * (10^3). +�� �ᵵ �ǰ� �� �ᵵ �ǰ�. e ���� ���� 0�� ������ �����Ѵٴ� �Ҹ���� ��. e=10, �ｼ =1200
	// 1.2e-3�ϸ� -3������ ����. +�� ���ǥ�ÿ�����...

	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl; //""�� ����?

} */


// int main�� �� ������Ʈ �� �ϳ��� �־�� �Ѵٰ� ��
//cout�� ��¸�ɾ�?

/* using namespace std;
main ���� ���� (namespace myNS1 { int n = 10; } �ִ� ��) �� ������ �ۼ��صθ�
cout, endl ȣ��(?)�� std::�� �ۼ����� �ʾƵ� �� = std::cout �� cout���� �����ص� �ȴٴ� ��
���ξ� �����̷�

*/



