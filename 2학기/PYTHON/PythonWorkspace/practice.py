'''print(5)
print(-10)
print(3.14)
print(1000)
print(5+3)
print(2*8)
print(3*(3+1))'''                          #숫자 자료형


'''print('풍선')
print("나비")
print("ㅋㅋㅋㅋㅋㅋㅋㅋㅋ")              #문자열 자료형
print("ㅋ"*9)'''

'''print(5 > 10)
print(5 < 10)
print(True)
print(False)
print(not True)
print(not False)
print(not (5 > 10))                     #불 자료형'''

#애완동물을 소개해 주세요~

'''animal = "고양이"
name = "해피"
age = 3
hobby = "낮잠"
is_adult = age >= 3

print("우리집 " + animal + "의 이름은 " + name + "에요")
name = "빛나"
print(name + "는 " + str(age) + "이며, " + hobby + "을 아주 좋아해요")
print(name + "는 어른일까요? " + str(is_adult))'''

'''Quiz) 변수를 이용하여 다음 문장을 출력하시오

변수명
: station

변수값
: "사당", "신도림", "인천공항" 순서대로 입력

출력 문장
: xx 행 열차가 들어오고 있습니다.'''

# station = "사당"

# print(station + " 열차가 들어오고 있습니다.")

# station = "신도림"

# print(station + " 열차가 들어오고 있습니다.")

# station = "인천공항"

# print(station + " 열차가 들어오고 있습니다.")

# print(1+1)  # 2
# print(3-2)  # 1
# print(5*2)  # 10
# print(6/3)  # 2

# print(2**3) # 2^3 = 8 2의 3제곱
# print(5%3) # 2 나머지 구하기
# print(10%3) # 1
# print(5//3) # 1 몫 구하기
# print(10//3) # 3

# print(10 > 3) # True
# print(4 >= 7) # False
# print(10 < 3) # False
# print(5 <= 5) # True

# print(3 == 3) # True
# print(4 == 2) # False
# print(3 + 4 == 7) # True

# print(1 != 3) # True
# print(not (1 < 3)) # False
# print(not(1 != 3)) # False

# print((3 > 0) and (3 < 5)) # True
# print((3 > 0) & (3 < 5)) # True

# print((3 > 0) or (3 > 5)) # True
# print((3 > 0) | (3 > 5)) # True

# print(5 > 4 > 3) #True
# print(4 > 4 > 7) #Flase

# print(2 + 3 * 4) # 14
# print((2 + 3) * 4) # 20
# number = 2 + 3 * 4 # 14
# print(number)
# number += 2        # 16
# print(number)
# number += 2        # 18
# print(number)
# number *= 2        # 36
# print(number)
# number /= 2        # 18
# print(number)
# number -= 2        # 16
# print(number) 
# number %= 5        # 1
# print(number)

# print(abs(-5))       # 5 절대값
# print(pow(4, 2))     # 16 4^2 제곱
# print(max(5, 12))    # 12 최대값
# print(min(5, 12))    # 5  최소값
# print(round(3.14))   # 3 반올림
# print(round(4.99))   # 5 반올림

# from math import *
# print(floor(4.99)) # 내림 4
# print(ceil(3.14))  # 올림 4
# print(sqrt(16))    # 제곱근 4

# from random import *
# print(random()) # 0.0 ~ 1.0 미만의 임의의 값 생성

# print(random() * 10) # 0.0 ~ 10.0 미만의 임의의 값 생성

# print(int(random() * 3)) # 0 ~ 10 미만의 임의의 값 생성
# print(int(random() * 3))
# print(int(random() * 3))

# print(int(random() * 10) + 1) # 1 ~ 10 이하의 임의의 값 생성
# print(int(random() * 10) + 1)
# print(int(random() * 10) + 1)
# print(int(random() * 10) + 1)
# print(int(random() * 10) + 1)
# print(int(random() * 10) + 1)

# print(int(random() * 45) + 1) # 1 ~ 45 이하의 임의의 값 생성
# print(int(random() * 45) + 1)
# print(int(random() * 45) + 1)
# print(int(random() * 45) + 1)
# print(int(random() * 45) + 1)
# print(int(random() * 45) + 1)

# print(randrange(1, 46)) # 1 ~ 46 미만의 임의의 값 생성
# print(randrange(1, 46))
# print(randrange(1, 46))
# print(randrange(1, 46))
# print(randrange(1, 46))
# print(randrange(1, 46))

# print(randint(1, 45)) # 1 ~ 45를 모두 포함한 임의의 값 생성
# print(randint(1, 45))
# print(randint(1, 45))
# print(randint(1, 45))
# print(randint(1, 45))
# print(randint(1, 45))

# Quiz 월 4회 스터디 3회는 온라인 1회는 오프라인 조건에 맞게 프로그램 작성

# 조건1 : 랜덤으로 날짜를 뽑아야 함
# 조건2 : 월별 날짜는 다름을 감안하여 최소 일수인 28 이내로 정함
# 조건3 : 매월 1 ~ 3일은 스터디 준비를 해야 하므로 제외

# 출력문 : 오프라인 스터디 모임 날짜는 매월 x 일로 선정되었습니다

# from random import * #random 필수!

# date = randint(4, 28)

# print("오프라인 스터디 모임 날짜는 매월 "+ str(date) + "일로 선정되었습니다.")

# Quiz 연산자를 이용해 온도 단위를 변환하는 프로그램 만들기

ondo = 10

hwa = ((ondo * 9 / 5) + 32)

print("섭씨 온도 : " + str(ondo))                                                    # str()은 문자열로 변환 
print("화씨 온도 : " + str(hwa))

sentence = '나는 소년입니다.'
print(sentence)
                                                                                    # sentence == 변수
sentence2 = "파이썬은 쉬워요"
print(sentence2)
                                                                                    # 줄 바꿈
sentence3 = """                                                                       
나는 소년이고,
파이썬을 쉬워요
"""
print(sentence3)

jumin = "990120-1234567"                                                        

print("성별 : " + jumin[7])                                                         # jumin[7] == 7번째 값 (1)
print("연 : " + jumin[0:2])                                                         # jumin[0:2] == 0부터 2직전까지 (0, 1)
print("월 : " + jumin[2:4])                                                         # jumin[2:4] == 2부터 4직전까지 (2, 3)
print("일 : " + jumin[4:6])                                                         # jumin[4:6] == 4부터 6직전까지 (2, 0)

print("생년월일 : " + jumin[0:6])                                                   # jumin[0:6] ==:@ 처음부터 6 직전까지
print("뒤 7자리 : " + jumin[7:])                                                    # jumin[7:] == 7부터 끝까지 (7, 8, 9, 10, 11, 12, 13)
print("뒤 7자리 (뒤에부터) : " + jumin[-7: ])                                       # jumin[-7: ] == 맨뒤에서 7번째 끝까지 

python = "Python is Amazing"
print(python.lower())                                                               # .lower() == 모든 문자 소문자 출력
print(python.upper())                                                               # .upper() == 모든 문자 대문자 출력 
print(python[0].isupper())                                                          # .isupper() == 변수의 0번째 문자가 대문자인지 확인!
print(len(python))                                                                  # len() == "Python is Amazing" <- 전체 문자열의 길이를 알려줌 (17줄)
print(python.replace("Python", "Java"))                                             # replace() == ("Python", "Java") -< "Python"를 "Java"로 바꿈

index = python.index("n")                                                           # .index("n") == "Python is Amazing"에서 n의 위치를 찾음.
print(index)
index = python.index("n", index + 1)                                                # .index("n", index + 1) == "Python is Amazing"에서 n의 첫 번째 위치가 아닌 그 다음 위치를 찾음.
print(index)