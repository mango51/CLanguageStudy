#include <stdio.h>

/* ----- ������ ���� -----
	���� ����: ���� ���ο��� ����� ����, ���� ���ο����� ��ȿ�ϰ� ���� ������ ����
	���� ����: �Լ� �ܺο��� ����� ����, ���α׷� ����� ����
	���� ����: ���� ������ ���� ������ Ư�� ��� ���� ����
*/

/* ----- ������ ���� ���� ------
	���� ����: ���� ���ο� ���ο� �������� ���� �̸��� ������ ����Ǹ� �ܺο� �ִ� �������� ���ο� �ִ� ������ �� ���� �켱���� ���Ե�
	==> ���� �̸��� ������ {} ��ȣ �ȿ� �ϳ�, �ۿ� �ϳ� ������... ��ȣ �ȿ� �ִ� �ڵ�� ��ȣ �ȿ� �ִ� ������ ��� >> �ش� ������ �ٱ� �������� �켱������ �� ����
	
	���� ����: ������ �ʱ�ȭ�� �������� ������ 0���� �ʱ�ȭ�� <---> ���� ������ �ʱ�ȭ ���� ���ϸ� �����Ⱚ ���� ����
	
	���������� ���� ������ �̸��� ���ٸ� '�ش� ������ ����� ���� ����'�� �� ���� �켱������ ���Ե�

	���� ����: ���� ������ ���� ������ Ư���� ��� ������ �ִ�.
		���� ������ Ư���� ���α׷� ����� ���� �����ȴٴ� Ư�� ���� ����
		���� ������ Ư���� ���� ���ο����� ��ȿ�ϴٴ� Ư�� ���� ����
		���� ������ ����Ͽ� 

	���� ���� ���� ���: static �ڷ��� ������;
*/
/* ----- ����ü -----
	���� ���� ���(����)���� ��Ƽ� �ϳ��� '���ο� �ڷ���'�� ����� ���
	�ϳ��� ���ο� �ڷ��� ������ִ� ���
	����ü ������ ����� ������ ���� ����ü����.��� �������� ������
		ex) struct Data d;
			d.data1=10;
	����ü ũ��� ����ü ������� ��� ���� ũ���̴�. (�ڷ��� ũ�� ���� ��)
	�⺻ ����ü ����:

	struct ����ü�̸�{
		���;
	};

*/

// �⺻ ����ü ����
struct Data { // �ϳ��� ����ü
	int data1;
	int data2;
}; // 8����Ʈ ũ�� ���� �ִ� ����ü Data(int�� ���� 2�� >> 4(int)+4(int) = 8 ����Ʈ)


// ��Ī�� �̿��� ����ü ����
// ��Ī�� �̿��� ������ ���� ����ü �̸�, ��Ī ��� ��� ����
typedef struct Data2 {	//typedef ��Ī�� ����ϰڴٴ� �ǹ�
	int data1;
	int data2;
}Da;	//typedef�� ���� ��Ī Da �ٿ���

// �͸� ����ü ����
// �͸� ����ü�� ����ϸ� ����ü �̸����� ���� ���� X, ��Ī�� ��� ����
typedef struct { // �̸� ����(����X) >> ��Ī�� ���� 
	int data1;
	int data2;
}Da1 ;

struct Data3 {
	int korean;
	int mathematics;
	int english;
	int total3;
	double avg3;
	char grade3;
};

int num; // �������� num ����
/* void Func() {
	//printf("num�� ��: %d\n", num);
	int n1 = 3;
	static int n2 = 3; // �������� n2 �ٽ� Func() �Լ� �ҷ��� �� �ʱ�ȭ���� X (������ ���� �ִ� ���� �����ϱ�)
	printf("%d %d\n", n1, n2);
	n1++; // �������� n1�� ����{}�� �����鼭 ���� (�����) >> n1 = 4������ {} �����鼭 �ٽ� ���µ� (n1=3)
	n2++; // �������� n2�� '���α׷� ������ ����' (�����) >> {}������ �������� ���� �� >> ���α׷� ���� ������!!! >> ***���������� Ư���� ���� ��������
		// n2 = 4������ ���α׷� ���� ������ �ʾ����� �� �ٽ� Func()�Լ� �ҷ����� n2 = 4�� ����ϰ� n2++�� ���� n2 = 5�� ��
} */
int Func(int a) {
	a++;
	return a; // �̰� ���� num������ �ٽ� ���� �� ��Ű�� �����Լ����� ��½� 4�� ����
}

void Func1(int* num) { // int* num = �ּҰ� >> �ּҰ� �ִ� ����
	// �������� num
	(*num)++; // �Ű����� num �ּҰ� ���� *num �� ++ �Ͽ� num ������ ���� ++ �ϱ�
	// ���� �Լ����� Func1(&num1);�� ��... &num1 (num1�� �ּҰ�) �����ͼ� �ش� �ּҿ��ٰ� ++ �ϱ�
	// ==> num1�̶�� ������ �����ؼ� ���� >> ������ ���̴� �ٸ� �������� �����ؼ� �����Ͽ� ���� �����ٰ� �����߾���
}
// void FuncAdd(int* num, int* num1, int* num2, int* num3) {	// ���� �ּҸ� �Ѱ��� �ʿ䰡 ��� ������� �ʾƵ� ��
// num, num1, num2�� ��븸�ϰ� �������� �����״� ���� �ּҰ�(&) ����� �ʿ� ����, num3�� ���� �����ؼ� ������ �ʿ� �����ϱ� �ּҰ� �ʿ���
void FuncAdd(int num, int num1, int num2, int* num3){
	// int* num = &kor; >> kor�� ����Ű�� ������ num, kor�� �ּҸ� ���� �ִ� num
	// �������� *num, *num1, *num2, *num3 >> *num = kor�ϱ� int kor�� ���� �ǹ�
	// *num3 = *num + *num1 + *num2; // *num�� ������ num���� num�� ����Ű�� ���� �ǹ��� >> num�� ����Ű�� �ִ� ȭ��ǥ�� ������ kor�� ���� >> *num = kor
	// num�� �ּҰ��� ���� ���� �����Ͽ� num�� �����ϴ� ���� ���� �� ���� >> �Է��� ���� ���� �� = *num�� �����ϸ� �ִ� num��

	*num3 = num + num1 + num2;
}
// void FuncSub(int* num, double* num1) { // double* num1 = &avg �̹Ƿ� ������ num1�� avg�� ����Ű�� ���� 
void FuncSub(int num, double* num1){
	// ***** num1�� avg�� ����Ű�� �ִ� �������̰� *num�� ����Ű�� �ִ� ���� ȭ��ǥ�� ���󰡼� ������ �� = avg �� >> *num1 = avg (num3�� ����Ű�� ��)
	// *num1 = *num / 3.0; // 3.0�� double���̴ϱ� *num�� int���̶� double���� ������ ������� double��
	// �Ű����� double* num1�� �ƴ� double num1�̸� ���� �����Լ����� �޾��� �� {} ������ �ٽ� �������� ���� >> ���� �ٸ� �����̱� ������
	// ������ double* num1�̸� �����Լ����� ���� ������ �����ؼ� �ٽ� ������� ������ �� �ֵ��� �����ͷ� ��(ȭ��ǥ) ���� 
	// >> �����ͷ� �����Ͽ� ���� FuncSub()�Լ����� �����ϸ� �����Լ��� �ٽ� ���� �� �־��� 
	// �����͸� ����ϸ� ���� �������� �����ϴ� �� >> �����ʹ� �ش� ������ �ּҰ��� ������ ������ ���� �������� ���� (ȭ��ǥ, ��� ����Ǿ� �ֱ� ������ ���� �������� ���)

	*num1 = num / 3.0;
}
//void FuncGrade(double* num, char* num1) {	//double�� avg�� ���� �ִ� �ּҰ��� �޴� �Ű����� = double* num
	// �ش� �ּҰ� �����Ͽ� ���� ���� (num�̶�� ������ �Ű����� ���)
void FuncGrade(double num, char* num1){
	// int gra = (int)(*num) / 10;
	int gra = (int)num / 10;
	switch (gra) {
	case 10:
	case 9:
		*num1 = 'A';
		break;
	case 8:
		*num1 = 'B';
		break;
	case 7:
		*num1 = 'C';
		break;
	case 6:
		*num1 = 'D';
		break;
	default:
		*num1 = 'F';
		break;
	}
}

int main() {
	/* int num = 3;
	printf("num�� ��: %d\n", num); // �������� num ����ؼ� num =3 ���
	Func(); // ���� �Լ� �������� num ����ؼ� num = 0 ���
	// ���� ���� n1�� ����, ���� ���� n2�� ���� X
	Func(); // ���� ���� n1=3, ���� ���� n2 =4 ���
	// printf("%d\n", n2); >> ����!!!
	// n2�� ���������̹Ƿ� �ش� ����{} �ȿ����� ��ȿ�ϱ� ������ �ش� �Լ� �ۿ����� ��ȿ X >> ***���������� Ư���� ���� �������� */

	int num = 4;
	num = Func(num); // �̷��� �ϸ� �ٸ� �������� ���� �����ͼ� num�� �����ϴ� ��
	// ���� num���ٰ� �������� �ʰ� Func(num); �� �ߴٸ� 4�� ��� >> ������ �� �������� ���� >> �ٸ� �������� �����߱� ������
	// �̷��� ���� �ʰ� ������ num�������� �ٲٴ� ��� : ������ ����ϱ�

	printf("%d", num);

	int num1 = 4;
	Func1(&num1);	// num1�� �ּҰ��� ������ ���� Func1() �Լ��� ����
	printf("\n%d\n", num1);

	int kor, math, eng, total2;
	double avg2;
	char grade2;

	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &kor, &math, &eng); // �ּҰ��� ����ؼ� �ش� ������ �����ؼ� �������ֱ� ������ &�ּҰ� ����ؾ���
	// FuncAdd(&kor, &math, &eng, &total2); 
	FuncAdd(kor, math, eng, &total2); // total2 ���� �����Ƿ� total2�� ������ �����ؼ� �� �־��ֱ� ���ؼ� &total2 (total2�� �ּҰ�)���� ����
	//total2�� ����ϸ� FuncAdd()�Լ��� ���� total2 ���� ��������� {} ������ ��ȯ�� ���� ������ (���ϰ� void��) ����� total2�� {}�� ������ (����� �� �����)
	//total2�� ����ϸ� FuncAdd()�Լ����� ����� total�� {} ������ ������� �����Լ����� ����� total2 �� ���� X 
	//FuncAdd()�Լ��� total2�� �����Լ��� total2�� '�ٸ� ����(��)'�̱� ������ FuncAdd()���� ����� total2 �� �����Լ� total2�� ���� X
	//����� total2�� �����ϰ� ������ &(�ּҰ�) ����ؼ� ���� total2�� �����ؼ� �����ϱ�
	printf("����: %d\n", total2); 
	// FuncSub(&total2, &avg2); // total2��� ������ �����ؼ� ���� (�ش� ������ ���� ���� �����ϱ�)
	FuncSub(total2, &avg2);	// avg2�� ���� �����Ƿ� avg2�� ������ ������ �����ϱ� ���ؼ� (&)�ּҰ� ���
	printf("���: %.2f\n", avg2);
	// FuncGrade(&avg2,&grade2); // �ּҰ��� ���� avg2��� ������ ���� �����ؼ� ����
	FuncGrade(avg2, &grade2);
	printf("���: %c\n", grade2);

	struct Data d; // �ش� (struct)����ü Data�� ���� ���� ����
	d.data1 = 10;
	d.data2 = 20;
	printf("%d %d\n", d.data1, d.data2);
	printf("d�� ũ��: %d\n", sizeof(d)); // d�� ũ��(�� �ڷ��� ũ��) sizeof(d)�� Ȯ�� ����

	Da d1; // Da�� struct Data1�� ��Ī >> Da�� ����ص� ��
	// ��Ī�� ����: struct�� ���� ������ ����ü���� �򰥸� >> ���� ����� ����ü�ӿ��� �ұ��ϰ� ��Ī�� ���� �̸� ��� �ܿ�� �־����
	// >> �̸� �ذ��ϱ� ���� �͸� ����ü ����
	Da1 d2; // ��Ī�� ����ؾ��ϴ� ������ �ִ� �͸� ����ü

	struct Data3 d3;
	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &d3.korean, &d3.mathematics, &d3.english);
	FuncAdd(d3.korean, d3.mathematics, d3.english,&d3.total3);
	printf("����: %d\n",d3.total3);
	FuncSub(d3.total3, &d3.avg3);
	printf("���: %.2f\n", d3.avg3);
	FuncGrade(d3.avg3, &d3.grade3);
	printf("���: %c", d3.grade3);

	return 0;
}