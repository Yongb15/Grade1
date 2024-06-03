# 1번과제 - 사각형 그리기
'''
import turtle

t = turtle.Turtle()                 # 도화지만들기       
t.shape('turtle')                   # 기호를 거북이로 변경하기

t.forward(200)                      # 200만큼 전진
t.left(90)                          # 왼쪽으로 90도만큼 회전
t.forward(200)                      # 200만큼 전진
t.left(90)                          # 왼쪽으로 90도만큼 회전
t.forward(200)                      # 200만큼 전진
t.left(90)                          # 왼쪽으로 90도만큼 회전
'''

# 2번과제 - 삼각형 그리기
'''
import turtle

t = turtle.Turtle()                 # 도화지만들기       
t.shape('turtle')                   # 기호를 거북이로 변경하기

t.forward(200)                      # 200만큼 전진
t.left(120)                         # 왼쪽으로 120도만큼 회전
t.forward(200)                      # 200만큼 전진
t.left(120)                         # 왼쪽으로 120도만큼 회전
t.forward(200)                      # 200만큼 전진
'''

# 3번과제 - 원 그리기
'''
import turtle

t = turtle.Turtle()                 # 도화지만들기       
t.shape('turtle')                   # 기호를 거북이로 변경하기

t.pencolor('red')                   # 빨간색으로 그리기
t.width(5)                          # 선을 굵게(폭5)
t.circle(1000)                      # 반지름이 100인 원 그리기
'''

# 4번과제 - 연속 원 그리기
# 선의 두께를 사용자에게 입력받아 원 세 개 그리기
'''
import turtle

t = turtle.Turtle()                                 # 도화지만들기       
t.shape('turtle')                                   # 기호를 거북이로 변경하기

n = int(input("펜 두께를 정하세요 : (1 ~ 30) "))    # 펜 두께 입력받기  # 입력받으면 문자가 됨. # int로 형변환 해야함. # 실수는 float

t.pensize(n)                                        # 펜 크기
t.pencolor('sky blue')                              # 연하늘색
t.circle(200)                                       # 반지름이 200인 원 그리기
t.forward(50)                                       # 50만큼 이동

t.pensize(n)                                        # 펜 두꼐
t.pencolor('sky blue')                              # 연하늘색
t.circle(200)                                       # 반지름이 200인 원 그리기
t.forward(50)                                       # 50만큼 이동

t.pensize(n)                                        # 펜 두꼐
t.pencolor('sky blue')                              # 연하늘색
t.circle(200)                                       # 반지름이 200인 원 그리기
'''

# 5번과제 - 각도를 입력받아 회전하며 원 그리기
'''
import turtle

t = turtle.Turtle()                                         # 도화지만들기       
t.shape('turtle')                                           # 기호를 거북이로 변경하기

angle = int(turtle.textinput("창", "각도를 정하세요 : "))   # 첫 번째 인수는 윈도우 창의 이름이고 두 번째 인수는 창에 나오는 문구이다.

for i in range(10) :                                        # range(초기값, 조건식 - 1, 증감식) : 숫자를 만듬 # 초기값을 넣지 않으면 0부터 시작
    print(i)
    t.pensize(10)                                           # 펜 두꼐
    t.pencolor('sky blue')                                  # 연하늘색
    t.circle(100)                                           # 반지름이 200인 원 그리기
    t.right(angle)                                          # angle만큼 회전
'''

# 6번과제 - 간단한 계산기
'''
op1 = int(input("계산할 첫 번째 숫자를 입력하세요 "))       # 입력받으면 문자가 됨. # int로 형변환 해야함. # 실수는 float 
op2 = int(input("계산할 두 번째 숫자를 입력하세요 "))       # 입력받으면 문자가 됨. # int로 형변환 해야함. # 실수는 float 

print(op1, '+', op2, '=', op1 + op2)                        # 더하기                               
print(op1, '-', op2, '=', op1 - op2)                        # 빼기
print(op1, '*', op2, '=', op1 * op2)                        # 곱하기
print(op1, '/', op2, '=', op1 / op2)                        # 나누기
'''

답 : 
1. 여러줄 : ''', 한 줄 : #
2. type()
3. 변수
4. input()
5. print()
6. int()
7. float()
8. 특정 업무를 수행하기 위한 절차 또는 명령어의 집합



