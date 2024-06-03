#1  간단한 성적 계산기
'''
name = input('이름을 입력하세요 ')
kor = int(input('국어 성적을 입력하세요 '))
eng = int(input('영어 성적을 입력하세요 '))
math = int(input('수학 성적을 입력하세요 '))

test_sum = kor + eng + math
test_avg = test_sum / 3

print(name, "님 성적은 ")
print("총점은 :",test_sum , "점", "평균 :",test_avg ,"점입니다.")
'''

#2 변수를 이용한 문자열 저장 -----------------
'''
name = input('이름 입력 ')

star = '*' * 20

print(star)                             # *(20개) 출력
print("%10s" %name)                     # 10자리 확보
print(star)                             # *(20개) 출력
print("\n")
print(star, name, star)                 # 연달아 출력
'''

# 3번
'''
x = int(input("x의 값을 입력하세요! "))
print('@' *  x )
'''
# 4번

num_pencil = int(input("연필을 몇 개를 구입하시겠습니까? "))
num_pen = int(input("펜은 몇 개를 구입하겠습니까? "))
total_price = (num_pencil * 3000) + (num_pen * 4000)
print("총 가격은 ", end="")
print(int(total_price - (total_price * 0.3)), end="")
print("원입니다.", end="")
      

