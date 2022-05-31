#include <iostream>
#include "employeestruct.h" // 처럼 헤더 파일 작성

using namespace std;


// ------[enum 예문, 65p]
enum PieceType1 {PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn }; //이와 같이 값 지정이 따로 없으면 0, 1, 2, 3으로 순서대로 대입
// {PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook, PieceTypePawn } 이면 1, 2, 3, 4
// {PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePawn } 이면 1, 2, 10, 11


// ------[67p] <일케 표기하니까 뭔가 영어교과서같다
enum class PieceType {
	King = 1,Queen, Rook = 10, Pawn
};
//enum class PieceType : unsigned long { ~ 처럼 표현 타입 바꾸어 지정도 가능


int main() {

	//----[이하는 65p 예문과 연결]
	PieceType1 myPiece;
	myPiece = PieceTypeKing; //정수 쓰면 오류남

	/*
	PieceType1 myPiece2 = PieceTypeRook;
	int a = myPiece2; //경고뜬다함
	PieceType1 myPiece3 = PieceTypeKing;
	int a = myPiece3; //암튼 여기서 값 지정 안된다는 소리인거같음
		"enum class는 타입을 변경할 수 없다"
	*/



	// ------[예문, 68p]

	// 직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	//직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;

	// 번번히 anEmployee1, anEmployee2 처럼 재선언할 것을 한 줄로 끝낸다는 의의가 있다는 듯...
}

/* 헤더 파일 = 목차의 역할
먼저 선언해주는 등?

*/