#/*include <iostream>


using namespace std;

namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30; //전역변수 (모든 함수에서 접근 가능?)


int main(int argc, char* argv[]) {
	int n = 40; //지역변수 (메인함수 안에서만 접근 가능)

	std::cout << myNS1::n << std::endl;
	std::cout << myNS2::n << std::endl;
	std::cout << ::n << std::endl; //전역변수 표기?
	std::cout << n << std::endl;

// ------[62p]
	float myFloat = 3.14f;
	int i1 = (int)myFloat; //비추
	int i2 = int(myFloat); //비추
	int i3 = static_cast<int>(myFloat); //정확한 형변환 방법

	double d1 = 1200.; //더 큰 실수형 (뒤에 f 붙이면 플롯이 됨 아무것도 안붙이면 더블)
	double d2 = 1200.0;
	double d3 = 12e2;  //= 12 * (10^2) = 1200
	double d4 = 1.2e+3;  // =1.2 * (10^3). +를 써도 되고 안 써도 되고. e 다음 수는 0의 갯수를 지정한다는 소리라고 함. e=10, 즉슨 =1200
	// 1.2e-3하면 -3승으로 계산됨. +가 양수표시였구나...

	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl; //""는 띄어쓰기?

} */


// int main은 한 프로젝트 당 하나만 있어야 한다고 함
//cout은 출력명령어?

/* using namespace std;
main 지정 전에 (namespace myNS1 { int n = 10; } 있는 곳) 위 문구를 작성해두면
cout, endl 호출(?)시 std::를 작성하지 않아도 됨 = std::cout 을 cout으로 실행해도 된다는 것
접두어 생략이랭

*/



