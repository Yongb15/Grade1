# 202307053 김용빈 - 6주

# for 실습1--------------
# range 생략 가능
'''
for i in 1,2,3,4,5 :                                # range를 생략하면 i값에 1, 2, 3이 차례대로 들어감.
    print(i, "월");
    print(i, "화");
    print(i, "수");

for i in range(1,4,1) :
    print(i, "월");
    print(i, "화");
    print(i, "수");
'''
'''
for i in "python" :                                 # 데이터세트에는 문자열도 가능
    print(i);
'''


# for 실습 2_구구단 - 2단 출력 -------
'''
# 입력받은 단도 출력 가능
j = int(input("단을 입력하세요 : "));

for i in range(1,10,1) :
    print('{:2d} *{:2d} = {:02d} '.format(j, i, j*i));
'''
'''
for i in range(1,10,1) :
    print('{:2d} *{:2d} = {:02d} '.format(j, i, j*i));
'''

# for 실습 3_구구단 2단부터 9단까지
# 구구단 - 세로로 출력
'''
for i in range(2,10,1) :
    print("----{}단----".format(i));
    for k in range(1,10,1) :
        print('{:02} *{:02} = {:02} '.format(i, k, k*i));
'''
# 구구단 - 가로로 출력
'''
for i in range(1,10,1) :
    for k in range(2,10,1) :
        print('{:02} *{:02} = {:02} '.format(k, i, k*i),end=' ');    
    print();                                                                    # 줄바꿈
'''

# 입력받은 단까지 출력

'''
i = int(input("단을 입력하세요 : "));

for j in range(2, i+1, 1) :
    for k in range(1, 10, 1) :
        print('{:2d}*{:2d}={:02d}'.format(j, k, j*k));
    print(" -----------");
'''   

# while 문
# 문장을 3회 반복하기
'''
i = 0;
while i < 3 :
    print("%d : 안녕하세요? while 문을 공부 중입니다. ^^" % i);
    i += 1
'''

# while 실습 4 -------------------------

'''
i = 1;

dan = int(input("몇 단 출력하시겠습니까? : "));

while i < 10 :
    print('{:02} *{:02} = {:02} '.format(i, dan, dan*i));
    i += 1;
'''

# 무한 반복(무한 루프)
'''
while True :
    print("KIN");
'''

# break 문
# 누적 합계가 1000 이상이 되는 시작 지점 알기 
'''
hap, i = 0, 0;

for i in range(1, 101) :
    hap += i;

    if hap >= 1000 :
        break;

print("1~100의 합계를 최초로 1000이 넘게 하는 숫자 : %d" % i);
'''

# continue 문
# 3의 배수 제외하고 더하기
'''
hap, i = 0, 0;

for i in range(1,101) :
    if i % 3 == 0 :
        continue;
    hap += i;
print("1~100의 합계(3의 배수 제외) : %d" % hap);
'''

# break, continue문 실습 5-------------
# 1: 계속, 0: 종료
# break문
'''
while True :

    i = input("[0] 종료 [1] 계속 ? ");

    if i == '0' :
        break;
print("종료");
'''

# continue 실습 6----------------------
# 1~10까지 정수 중 홀수만 출력
# 혼자하기_ 추가사항 - 홀수의 합 계산

hap = 0;

for i in range(10) :
    if i % 2 == 0 :
        continue;
    hap += i;
print("홀수의 합은 {}".format(hap));




































    
