#include <stdio.h>

/* 제어문자
	= 출력 결과를 제어해주는 문자
	\n : New Line 개행 (다음 줄)
	\t : Tab 탭, 탭만큼 공간 띄움
	\r : Carriage return, 커서를 문자열의 처음으로 옮김
	\b : backspace, 커서 바로 이전의 문자 하나를 지울 때 사용
	\a : alert, 경고음을 한 번 발생시킴
	\" : "(큰 따옴표) 출력
	/' : '(작은 따옴표) 출력
*/

/*------- C언어의 특성 --------
	C언어에서 작성되는 코드는 ;(세미콜론)으로 끝나야한다.
	코드를 작성했으면 코드를 맞힘을 나타내주는 세미콜론 ;
	C언어는 대소문자를 구분한다.
	C언어는 자유 형식(free-format)을 허용한다. = 프로그래머가 자유로운 형식으로 사용함 (어떤 형식으로 사용해도 상관없음)
	C언어는 절차지향적 언어이다. (위에서 아래로 순서대로 진행)
*/
/* ----- 서식 지정자 -----
	%c: Character, 하나의 문자
	%s: String, 문자열
	%d: Decimal, 10진수 정수 (int형)
	%f: Float, 실수 (float형)
	%o: Octal, 8진수 정수
	%x: Hexadecimal, 16진수 정수
	%p: Pointer, 주소
	%u: unsigned, 부호가 없는 10진수 정수
	%%: 퍼센트 출력

	서식지정자에서 소수점 자릿수를 지정해주는 방법 :
	%와 f 사이에 (.출력할 소수점 자릿수)를 작성해주면 됨
	ex) %.2f = 소수점 두 번째 자리까지 출력

	서식 지정자에서 오른쪽 정렬을 진행하는 방법 : %와 d사이에 확보할 공간의 개수 작성한다
	ex) %3d : 3개의 공간 확보하고 해당 공간에서 오른쪽 정렬 진행

	서식 지정자에서 왼쪽 정렬을 진행하는 방법 : %와 d사이에 확보할 공간의 개수를 작성하고 그 앞에 - 붙여줌
	ex) %-2d: 2개의 공간 확보하고 해당 공간에서 왼쪽 정렬 진행

	서식 지정자에서 오른쪽 정렬 진행하고 남은 공간 0으로 채우는 방법: %와 d 사이에 확보할 공간의 개수를 작성하고 그 앞에 빈 공간을 0 붙여줌
	ex) %05d: 5개의 공간 확보하고 해당 공간에서 오른쪽 정렬 진행 후 남은(빈) 공간 0으로 채워줌
*/

/* ----- C언어에서 데이터를 표기하는 방법 -----
	문자 : ' ' (작은 따옴표)로 감싸준다, 문자는 반드시 단 한 개만 존재해야 된다.
	문자열 : " " (큰 따옴표)로 감싸준다
	정수 : 숫자 그대로 작성한다.
	실수 : 숫자 뒤에 소수점까지 작성해준다.
	*/

/* --- 변수 ----
	= 값이 변하는 수
	메모리 공간을 할당 받고 해당 공간을 변수 이름으로 접근해 사용하는 개념
	변수 선언하는 방법 : 자료형 변수명;
	한 개의 변수에는 반드시 한 개의 데이터만 저장될 수 있다.
	변수는 같은 이름을 사용할 수 없다.
	변수를 선언하면 기존의 공간에 존재하는 데이터가 있는데 우리는 이 데이터를 쓰레기 값이라고 함
	쓰레기 값을 초기화 해줄 때 선언과 동시에 값을 할당해주면 됨
	*/

/* ----- 변수 이름 선언 규칙 ------ 
	변수의 이름은 영문자(대소문자), 숫자, 언더스코어(_)로만 구성된다.
	다른 기호는 사용 불가
	변수의 이름은 숫자로 시작할 수 없다 (언더스코어_는 상관없음).
	변수의 이름 사이에는 공백을 포함할 수 없다. (언더스코어로 대체해야함)
	변수의 이름은 미리 정의된 키워드는 사용할 수 없음 (미리 정의된 키워드 = 예약어)
*/
/* ----- 자료형 ------
*	변수를 선언할 때 변수 공간을 사용할 데이터 타입을 지정해줌
*	변수 공간에 어떤 타입의 데이터 넣어줄지 지정해줌
*	문자형
*		char: 1byte, -128~127 (기본형)
*	정수형
*		short: 2byte, -32768~32767
*		int: 4byte, -2,147,483,648~2,147,483,647 (기본형)
*		long: 4byte, -2,147,483,648~2,147,483,647 (Windows운영체제에서는 int와 같은 존재, linux에서는 다름)
*		long long: 8byte, 매우 크다
*	실수형
*		float: 4byte, 소수점 6번째 자리까지 정확하게 표기 
*		double: 8byte, 소수점 15번째 자리까지 정확하게 표기 (기본형)
		>> double은 float보다 크기가 크니 더 자세하게 소수점 나눌 수 있음 == float보다 표현 더 정확함

		자료형의 기본형 : 각 자료형 중에 기본형으로 지정된 것
		문자형 기본형 : char
		정수형 기본형 : int
		실수형 기본형 : double
*/

int main() {	// main함수는 소스 파일 당 1개씩만 있음 (실행할 때 main함수부터 접근해서 시작)
	// 주된 영역 main 함수는 반드시 단 하나만 존재해야 된다
	
	/*printf("Hello World! \n");
	printf("Hello World!\n");

	printf("Hello \nWorld!\n");	// Hello 다음줄 World!
	printf("Hello \tWorld!\n");	// Hello 탭 World!
	printf("Hello \rWorld!\n");	// World!Hello
	printf("Hello \bWorld!\n");	// HelloWorld! */

	/*printf("웃음: (*^o^*)\n");
	printf("사랑: (♥.♥)\n");
	printf("슬픔: (ㅠ.ㅠ)\n");
	printf("화남: (-_-^)\n");
	//가독성 높여주기 위해서 printf() 여러번 사용

	printf("이름: 홍길동\n");
	printf("나이: 30\n");
	printf("주소: 서울특별시 종로구 묘동 단성사\n");
	printf("키:183.2\t 몸무게: 70.53Kg\n"); */

	/* printf("%c\n",'A');
	// 'A'를 서식 지정자 %c에게 데이터 넘겨주어 출력하기
	printf("%s\n", "DEF");
	printf("%d\n",347);
	printf("%.3f\n", 123.9832);
	//%f의 특성상 소수점 6자리까지 출력 */

	/*printf("%d %d \n", 'A', 'B');
	printf("%-10d %5d \n", 10, 20);
	printf("%010d\n", 20);*/

	/* printf("%%c\n");
	printf("\"Hello\""); */

	/* printf("이름: %s\n", "홍길동");
	printf("나이: %d\n", 30);
	printf("주소: %s\n", "서울특별시 종로구 묘동 단성사");
	printf("키: %.1fcm\t 몸무게: %.2fkg\n", 183.2, 70.53);
	위의 비슷한 코드와 출력 결과 같지만 바로 위의 해당 코드는 변수를 사용해 활용 가능함!

	printf("%%c를 이용한 출력: \'%c\'\n", 'C');
	// 뒤에 있는 내용은 데이터를 불러오는 위치이기 때문에 제어문자는 출력코드에 포함시켜야함
	// 'C'는 %c에 데이터 넘겨줌
	printf("%%s를 이용한 출력: \"%s\"\n", "Hello");
	printf("%%d를 이용한 출력: %d\n", 4315);
	printf("%%f를 이용한 출력: %.3f\n", 73.235); 
	*/

	/*int num1;
	num1 = 5;
	printf("num의 값: %d \n", num1);
	num1 = 10;
	printf("num의 변경된 값: %d \n", num1);*/

	/*printf("이름: %s\n", "홍길동");
	int age = 30;
	printf("나이: %d\n", age);
	printf("주소: %s\n", "서울특별시 종로구 묘동 단성사");
	double height = 183.2;
	double weight = 70.53;
	printf("키: %0.2fcm\t 몸무게: %.2fkg\n", height, weight);*/


	return 0;
}