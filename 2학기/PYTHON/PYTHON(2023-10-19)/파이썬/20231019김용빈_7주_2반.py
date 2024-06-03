# 실습 1 --------------------------------------------------------------------------------
# up-down 게임

import random                       # random 함수

my_num = 0;
bring_num = int(input("범위를 입력하세요 : "));

com_num = random.randrange(1,bring_num+1);   # randrange(시작값 ,종료값 - 1), 끝 값이 포함 x
chance_num = int(input("기회는 몇 번? : "));

for i in range(1,chance_num+1):
    my_num = int(input("예상하는 {}번째 숫자를 입력하세요. : ".format(i)));
    if my_num == com_num :
        print("★와우~! 정답입니다★");
        break;
    elif my_num < com_num :
        print("up~");
    else :
        print("down~");
else :                              # for문에도 else가 있다(정상적으로 빠져나왔을 경우)
    print("아쉽게도 정답은 {}입니다.".format(com_num));   # for문 정상 종료했을 경우 실행

print("게임을 종료합니다"); # 무조건 출력


# 실습 2 while 응용 ----------------------------------------------------------------------
# lotto 번호 추첨 ver1      
# 1 ~ 45
'''
import random

cnt = 0;

while cnt < 6 :
    
    n = random.randint(1,45)                # (n, m) 일시 m범위까지 포함

    print(n, end=" ");

    cnt += 1;
'''


# 실습 3 while 응용 ----------------------------------------------------------------------
# lotto 번호 추첨 ver2
'''
import random

lucky=[];

cnt = 0;

while cnt < 6 :
    
    n = random.randint(1,45);

    if n not in lucky :                                        # not in
        lucky.append(n);
        cnt += 1;

# lucky.sort();
# print(lucky);
print(sorted(lucky));
'''

'''
import random

lucky=[];

cnt = 0;

while cnt < 6 :
    
    n = random.randint(1,45);

    if n in lucky :                                           # in
        continue;
    lucky.append(n);
    cnt += 1;
# lucky.sort()
# print(lucky);
print(sorted(lucky));
'''


# 실습 4
# 2차원 리스트 실습
'''
r_sum, c_sum = [0,0,0,0], [0,0,0,]; 
list1=[];
list2=[];
value = 1;
hap = 0;

for i in range(0, 3) :                                       # 0, 1, 2 
    for k in range(0, 4) :                                   # 0, 1, 2, 3
        list1.append(value);
        value += 1;
                                                             # 행 하나씩 완성
    list2.append(list1);                                     # list2에 list1의 값이 들어감
    list1 = [];

for i in range(0, 3) :                                       # 행
    for k in range(0, 4) :                                   # 열
        print("%3d" %list2[i][k], end=" ");   
    print();
            
for i in range(0, 3):
    for k in range(0, 4):
        hap += list2[i][k];
    c_sum[i] = hap;
    hap = 0;
print(c_sum);

for i in range(0, 4) :
    for k in range(0, 3):
        hap += list2[k][i];
    r_sum[i] = hap;
    hap = 0;
print(r_sum);
'''


'''
5. 상담 요일을 무작위(랜덤)로 정하는 프로그램이다. week라는 list 안에 ‘월요일’부터 ‘일요일’까지 들어가 있고, 
사용자가 0부터 6까지의 숫자를 아무거나 입력하면 그에 맞는 요일이 출력되면서 상담 요일이 출력되는 프로그램을 작성하시오.


week = ['월요일', '화요일', '수요일', '목요일', '금요일', '토요일', '일요일']

day = int(input("0부터 6까지 숫자 중 하나만 입력: "))

print("당신의 상담은 {}입니다.".format(week[day]))
'''

'''
6. 팀을 이뤄서 참가할 수 있는 어떤 공모전이 있다. 팀원은 최소 1명부터 3명까지 구성할수 있다.
이 공모전에 참가한 한 팀을 보면 민지, 경희, 상구, 철수, 지민으로 구성되어 있는 팀이 있다.
이 팀의 팀원 수를 구하고, 3명보다 많으면 구성원을 줄이라고 출력하는 프로그램을 작성하시오.
'''
'''
tim_won = ['민지', '경희', '상구', '철수', '지민']

print("공모전에 출전한 팀입니다.")
print("{}".format(tim_won))

if len(tim_won) > 3 :
    print("팀원은 최대 3명까지 입니다. 줄이세요")
'''

'''
7. 수학 시험을 5회 응시한 후 점수를 각각 90점, 75점, 30점, 100점, 85점을 받았다.
이 점수들을 각각 score라는 list 안에 저장했다.
list의 평균을 계산하는 프로그램을 작성하시오.( 힌트-len() 사용)
'''
'''
score = [90, 75, 30, 100, 85]
sum_score = 0;

for i in range(0, len(score)) :
    sum_score += score[i]
    print("{}점,".format(score[i]), end="")

print("평균은 {}점".format(sum_score/len(score)))

'''
# 8. days에는 1월부터 12월까지 그 달에 포함된 일수가 정리되어 있다. for문을 사용하여 ‘O달의 날짜 수는 O일 입니다.’ 라고 출력하는 프로그램을 작성하시오.
'''
days = [31,29,31,30,31,30,31,31,30,31,30,31]

for i in range(0,12) :
    print("{:2d} 월의 날짜 수는 {}일 입니다.".format(i+1, days[i]))
'''

# 9. 10개의 정수를 입력받아 리스트에 저장하고 최대값을 출력하는 프로그램을 작성하시오.
'''
i_num = []
i_max = 0
i_min = 0

for i in range(0,10) :
    num = int(input("{}번째 정수를 입력하세요 : ".format(i+1)))
    i_num.append(num)
    if num > i_max :
        i_max = num
        
print("가장 큰 수는 {}입니다".format(i_max))
'''






