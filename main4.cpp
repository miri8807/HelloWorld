#include <iostream>
#include "employeestruct.h" // ó�� ��� ���� �ۼ�

using namespace std;


// ------[enum ����, 65p]
enum PieceType1 {PieceTypeKing, PieceTypeQueen, PieceTypeRook, PieceTypePawn }; //�̿� ���� �� ������ ���� ������ 0, 1, 2, 3���� ������� ����
// {PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook, PieceTypePawn } �̸� 1, 2, 3, 4
// {PieceTypeKing = 1, PieceTypeQueen, PieceTypeRook = 10, PieceTypePawn } �̸� 1, 2, 10, 11


// ------[67p] <���� ǥ���ϴϱ� ���� �����������
enum class PieceType {
	King = 1,Queen, Rook = 10, Pawn
};
//enum class PieceType : unsigned long { ~ ó�� ǥ�� Ÿ�� �ٲپ� ������ ����


int main() {

	//----[���ϴ� 65p ������ ����]
	PieceType1 myPiece;
	myPiece = PieceTypeKing; //���� ���� ������

	/*
	PieceType1 myPiece2 = PieceTypeRook;
	int a = myPiece2; //�������
	PieceType1 myPiece3 = PieceTypeKing;
	int a = myPiece3; //��ư ���⼭ �� ���� �ȵȴٴ� �Ҹ��ΰŰ���
		"enum class�� Ÿ���� ������ �� ����"
	*/



	// ------[����, 68p]

	// ���� ���ڵ� ���� �� �� ä���
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	//���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;

	// ������ anEmployee1, anEmployee2 ó�� �缱���� ���� �� �ٷ� �����ٴ� ���ǰ� �ִٴ� ��...
}

/* ��� ���� = ������ ����
���� �������ִ� ��?

*/