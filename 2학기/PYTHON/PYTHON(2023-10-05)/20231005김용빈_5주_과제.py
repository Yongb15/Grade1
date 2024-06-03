# print("%d / %d = %d" % (100, 200, 0.5));
# print("%d / %d = %5.1f" % (100, 200, 0.5));
# print("{0:d} {1:5d} {2:05d}".format(123, 123, 123));
# print("{2:d} {1:5d} {0:05d}".format(123, 12, 1));

# 실습1 - .split() 사용
'''
year, month, day = input('"년/월/일" 형식으로 입력하세요. : ').split('/')           
print('오늘은 {}년 {}월 {}일 입니다'.format(year, month, day))
print('오늘은 %s년 %s월 %s일 입니다,'%(year, month, day))

result = '내일은 {}년 {}월 {}일 입니다.'.format(year, month, int(day)+1)
print("변수 result 출력 결과 : ", result)
'''
# 실습2 - 산술 연산자 연습 //, %----------
'''
숫자 = int(input('세자리 자연수를 입력하시오: '))
백자리 = 숫자 // 100
십자리 = (숫자 // 10) % 10
일자리 = 숫자 % 10               #나머지만 넘겨주면 됨

print('백의 자리 {}, 십의자리 {}, 일의 자리 {}'.format(백자리, 십자리, 일자리))
'''
# 실습 3 - 비트 논리곱으로 정수의 특정 비트 알아내기
'''
a = int(input("정수 하나를 입력하세요 >>> "));

mask = 0b1111;

print("정수 {0}은 2진수로는 {0:b}입니다.".format(a));
print("가장 오른쪽 4비트 : {0:04b}, 정수로는 {0}입니다.".format(a & mask));
'''
# 실습 4 - 비트 배타적 논리합으로 id 암호화
# 같으면 0, 다르면 1
'''
id_num = int(input("ID로 사용할 여덟자리의 정수를 입력하세요 >>> "));

key = 15382695;

enc_id = id_num ^ key                        # 아이디 암호화 # 배타적 논리합 ^

print("입력한 ID : %d" % id_num);
print("암호화해 저장된 ID : %d" % enc_id);

in_id = int(input("로그인할 ID를 입력하세요 >>> "));

result = enc_id ^ key;                               # 아이디 암호화 복호화 # 배타적 논리합 ^

print("로그인 여부 : {}".format(in_id == result));
'''
# 실습 5 - (단순 if문)을 사용해서 홀짝 확인하기
'''
number = int(input("정수를 입력하시오 : "));

if number % 2 == 0 :                                    # 단순 if문
    print(number, "는 짝수입니다.");
if number % 2 == 1 :
    print(number, "는 홀수입니다.");
    
print("프로그램 종료");

if number % 2 == 0 :                                    # if-else문
    print(number, "는 짝수입니다.");
else :
    print(number, "는 홀수입니다.");
    
print("프로그램 종료");
'''

# 실습 6 - 중첩 if문 (아이디와 비밀번호가 10자리가 넘는지 확인 )
'''
input_id = input("ID : ");
input_password = input("password : ");

if len(input_id) < 11 :
    if len(input_password) < 11 :
        print("회원가입 성공");
    else :
        print("회원가입 실패! -> password 길이가 10을 초과");
else :
    print("회원가입 실패! -> ID 길이가 10을 초과");
'''

# 실습 7 - 중첩 if문(로그인 성공 여부 확인)
'''
org_id = 'abc';
org_pw = 123;

input_id = input("ID : ");
input_pw = int(input("password : "));

if input_id != org_id :
    print("로그인 실패 : ID 오류");
else :
    if org_pw != input_pw :
        print("로그인 실패 : Password 오류");
    else :
        print("로그인 성공");
'''

# 문제 1번 : 두개의 정수를 입력 받아서 두 정수 모두 짝수이면 True를 출력하는 프로그램을 작성하라.
'''
number1 = int(input("정수를 입력하세요 : "));
number2 = int(input("정수를 입력하세요 : "));              

if number1 % 2 == 0 and number2 % 2 == 0 :
    print("True입니다.");
'''
# 문제 2번 : IQ가 148 이상이면, 멘사(Mensa)에 가입할 수 있다. IQ를 입력하여 멘사 가입 여부를 판단하는 프로그램을 작성하라.
'''
iq = int(input("IQ를 입력하세요! : "));

if iq >= 148 :
    print(iq, "이므로 멘사(Mensa)에 가입할 수 있습니다.");
else :
    print(iq, "이므로 멘사(Mensa)에 가입할 수 없습니다.");
'''
# 문제 3번 : 두 개의 양의 정수를 입력 받아, 어떤 것이 큰 수인지 판별하고, 그 큰 수가 짝수인지도 판별하는 프로그램을 작성하시오.
'''
number1 = int(input("양의 정수를 입력하세요. : "));
number2 = int(input("양의 정수를 입력하세요. : "));

if number1 > number2 :
    
    print("number1가 더 큽니다.");
    
    if number1 % 2 == 0 :
        print("짝수입니다.");
    else :
        print("홀수입니다.");
else :

    print("number2가 더 큽니다.");
    if number2 % 2 == 0 :
        print("짝수입니다.");
    else :
        print("홀수입니다.");
'''
    



























