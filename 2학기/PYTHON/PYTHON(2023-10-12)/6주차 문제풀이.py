'''
1. 회사의 한 부서에 부장, 과장, 대리, 사원, 인턴이 있다. 각 직급별로 연봉이 다르다.
부장의 연봉은 9,000만원, 과장의 연봉은 6,500만원, 대리의 연봉은 4,000만원, 사원의 연봉은3,000만원,
인턴의 연봉은 1,000만원이다.
수지가 인턴에서 사원으로 정직원 채용이 되어서 본인의 연봉을 알고 싶어 한다.
다음 요구사항을 만족하는 프로그램을작성하시오.
• 이름을 입력 받는다.
• 현재 직급을 번호로 입력 받는다. (1:부장, 2:과장, 3:대리, 4:사원, 5:인턴)
• 만약, 직급으로 지정된 번호 외에 다른 번호가 입력되면 잘못 입력되었다고 출력한다.
'''
'''
money = 0
name = input("이름을 입력하세요: ")

print("1.부장 2.과장 3.대리 4.사원 5.인턴")

rank = int(input("현재 직급을 입력하세요: "))

if rank == 1:
    money = 9000
    rank_name = "부장"
elif rank == 2:
    money = 6500
    rank_name = "과장"
elif rank == 3:
    money = 4000
    rank_name = "대리"
elif rank == 4:
    money = 3000
    rank_name = "사원"
else:
    money = 1000
    rank_name = "인턴"

print("{} {}의 연봉은 {}만원 입니다.".format(name, rank_name, money))
'''
'''
#문제 2번
n = 5
step = 0
sum = 2

while step <= n :           
    sum += step
    step += 1
print(sum)
'''
# 17

'''
# 문제 3번

while(True):
    n = int(input("Enter the number : "))
    if n == 0 :
        break
    print(n)
'''
'''
# 문제 4번
# for문, while문
'''
'''
# 문제 5번
# sum에 어떤 값이 있어야 누적이 되는데 sum자체가 존재하지 않아 더할 값이 없음
'''
'''
# 문제 6번
# 10부터 20 사이에 홀수를 출력하는 프로그램을 for문을 사용하여 작성하시오.

for i in range(10, 21):
    if i % 2 == 1:
        print(i, end = " ")
'''
'''
# 문제 7번
# 사용자에게 양의 정수 n을 입력 받아 1부터 n까지 짝수들의 합을 구하고자 한다.
# for문을 사용하여 작성하시오.

i_sum = 0
n = int(input("정수 입력: "))

for i in range(1, n+1):
    if i % 2 == 0:
        i_sum += i
print("1~{}까지 짝수의 합 : {}".format(n, i_sum))
'''
'''
for i in range(2, 10):
    for j in range(1, 10):
        print("{} * {} = {}".format(i, j, i*j))
    print()

for i in range(1, 10):
    for j in range(2, 10):
        print("{} * {} = {} ".format(j, i, j*i), end = "")
    print()
'''
'''
for i in 1,2,3,4,5 : # range를 생략하면 i값에 1, 2, 3이 차례대로 들어감.
    print(i, "월"); print(i, "화"); print(i, "수");
for i in range(1,4,1) :
    print(i, "월"); print(i, "화"); print(i, "수");
for i in "python" : # 데이터세트에는 문자열도 가능
    print(i);
'''
'''
while(True) :
    n = int(input('Enter the number : '))
    if n==0 :
        break
    print(n)
   '''
'''
for i in range(2, 10, 1) :
    for j in range(1, 10, 1) :
        print("{} * {} = {}".format(i, j, i*j))
    print()
'''






    
