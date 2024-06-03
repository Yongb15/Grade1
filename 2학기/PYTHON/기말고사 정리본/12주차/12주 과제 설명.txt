# 문제 8번

'''
pwd = "";
while True :
    pwd = input("비밀번호를 입력하세요 : ")

    if len(pwd) < 8 :
        print("비밀번호는 8자리 이상입니다.")
        continue
    if pwd.isalpha() == True :
        print("비밀번호는 영문자와 숫자의 조합입니다.")
    elif pwd.isdigit() == True :
        print("비밀번호는 영문자와 숫자의 조합입니다.")
    else :
        print("비밀번호는 {}입니다.".format(pwd))
        break
'''

# 문제 9번
'''
a = '';

while True :
    a = input("Data 입력 (이름 학번 주소) : ").split();

    if a[0].isalpha() and a[1].isdigit() and a[2].isalnum() :
        a[0] = a[0].upper()
        a[2] = a[2].title()
        print(a)
        break
'''

# 문제 10번
# 대문자, 소문자, 숫자, 한글, 기타
'''
numC, lowerC, upperC, hanC, etcC = [0] * 5          # 0으로 초기화

ch = ''                                             # 공백으로 초기화
inStr = ''                                          # 공백으로 초기화

inStr = input("문자열을 입력하세요 : ")

for ch in inStr :
    if ord(ch) >= ord('A') and ord(ch) <= ord('Z') :                # 대문자
        upperC += 1
    elif ord(ch) >= ord('a') and ord(ch) <= ord('z') :              # 소문자
        lowerC += 1
    elif ord(ch) >= ord('0') and ord(ch) <= ord('9') :              # 숫자
        numC += 1
    elif ord(ch) >= ord('가') and ord(ch) <= ord('힣') :            # 한글
        hanC += 1
    else :
        etcC += 1
print("대문자 : {}, 소문자 : {}, 숫자 : {}, 한글 : {}, 기타 : {}".format(upperC, lowerC, numC, hanC, etcC))
'''

# 실습 1
'''
def add(x, y) :
    a = x + y
    b = x - y
    c = x * y
    d = x // y
    e = x % y
    return a,b,c,d,e

a, *sum, e = add(20,10)
print(sum)
'''

# 문제 1번
'''
def score_info(math) :
    a = len(math)
    b = max(math)
    c = min(math)
    d = sum(math) / a

    return a, b, c, d

math = [10,20,30,40,50,60,70,80,90,100]

a,b,c,d = score_info(math)

print("학생 수는 {}명입니다.".format(a))
print("최고점 : {}".format(b))
print("최소점 : {}".format(c))
print("평균 : {}".format(d))
'''

# 문제 2번
'''
def g(x, y, z) :

    gap = 0
    
    if x == '+' :
        gap = y + z
    elif x == '-' :
        gap = y - z
    elif x == '*' :
        gap = y * z
    else :
        gap = y / z
    return gap
    
a = input("연산자를 입력하세요(+,-,*,/) : ")    
num1 = int(input("첫 번째 수를 입력하세요 : "))
num2 = int(input("두 번째 수를 입력하세요 : "))

b = g(a, num1, num2)

print("{} {} {} = {}".format(num1, a, num2, b))
'''

# 문제 3번
'''
def plus(s, p) :
    for i in range(len(s)) :
        s[i] += p
    return s

score = [90,88,84,77,85,97,60,66,79,93]

p_num = int(input("가산 점수 입력 : "))

print("가산 전 성적 : {}".format(score))
print("{}점씩 가산한 최종 성적 : {}".format(p_num, plus(score, p_num)))
'''

# 문제 4번
'''
def multiply(*args) :                           # 매개변수의 수를 안정해도 됨

    s = 1

    for i in args :
        s = s * i
    return s
    
sum = multiply(5, 7 ,9)
print("multiply(5,7,9) 매개변수가 3대인 함수를 호출한 결과 --> {}".format(sum))
sum = multiply(1, 2, 3, 4)
print("multiply(1,2,3,4) 매개변수가 4개인 함수를 호출한 결과 --> {}".format(sum))
sum = multiply(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print("multiply(1,2,3,4,5,6,7,8,9,10) 매개변수가 10개인 함수를 호출한 결과 --> {}".format(sum))
'''



















            
        
    
