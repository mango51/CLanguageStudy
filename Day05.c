#include <stdio.h>

/* ----- 배열 -----
	일정한 간격을 두고 붙여놓은 것
	특정 자료형을 가진 변수를 여러 개 선언할 때 사용
	배열 선언 방법 : 자료형 배열명[배열크기];
	배열의 각 공간을 나타내주는 숫자를 보고 index(인덱스)라고 부른다.
	인덱스는 0~ (선언한 요소(공간)의 개수 - 1)까지 갖고 있음 >> 이유는 인덱스는 0부터 시작하기 때문
	배열을 사용할 때는 반복문을 적절하게 사용해줘야함
	배열 선언하면서 초기화 진행할 때 int arr[5] = {3,1,4,7,8};과 같은 형식으로 초기화 진행 가능
	배열 선언하면서 모든 공간을 0으로 초기화할 때 int arr[5]={0,}; 형식으로 진행 가능
*/

/* ----- 문자열 입력 받는 방법 -----
	scanf() 함수를 통해 문자열을 입력받을 때는 '배열이름 앞에 &'나 '배열의 뒤에 인덱스'를 작성하지 않는다!!!
	문자열의 끝에는 항상 문자열의 끝을 알려주는 NULL문자가 들어감
	문자열을 배열에 저장할 때는 반드시 NULL문자의 크기까지 고려해줘야함
	NULL문자로 표기할 때는 정수 0, 문자 '\0', NULL 이라고 작성
	문자열을 담을 배열을 초기화할 때 "" (큰 따옴표) 안에 문자열을 작성해주면 됨 (ex) char str[6]="Hello";
	문자열을 담을 배열을 NULL 문자로 초기화할 때, char str[10]={0,}; 형식으로 진행 가능
	*/

/* ----- 포인터 -----
	포인터 변수는 주소를 저장해주는 변수
	포인터 변수 선언 방법 : 저장할 공간의 자료형 *(에스타리스크) 변수명;
	포인터 변수 안에 저장된 주소로 접근해서 주소 안의 값을 확인할 때는 *포인터변수 형식으로 확인 가능 (= 역참조)
	역참조 = 포인터 변수(주소)를 사용해 값 접근하기

	포인터 변수는 일반 변수의 주소를 저장할 수 있고, 
	이중 포인터 변수는 포인터 변수의 주소를 저장할 수 있고, 
	삼중 포인터 변수는 이중 포인터 변수의 주소를 저장할 수 있고,
	사중 포인터 변수는 삼중 포인터 변수의 주소를 저장할 수 있고,
	...
*/

/* ----- 함수 -----
	반환형: 함수 내용의 작업을 마치고 값을 반환해줄 때 사용할 자료형 = 반환되는 값의 자료형
	함수 이름: 함수 사용하기 위해 호출할 때 사용할 이름
	매개 변수: 함수 호출할 때 값 전해줄 수 있는데 이 때 값을 저장하는 변수 = 함수 호출할 때 같이 받는 값 >> 함수에 적용하는 값
	함수 기능: 함수 기능 맡아줄 코드들이 작성되는 영역

	함수의 호출
	반환값을 저장할 변수: 함수가 반환해주는 값 저장하는 변수
	호출할 함수 이름: 정의된 함수 중 사용할 함수 이름
	인수: 함수 동작할 때 필요한 값
*/

/* ----- 함수 ----- 
	함수를 정의할 때는 반드시 다른 함수 바깥에 정의해야함

	반환형 함수이름(매개변수){
		함수 기능;
	}
*/

int Add(int a, int b) { //Add 함수 정의
	return a + b;
}

void Add2(int a, int b) {
	printf("연산 결과: %d\n", a + b); //반환값 없음 >> void 사용
}

void Add3(int a, int b) {
	printf("더한 값: %d\n", a + b);
}
void Sub(int a, int b) {
	printf("뺀 값: %d\n", a - b);
}
int mult(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}
void Calc(int num1,char op, int num2) {
	switch (op) {
	case 43: // 아스키코드로 사용 >> case '+': 사용해도 됨
		Add3(num1, num2);
		break;
	case 45:
		Sub(num1, num2);
		break;
	case 42:
		printf("곱한 값: %d\n", mult(num1, num2));
		break;
	case 47:
		printf("나눈 값: %d\n", divide(num1, num2));
		break;
	}
}	// Calc() 함수가 다른 함수들에 비해 앞에 배치하면 실행 X 
// 순차적으로 실행하는 C언어이므로 Calc() 함수 맨 위에 선언되면, 안에 있는 함수들이 해당 함수 (Calc() 함수) 밑에 선언되어 있기 때문에 실행 안됨
// 컴퓨터가 Calc()함수(맨 위에 배치한 경우)를 봤을 때, 그 안에 있는 함수가 선언되지 않았다고 판단하기 때문에 에러
// *** 절차지향적 언어인 C언어에서는 위에서 아래로 코드 실행 (순서 때문에 문제 발생 가능)

int totalScore(int a, int b, int c) {
	return a + b + c;
}
double avgScore(int a) {
	return (double)a/3; // int형 a / int형 3 = 결과값은 int형!! >> 강제 형 변환 필요!!!
	// 강제 형 변환 없이 a/3으로 하면 int형/int형이므로 결과값이 'int형'으로 나온 상태에서 double형 리턴값으로 하니 (int형정수).0000 이런식으로 나옴
	// 그렇게 되면 정확한 평균값 나오지 않고 정수형만 나옴 (결과값이 int형으로만 나오기 때문)
	// 강제 형 변환을 통해 a를 double형으로 바꿔서 3으로 나누면 double형/int형=double형으로 결과값 double형 나오기 때문에 소수점까지 평균값 정확히 나옴
	// 강제 형 변환하지 않고도 return a/3.0; 으로 해결할 수 있음 >> 3.0은 double형이므로 a/3.0하면 결과값 double형으로 나오게함
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
// finalGrade()함수를 switch문으로 사용할 수 있음 
// char finalGrade(double a){
//	switch ((int)avg/10){	//double형 avg를 int형 변환하고 10으로 나눠서 등급 나누기 쉽게하기
//		case 10:
//		case 9:
//		 return 'A';
//		 break;	// 없어도 됨 >> return하니까 반환값 'A'를 가지고 다시 원래 있던 곳으로 리턴 >> switch문에서 종료 (나옴)
//		case 8:
//		 return 'B';
//		 break; // 없어도 됨 >> return하니까 반환값 'A'를 가지고 다시 원래 있던 곳으로 리턴 >> switch문에서 종료 (나옴)
//		... 이런식으로 switch문 사용할 수 있음
// break문이 없어도 제대로 실행 가능 >> 90점대 평균이라도 A로 정확히 나옴 (switch문에서 break문 없으면 원래 ABCDEF로 결과값 나옴)
// 하지만 위의 코드 break문 없어도 평균 90점대면 A만 나옴 >> *** return 때문!!!
// return으로 해당 함수 종료시키는 기능 >> 위의 코드에서 평균이 90점대이면 return 'A'; 코드 실행됨 
// >> return 으로 switch문 빠져나가면서 'A'라는 반환값 가지고 나감 >> return하면 해당 함수에서 실행하고 다시 원래있는 곳으로 return



int main() {
	/* int num[10];
	printf("입력 : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	printf("출력 : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	} */

	/* int arr[5] = {3,1,4,6,8}; // 배열 초기화 (선언과 동시에 값 할당함)
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	int arr1[100] = { 0, }; // 모든 인덱스에 0으로 값 할당함 {0,} 사용해야함
	// 그냥 int arr1[100];이라고 하면 모든 인덱스에 쓰레기값들이 저장됨 */

	/* int arr2[10];
	printf("입력 : ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr2[i]);
	}
	printf("출력 : \n");
	for (int i = 0; i < 10; i++) {
		printf("arr2[%d]: %d\n", i,arr2[i]);
	} */
	
	/* char letter[5]; // 문자 5개만 넣을 수 있음 >> 문자열 만드는 방법 따로 있음
	printf("입력: ");
	for (int i = 0; i < 5; i++) {
		scanf("%c", &letter[i]);
	}
	printf("출력: ");
	for (int i = 0; i < 5; i++) {
		printf("%c", letter[i]);
	} */

	/* char str[6]; // 배열 공간 6 크기
	printf("입력 : ");
	scanf("%s", str); // &str이나 &str[인덱스값] 혹은 str[인덱스값] 이렇게 적으면 안 됨!!! (이렇게 작성 X)
	str[2] = '\0';
	printf("출력: %s\n", str); */

	/* char str1[6] = { 'H','e','l','l','o' }; // 문자열 초기화 >> 크기 6인 이유 : NULL값 포함해야 문자열로 인식
	// 위처럼 하지 않아도 그냥 큰 따옴표 안에 문자열 넣어도 됨
	printf("출력: %s\n", str1); // 문자 배열을 %s 통해 문자열로 출력 */

	/* char str2[6] = "Hello";
	printf("출력: %s\n", str2); */

	/* char str3[10];
	printf("입력: ");
	scanf("%s", str3);
	str3[5] = 'a'; //Hello 입력시 NULL값이 str[5]에 있음 >> str[5]에 값을 넣어주면 NULL 대신 'a' 들어가니 문자열 인덱스 9까지 실행 (문자열 NULL 값 보고 끊는데 없으니까)
	// NULL값 안보여서 남은 공간을 쓰레기 값으로 채우게됨
	
	// >> 이를 해결해주기 위해 위에 배열변수 str3 선언할 때, char str3[10] = {0,}; 이렇게 해서 모든 인덱스에 NULL 값을 넣어주고 시작하기*** 
	// char str3[10] = {0,}; 모든 인덱스(크기10)에 NULL값 넣어주기 
	// >> 그러면 특정 인덱스에 NULL값 넣어도 쓰레기 값 나오지 않음***
	
	printf("출력: %s\n", str3); */
	
	/*char name[20]; 
	int age;
	char addr[100]; // 넉넉하게 자리(공간) 확보
	double height, weight;

	printf("이름: ");
	scanf("%s", name); // 문자열이므로 주소값 혹은 인덱스 값 적지 X
	printf("나이: ");
	scanf("%d", &age); // 문자열이 아니므로 주소값으로 적어야함 &
	printf("주소: ");
	scanf("%s", addr); // 문자열이라서 주소값/인덱스값 적지 않음
	printf("키: ");
	scanf("%lf", &height); // 문자열 아니라 주소값 꼭 적어야함 &
	printf("몸무게: ");
	scanf("%lf", &weight); // double 받아주는 서식 지정자 lf + 문자열 아니라서 & 주소값 쓰기

	printf("\n출력\n");
	printf("-----------------------------\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("주소: %s\n", addr);
	printf("키: %.1fcm\t몸무게: %.2fkg", height, weight); */

	/*
	int num=5;
	int* ptr; // * 포인터변수임을 나타냄
	int** dptr; // ** 포인터변수임을 나타냄 (이중포인터)
	int*** tptr;

	ptr = &num; // num의 주소(&)는 ptr임
	dptr = &ptr;
	tptr = &dptr;

	printf("num의 주소: %p\n",&num); // %p : 주소 가리키는 서식 지정자 (포인터, 주소 형태 출력하는 서식 지정자)
	// num의 주소 출력하기
	printf("ptr의 주소 %p\n", ptr); // num의 주소가 ptr에 저장

	printf("\nnum의 값 : %d\n", num);
	printf("ptr를 이용한 num의 값: %d\n", *ptr); // 역참조
	printf("dptr을 이용한 num의 값: %d\n", **dptr); // 위의 2줄 코드 결과값과 같음 >> 화살표 따라서 값에 접근하기, 역참조
	printf("tptr을 이용한 num의 값: %d\n", ***tptr);

	printf("\nptr의 주소 : %p\n", &ptr);
	printf("dptr의 값: %p", dptr); // 위의 코드와 동일한 결과값 가짐 >> ptr의 주소값을 가진 dptr = &ptr (ptr의 주소값)

	printf("\n\ndptr의 주소: %p", &dptr);
	printf("\ntptr의 값: %p\n", tptr); */

	/*	// 포인터!!! 완전 중요!!!
	int num;
	int* ptr; // num의 주소를 저장해줄 포인터 ptr 선언

	ptr = &num; // ptr은 num의 주소값

	printf("입력: ");
	scanf("%d", ptr); // &num = ptr이므로 scanf("%d",&num);을 scanf("%d",ptr);로 사용해줘도 됨
	// *ptr = num이고, %d (정수형 서식지정자)를 입력받기 위해서는 & 주소 기호 사용해야함 >> 그래야 &를 통해 해당 주소를 가진 값(num)으로 이동
	// num의 주소값을 가진 ptr에 가서 입력값 받기 (num의 주소값에 가서 입력받구 입력값은 num에 저장됨)
	// scanf() 함수는 주소값으로 가서 값 입력받음

	printf("출력: %d",num); */

	/*int result;
	result = Add(16, 29);
	printf("%d\n", result);  // 45
	result = Add(20,71); // result값이 45에서 91로 변환
	printf("%d",result); // 91
	Add2(5,7); // 반환값이 없는 함수이니 반환값 저장할 변수 없이 함수명과 인자만 사용해서 함수 호출
	*/
	
	/* int num1, num2;
	printf("숫자를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	Add3(num1, num2);
	Sub(num1, num2);
	int resultM = mult(num1, num2);
	printf("곱한 값: %d", resultM);
	int resultD = divide(num1, num2);
	printf("\n나눈 값: %d", resultD); */

	/* while (1) {
		int num1, num2;
		char op;
		printf("연산 입력: ");
		scanf("%d %c %d", &num1, &op, &num2);
		if (op == '+') {
			Add3(num1, num2);
		}
		else if (op == '-') {
			Sub(num1, num2);
		}
		else if (op == '*') {
			printf("곱한 값: %d", mult(num1, num2));
		}
		else if (op == '/') {
			printf("나눈 값: %d", divide(num1, num2));
		}
		else
			printf("연산자를 잘못 입력하셨습니다.");
		printf("\n------------------------------------\n\n");
	} */
	
	/* int num1, num2;
	char op;
	printf("연산 입력: ");
	scanf("%d %c %d", &num1, &op, &num2);
	Calc(num1, op, num2); // Calc()함수 호출하기 */

	int ko, ma, en,total;
	double avg;
	char grade;

	printf("국어, 수학, 영어 입력: ");
	scanf("%d %d %d", &ko, &ma, &en);

	total = totalScore(ko, ma, en);
	printf("총합: %d\n", total);

	avg = avgScore(total);
	printf("평균: %.2f\n", avg);

	grade = finalGrade(avg);
	printf("등급: %c\n", grade);

	return 0;
}