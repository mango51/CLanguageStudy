#include <stdio.h>
#include <windows.h>
/*	----- �ݺ��� -----
* ���ǽ��� ���ϸ鼭 ���� ��� ���� ������ �����Ű�� ��ȭ���� ���� ���ǽ��� �� �ٽ� ���ϴ� ����
* for(), while(), do~while() 3���� ����
* 
* 1. for��
* for(�ʱ��; ���ǽ�; ��ȭ��)
* {
*	���ӹ���;
* }
* 
* �ʱ�� > ���ǽ� > ���ӹ��� > ��ȭ�� > ���ǽ� > ���ӹ��� > ��ȭ�� >>>... ������ ����
* for������ ���ѷ����� ����ϰ� ���� ��, �ʱ��, ���ǽ�, ��ȭ�� ���� O (ex) for(;;)
* for������ ���� ������ �� ���� ���� �߰�ȣ {} ���� O
* 
* 2. while()��
* �ʱ��;
* while(���ǽ�){
*	���ӹ��� �� ��ȭ��;
* }
* while������ �ʱ���� while�� �ٱ��� �����ؾ��ϰ�, ��ȭ���� ���� ����� ���� ������
* 
* �� ���ѷ���
* while(1){
*	���ӹ���;
* }
* >> �ʱ��, ��ȭ���� �ʿ���� ���ѷ���
* while������ ���ѷ��� ����� ���� '���ǽĿ� 1' �ۼ�
* while���� ���� ���� �� ���̸� �߰�ȣ {} ���� ����
* ������ ���� ���忡 ��ȭ���� ���� �ۼ��Ǳ� ������ {} �߰�ȣ ���� ��� ���� ����
* 
* 3. do~while��
* �ʱ��;
* do
* {
*	���� ���� �� ��ȭ��;
* } while(���ǽ�);
* 
* do~while���� while���� ��ü������ ��������� ���� ���� �ּ� �� ���� �����Ŵ
* do~while������ ���ѷ��� ����� �� while���� ���������� ���ǽĿ� 1 �ۼ��ϱ�
*/

/* ----- ��Ÿ ���� -----
	break: �ش� ���� ������ �Ǹ� �ݺ��� Ż��
	continue: �ش� ���� ������ �Ǹ� continue���� �Ʒ� �ִ� ���� ������ �������� �ʰ� ����
*/

/* ----- ��Ÿ �Լ� -----
	system(): system("��ɾ�"), "" ū ����ǥ �ȿ� �ۼ��Ǵ� ��ɾ ��������ִ� �Լ�
	Sleep(): Sleep(������ �ð�), �ð� ���� : 1/1000�� = �ܼ�â�� ��� ����ִ� �Լ�, ������ �Լ�
	system, Sleep �Լ� ����ϱ� ���ؼ� windows.h ������� �����������
*/
int main() {
	/* char letter, ch;
	int num;

	for (int i = 65; i < 91; i++) {
		printf("%c", i);
	}
	printf("\n");
	for (char i = 'A'; i <= 'Z'; i++) { // for�� �ȿ� char ����ص� ��ǻ�Ͱ� �˾Ƽ� char�� int���� �ؼ��ؼ� ���(���)
		// �ʱ�İ� ���ǽĿ� int���� �ƴ� char ����� �� ����!!! ***
		printf("%c", i);
	} */

	/*printf("\n�Է�: ");
	scanf("%c", &letter);
	printf("���: ");
	for (int i = 97; i <= letter; i++) {
		// letter + 1�� �ϸ� �ڵ� �� ��ȯ���� char��(1) + int��(4) �̶� ������� int������ ���� >> ���� ���� �� ��ȯ�� �ʿ� ����!!!
		printf("%c ", i);
	}
	printf("\n"); */
	
	/* printf("\n�Է�: ");
	scanf("%c", &ch);
	printf("���: ");
	for (char i = 'a'; i <= ch; i++) { // ���� for������ int�� i ������ ���������� char�����ε� ���� ����!! (��ǻ�Ͱ� �˾Ƽ� int������ �ؼ��ؼ� �����)
		printf("%c", i);
	}
	
	for (;;) {
		printf("\n�Է�: ");
		scanf("%d", &num);
		printf("���: %d\n",num);
		if (num == 9) {
			printf("9�� �ԷµǾ� ���α׷��� �����մϴ�.\n");
			break;
			// break������ �ݺ��� Ż��
		}
	}

	int i = 0; //�ʱ��
	while (i < 10) { //���ǽ�
		printf("hello\n");
		i++; //��ȭ��
	} */

	/* int i=65;
	while (i <= 90) {
		printf("%c", i);
		i++;
	}
	printf("\n");
	char let = 'A';
	while (let <= 'Z') {
		printf("%c", let);
		let++;
	}

	char j;
	char k = 'a';
	printf("\n�Է� : ");
	scanf("%c", &j);
	printf("��� : ");
	while (k <= j) {
		printf("%c ", k);
		k++;
	}

	int num=0;
	while (num != 9) {
		printf("\n�Է�: ");
		scanf("%d", &num);
		if (num != 9) {
			printf("���: %d", num);
		}
	}
	printf("9�� �ԷµǾ� ���α׷��� �����մϴ�.");

	int num1;
	while (1) {
		printf("\n�Է�: ");
		scanf("%d", &num);
		if (num == 9) {
			printf("9�� �ԷµǾ� ���α׷��� �����մϴ�.");
			break;
		}
		printf("���: %d", num);
	} */

	/* int i = 7;
	do {
		printf("hi \n");
		i++;
	} while (i < 5); */

	/*
	int num; // �̷��� ���� �����ϸ� �����Ⱚ ������
	do {
		printf("\n�Է� : ");
		scanf("%d", &num); // ���⼭ �����Ⱚ�� ġ��� �Է��� �� ���� (�������)
		printf("��� : %d\n", num);
	} while (num % 2);
	printf("\n¦���� �ԷµǾ� ���α׷� �����մϴ�.");

	//while������ �ϸ�...
	//int num;
	//while(num%2){...}
	//���� �߻��� ���� ���� >> �����Ⱚ�� ���� num�̶� 2�� ���� �� �ʹ� ū ���ڷ� ��ǻ�Ϳ��� ���� ��� �߰��� �� ����
	*/

	/* printf("ABCD\n");
	system("cls");
	Sleep(5000);
	printf("EFGH\n"); */

int card = 10000;
int num,add,sub; // �� ������� ���� num,sub, add�� ������ �� �Ҵ�Ǿ� ����
do { //do~while�� ����ϸ� ���ӹ��� ���� �����ϰ� �� ���� while�� ���� (�� ������ ���ӹ��� ������)
	// �����Ⱚ �ִ� num�� �켱 �����ϰ� ���ӹ��� �� num�� �� �ԷµǾ� �ش� num ���� while���� ����
	//while������ �ϸ� ���� num�� ���� �ʱ�ȭ�ϰ� �����ؾ��� >> �ʱ�ȭ���� ������ �����Ⱚ�� �־ while���� �����ϱ⿣ �ʹ��� ū ���ڶ� ���� �� ��
	system("cls"); // window.h ����ؼ� system ��� ��� (system ��� �� cls ��� ���)
	printf("ī�� �ܾ�: %d\n",card);
	printf("1. ī�� �ܾ� ����\n");
	printf("2. ī�� �ܾ� ���\n");
	printf("3. ����\n");
	printf("�Է�: ");
	scanf("%d", &num);
	switch (num) {
	case 1:
			system("cls");
			printf("ī�� �ܾ�: %d\n", card);
			printf("���� �ݾ� �Է�: ");
			scanf("%d", &add);
			card += add;
			printf("%d�� �����ؼ� %d�� ��밡���մϴ�.\n", add, card);
			Sleep(3000);
			break;
	case 2: 
		system("cls");
			while (1) {
				printf("ī�� �ܾ�: %d\n", card);
				printf("��� �ݾ� �Է�: ");
				scanf("%d", &sub);
				if (card>= sub) {
					card -= sub;
					printf("%d�� ����ϰ� %d�� ���ҽ��ϴ�. \n", sub, card);
					Sleep(3000);
					break;
				}
				else { // ���� if���� ����Ǹ� ��¥�� break���� ���� while�� ���������ϱ� else�� ��� ���ص� �� (else�� ��ȣ �� ���� ����ص� ��)
					system("cls");
					printf("�ܾ��� �����մϴ�. \n");
					continue;
				}
			}
			break;

	case 3: 
			system("cls");
			break;
			//break; �߰��ص� ������ �̹� break;�� �ؼ� switch�� ������ ������ �߰��� break;�� ��� �ȵ�!!!

	default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
			Sleep(1000);
			break;

	}

} while (num != 3); //�����ݷб��� �ۼ��ؾ��ϴ� do~while��
//do~while�� ������� �ʰ� switch�� �ȿ� if(num==3){ break; } ����ؼ� ���α׷� ������ �� ����!

	return 0;
}