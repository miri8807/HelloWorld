/* #include <iostream>

using namespace std;


// ------[constexpr 예문]
constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1; //n이 1보다 클 때 참이면 : 앞의 것 거짓이면 : 뒤의 것 (옆 수식은 n! 구하는 식, 5! = 5*4*3*2*1)
}

int main() {

	int x = 2999999999;
	cout << "x = " << x << endl; //실행 시 x가 -로 나옴 (int 최대 범위가 2,147,483,647이라 범위 종료 후 범위 첫 수로 돌아가서 나머지를 계산. 그래서 값이 이상하게 출력되는 것)
	//unsigned int x = 2999999999; 로 표기 시 정상적으로 출력
	
	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; // ++ = 1을 더함. =257
	someInteger *= 2; // 514
	someShort = static_cast<short>(someInteger); //514 (단순 변환임)
	someLong = someShort * 10000; //5140000
	someFloat = someLong + 0.785f; //5140000.785, Float은 7자리 숫자까지만 표기라는 듯? 그래서 소수점 아래가 여기서 없어졌을 것이라고
	someDouble = static_cast<double>(someFloat) / 100000; //51.40000785
	cout << someDouble << endl;


	int firstNumber = 0; //초기화
	cout << "firstNumber : " << endl;
	cin >> firstNumber;
	int secondNumber = 0; //초기화
	cout << "secondNumber : " << endl;
	cin >> secondNumber;
	cout << "sum = " << firstNumber + secondNumber << endl;


	//상수: 절대 변하지 않는 수, 정해지면 수정할 수 없음 (변수의 반대) (변수는 수식으로 사용될 때 변할 수 있어서 변수임??)
	const int a = 0; //const = 상수. 변하지 않는 값을 지정하므로 a=1같이 a 값을 바꾸려하면 오류남
	constexpr int b = 0; // constexpr = 컴파일할 때 미리 연산 후 넣어주는 값

	// ------[constexpr 예문]
	constexpr int c = fac(4); //이 경우 이미 계산되어 값이 입력된 후
	int d = fac(4); //이 경우 이 줄의 순서가 돌아올 때 계산됨

}
*/


