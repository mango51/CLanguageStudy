#include <stdio.h>

/* ----- �迭 -----
	������ ������ �ΰ� �ٿ����� ��
	Ư�� �ڷ����� ���� ������ ���� �� ������ �� ���
	�迭 ���� ��� : �ڷ��� �迭��[�迭ũ��];
	�迭�� �� ������ ��Ÿ���ִ� ���ڸ� ���� index(�ε���)��� �θ���.
	�ε����� 0~ (������ ���(����)�� ���� - 1)���� ���� ���� >> ������ �ε����� 0���� �����ϱ� ����
	�迭�� ����� ���� �ݺ����� �����ϰ� ����������
	�迭 �����ϸ鼭 �ʱ�ȭ ������ �� int arr[5] = {3,1,4,7,8};�� ���� �������� �ʱ�ȭ ���� ����
	�迭 �����ϸ鼭 ��� ������ 0���� �ʱ�ȭ�� �� int arr[5]={0,}; �������� ���� ����
*/

/* ----- ���ڿ� �Է� �޴� ��� -----
	scanf() �Լ��� ���� ���ڿ��� �Է¹��� ���� '�迭�̸� �տ� &'�� '�迭�� �ڿ� �ε���'�� �ۼ����� �ʴ´�!!!
	���ڿ��� ������ �׻� ���ڿ��� ���� �˷��ִ� NULL���ڰ� ��
	���ڿ��� �迭�� ������ ���� �ݵ�� NULL������ ũ����� �����������
	NULL���ڷ� ǥ���� ���� ���� 0, ���� '\0', NULL �̶�� �ۼ�
	���ڿ��� ���� �迭�� �ʱ�ȭ�� �� "" (ū ����ǥ) �ȿ� ���ڿ��� �ۼ����ָ� �� (ex) char str[6]="Hello";
	���ڿ��� ���� �迭�� NULL ���ڷ� �ʱ�ȭ�� ��, char str[10]={0,}; �������� ���� ����
	*/

/* ----- ������ -----
	������ ������ �ּҸ� �������ִ� ����
	������ ���� ���� ��� : ������ ������ �ڷ��� *(����Ÿ����ũ) ������;
	������ ���� �ȿ� ����� �ּҷ� �����ؼ� �ּ� ���� ���� Ȯ���� ���� *�����ͺ��� �������� Ȯ�� ���� (= ������)
	������ = ������ ����(�ּ�)�� ����� �� �����ϱ�

	������ ������ �Ϲ� ������ �ּҸ� ������ �� �ְ�, 
	���� ������ ������ ������ ������ �ּҸ� ������ �� �ְ�, 
	���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�,
	���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�,
	...
*/

/* ----- �Լ� -----
	��ȯ��: �Լ� ������ �۾��� ��ġ�� ���� ��ȯ���� �� ����� �ڷ��� = ��ȯ�Ǵ� ���� �ڷ���
	�Լ� �̸�: �Լ� ����ϱ� ���� ȣ���� �� ����� �̸�
	�Ű� ����: �Լ� ȣ���� �� �� ������ �� �ִµ� �� �� ���� �����ϴ� ���� = �Լ� ȣ���� �� ���� �޴� �� >> �Լ��� �����ϴ� ��
	�Լ� ���: �Լ� ��� �þ��� �ڵ���� �ۼ��Ǵ� ����

	�Լ��� ȣ��
	��ȯ���� ������ ����: �Լ��� ��ȯ���ִ� �� �����ϴ� ����
	ȣ���� �Լ� �̸�: ���ǵ� �Լ� �� ����� �Լ� �̸�
	�μ�: �Լ� ������ �� �ʿ��� ��
*/

/* ----- �Լ� ----- 
	�Լ��� ������ ���� �ݵ�� �ٸ� �Լ� �ٱ��� �����ؾ���

	��ȯ�� �Լ��̸�(�Ű�����){
		�Լ� ���;
	}
*/

int Add(int a, int b) { //Add �Լ� ����
	return a + b;
}

void Add2(int a, int b) {
	printf("���� ���: %d\n", a + b); //��ȯ�� ���� >> void ���
}

void Add3(int a, int b) {
	printf("���� ��: %d\n", a + b);
}
void Sub(int a, int b) {
	printf("�� ��: %d\n", a - b);
}
int mult(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}
void Calc(int num1,char op, int num2) {
	switch (op) {
	case 43: // �ƽ�Ű�ڵ�� ��� >> case '+': ����ص� ��
		Add3(num1, num2);
		break;
	case 45:
		Sub(num1, num2);
		break;
	case 42:
		printf("���� ��: %d\n", mult(num1, num2));
		break;
	case 47:
		printf("���� ��: %d\n", divide(num1, num2));
		break;
	}
}	// Calc() �Լ��� �ٸ� �Լ��鿡 ���� �տ� ��ġ�ϸ� ���� X 
// ���������� �����ϴ� C����̹Ƿ� Calc() �Լ� �� ���� ����Ǹ�, �ȿ� �ִ� �Լ����� �ش� �Լ� (Calc() �Լ�) �ؿ� ����Ǿ� �ֱ� ������ ���� �ȵ�
// ��ǻ�Ͱ� Calc()�Լ�(�� ���� ��ġ�� ���)�� ���� ��, �� �ȿ� �ִ� �Լ��� ������� �ʾҴٰ� �Ǵ��ϱ� ������ ����
// *** ���������� ����� C������ ������ �Ʒ��� �ڵ� ���� (���� ������ ���� �߻� ����)

int totalScore(int a, int b, int c) {
	return a + b + c;
}
double avgScore(int a) {
	return (double)a/3; // int�� a / int�� 3 = ������� int��!! >> ���� �� ��ȯ �ʿ�!!!
	// ���� �� ��ȯ ���� a/3���� �ϸ� int��/int���̹Ƿ� ������� 'int��'���� ���� ���¿��� double�� ���ϰ����� �ϴ� (int������).0000 �̷������� ����
	// �׷��� �Ǹ� ��Ȯ�� ��հ� ������ �ʰ� �������� ���� (������� int�����θ� ������ ����)
	// ���� �� ��ȯ�� ���� a�� double������ �ٲ㼭 3���� ������ double��/int��=double������ ����� double�� ������ ������ �Ҽ������� ��հ� ��Ȯ�� ����
	// ���� �� ��ȯ���� �ʰ��� return a/3.0; ���� �ذ��� �� ���� >> 3.0�� double���̹Ƿ� a/3.0�ϸ� ����� double������ ��������
}

char finalGrade(int a) {
	if (a >= 90) {
		return 'A';
	}
	else if (a >= 80) {
		return 'B';
	}
	else if (a >= 70) {
		return 'C';
	}
	else if (a >= 60) {
		return 'D';
	}
	else
		return 'F';
}
// finalGrade()�Լ��� switch������ ����� �� ���� 
// char finalGrade(double a){
//	switch ((int)avg/10){	//double�� avg�� int�� ��ȯ�ϰ� 10���� ������ ��� ������ �����ϱ�
//		case 10:
//		case 9:
//		 return 'A';
//		 break;	// ��� �� >> return�ϴϱ� ��ȯ�� 'A'�� ������ �ٽ� ���� �ִ� ������ ���� >> switch������ ���� (����)
//		case 8:
//		 return 'B';
//		 break; // ��� �� >> return�ϴϱ� ��ȯ�� 'A'�� ������ �ٽ� ���� �ִ� ������ ���� >> switch������ ���� (����)
//		... �̷������� switch�� ����� �� ����
// break���� ��� ����� ���� ���� >> 90���� ����̶� A�� ��Ȯ�� ���� (switch������ break�� ������ ���� ABCDEF�� ����� ����)
// ������ ���� �ڵ� break�� ��� ��� 90����� A�� ���� >> *** return ����!!!
// return���� �ش� �Լ� �����Ű�� ��� >> ���� �ڵ忡�� ����� 90�����̸� return 'A'; �ڵ� ����� 
// >> return ���� switch�� ���������鼭 'A'��� ��ȯ�� ������ ���� >> return�ϸ� �ش� �Լ����� �����ϰ� �ٽ� �����ִ� ������ return



int main() {
	/* int num[10];
	printf("�Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	printf("��� : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	} */

	/* int arr[5] = {3,1,4,6,8}; // �迭 �ʱ�ȭ (����� ���ÿ� �� �Ҵ���)
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	int arr1[100] = { 0, }; // ��� �ε����� 0���� �� �Ҵ��� {0,} ����ؾ���
	// �׳� int arr1[100];�̶�� �ϸ� ��� �ε����� �����Ⱚ���� ����� */

	/* int arr2[10];
	printf("�Է� : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr2[i]);
	}
	printf("��� : \n");
	for (int i = 0; i < 10; i++) {
		printf("arr2[%d]: %d\n", i,arr2[i]);
	} */
	
	/* char letter[5]; // ���� 5���� ���� �� ���� >> ���ڿ� ����� ��� ���� ����
	printf("�Է�: ");
	for (int i = 0; i < 5; i++) {
		scanf("%c", &letter[i]);
	}
	printf("���: ");
	for (int i = 0; i < 5; i++) {
		printf("%c", letter[i]);
	} */

	/* char str[6]; // �迭 ���� 6 ũ��
	printf("�Է� : ");
	scanf("%s", str); // &str�̳� &str[�ε�����] Ȥ�� str[�ε�����] �̷��� ������ �� ��!!! (�̷��� �ۼ� X)
	str[2] = '\0';
	printf("���: %s\n", str); */

	/* char str1[6] = { 'H','e','l','l','o' }; // ���ڿ� �ʱ�ȭ >> ũ�� 6�� ���� : NULL�� �����ؾ� ���ڿ��� �ν�
	// ��ó�� ���� �ʾƵ� �׳� ū ����ǥ �ȿ� ���ڿ� �־ ��
	printf("���: %s\n", str1); // ���� �迭�� %s ���� ���ڿ��� ��� */

	/* char str2[6] = "Hello";
	printf("���: %s\n", str2); */

	/* char str3[10];
	printf("�Է�: ");
	scanf("%s", str3);
	str3[5] = 'a'; //Hello �Է½� NULL���� str[5]�� ���� >> str[5]�� ���� �־��ָ� NULL ��� 'a' ���� ���ڿ� �ε��� 9���� ���� (���ڿ� NULL �� ���� ���µ� �����ϱ�)
	// NULL�� �Ⱥ����� ���� ������ ������ ������ ä��Ե�
	
	// >> �̸� �ذ����ֱ� ���� ���� �迭���� str3 ������ ��, char str3[10] = {0,}; �̷��� �ؼ� ��� �ε����� NULL ���� �־��ְ� �����ϱ�*** 
	// char str3[10] = {0,}; ��� �ε���(ũ��10)�� NULL�� �־��ֱ� 
	// >> �׷��� Ư�� �ε����� NULL�� �־ ������ �� ������ ����***
	
	printf("���: %s\n", str3); */
	
	/*char name[20]; 
	int age;
	char addr[100]; // �˳��ϰ� �ڸ�(����) Ȯ��
	double height, weight;

	printf("�̸�: ");
	scanf("%s", name); // ���ڿ��̹Ƿ� �ּҰ� Ȥ�� �ε��� �� ���� X
	printf("����: ");
	scanf("%d", &age); // ���ڿ��� �ƴϹǷ� �ּҰ����� ������� &
	printf("�ּ�: ");
	scanf("%s", addr); // ���ڿ��̶� �ּҰ�/�ε����� ���� ����
	printf("Ű: ");
	scanf("%lf", &height); // ���ڿ� �ƴ϶� �ּҰ� �� ������� &
	printf("������: ");
	scanf("%lf", &weight); // double �޾��ִ� ���� ������ lf + ���ڿ� �ƴ϶� & �ּҰ� ����

	printf("\n���\n");
	printf("-----------------------------\n");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("�ּ�: %s\n", addr);
	printf("Ű: %.1fcm\t������: %.2fkg", height, weight); */

	/*
	int num=5;
	int* ptr; // * �����ͺ������� ��Ÿ��
	int** dptr; // ** �����ͺ������� ��Ÿ�� (����������)
	int*** tptr;

	ptr = &num; // num�� �ּ�(&)�� ptr��
	dptr = &ptr;
	tptr = &dptr;

	printf("num�� �ּ�: %p\n",&num); // %p : �ּ� ����Ű�� ���� ������ (������, �ּ� ���� ����ϴ� ���� ������)
	// num�� �ּ� ����ϱ�
	printf("ptr�� �ּ� %p\n", ptr); // num�� �ּҰ� ptr�� ����

	printf("\nnum�� �� : %d\n", num);
	printf("ptr�� �̿��� num�� ��: %d\n", *ptr); // ������
	printf("dptr�� �̿��� num�� ��: %d\n", **dptr); // ���� 2�� �ڵ� ������� ���� >> ȭ��ǥ ���� ���� �����ϱ�, ������
	printf("tptr�� �̿��� num�� ��: %d\n", ***tptr);

	printf("\nptr�� �ּ� : %p\n", &ptr);
	printf("dptr�� ��: %p", dptr); // ���� �ڵ�� ������ ����� ���� >> ptr�� �ּҰ��� ���� dptr = &ptr (ptr�� �ּҰ�)

	printf("\n\ndptr�� �ּ�: %p", &dptr);
	printf("\ntptr�� ��: %p\n", tptr); */

	/*	// ������!!! ���� �߿�!!!
	int num;
	int* ptr; // num�� �ּҸ� �������� ������ ptr ����

	ptr = &num; // ptr�� num�� �ּҰ�

	printf("�Է�: ");
	scanf("%d", ptr); // &num = ptr�̹Ƿ� scanf("%d",&num);�� scanf("%d",ptr);�� ������൵ ��
	// *ptr = num�̰�, %d (������ ����������)�� �Է¹ޱ� ���ؼ��� & �ּ� ��ȣ ����ؾ��� >> �׷��� &�� ���� �ش� �ּҸ� ���� ��(num)���� �̵�
	// num�� �ּҰ��� ���� ptr�� ���� �Է°� �ޱ� (num�� �ּҰ��� ���� �Է¹ޱ� �Է°��� num�� �����)
	// scanf() �Լ��� �ּҰ����� ���� �� �Է¹���

	printf("���: %d",num); */

	/*int result;
	result = Add(16, 29);
	printf("%d\n", result);  // 45
	result = Add(20,71); // result���� 45���� 91�� ��ȯ
	printf("%d",result); // 91
	Add2(5,7); // ��ȯ���� ���� �Լ��̴� ��ȯ�� ������ ���� ���� �Լ����� ���ڸ� ����ؼ� �Լ� ȣ��
	*/
	
	/* int num1, num2;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	Add3(num1, num2);
	Sub(num1, num2);
	int resultM = mult(num1, num2);
	printf("���� ��: %d", resultM);
	int resultD = divide(num1, num2);
	printf("\n���� ��: %d", resultD); */

	/* while (1) {
		int num1, num2;
		char op;
		printf("���� �Է�: ");
		scanf("%d %c %d", &num1, &op, &num2);
		if (op == '+') {
			Add3(num1, num2);
		}
		else if (op == '-') {
			Sub(num1, num2);
		}
		else if (op == '*') {
			printf("���� ��: %d", mult(num1, num2));
		}
		else if (op == '/') {
			printf("���� ��: %d", divide(num1, num2));
		}
		else
			printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.");
		printf("\n------------------------------------\n\n");
	} */
	
	/* int num1, num2;
	char op;
	printf("���� �Է�: ");
	scanf("%d %c %d", &num1, &op, &num2);
	Calc(num1, op, num2); // Calc()�Լ� ȣ���ϱ� */

	int ko, ma, en,total;
	double avg;
	char grade;

	printf("����, ����, ���� �Է�: ");
	scanf("%d %d %d", &ko, &ma, &en);

	total = totalScore(ko, ma, en);
	printf("����: %d\n", total);

	avg = avgScore(total);
	printf("���: %.2f\n", avg);

	grade = finalGrade(avg);
	printf("���: %c\n", grade);

	return 0;
}