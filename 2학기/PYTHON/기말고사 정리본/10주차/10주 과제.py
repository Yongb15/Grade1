
# 실습1 가위바위보 게임
'''
import random as r                                  # random 대신 r을 사용하기 위해 r을 사용

w_cnt = 0
l_cnt = 0
b_cnt = 0

while True :

    user = int(input('가위 : 1, 바위 : 2, 보 : 3 종료 : 4 '))

    if user == 4 :
        print("종료 되었습니다.")
        print("{} {} {}", w_cnt, l_cnt, b_cnt)
        break
    
    com = r.randint(1, 3)                               # randint() : 숫자 범위 모두 포함
    
    print('user : {}, computer : {}'.format(user, com))

    if user == com :
        print("비겼습니다!")
        b_cnt += 1
    elif (user == 1 and com == 3) or (user == 2 and com == 1) or (user == 3 and com == 2) :
        print("user 승!")
        w_cnt += 1
    else :
        print("com 승ㅠ")
        l_cnt += 1
'''

# 실습2 가위바위보 list, dict 사용
'''
import random as r                                          # random 대신 r을 사용하기 위해 r을 사용

str=['', '가위', '바위', '보']

rule = {1:3, 2:1, 3:2}

while True :
    print('-' * 40)
    
    user = int(input('가위 : 1, 바위 : 2, 보 : 3 종료 : 4 '))

    if user == 4 :
        print("종료 되었습니다.")
        break
    
    com = r.randint(1, 3)                                   # randint() : 숫자 범위 모두 포함
    
    print('user : {}, computer : {}'.format(str[user], str[com]))
    print('-' * 40)

    if user == com :
        print("아~ 비겼습니다ㅏㅏ")
    elif rule[user] == com :
        print("user가 이겼습니다ㅏㅏ")
    else :
        print("아 computer가 이겼습니다ㅜㅜ")
'''

# 실습3 set 자료형으로 만드는 lotto 번호
'''
import random as r

lucky_set = set()

while len(lucky_set) < 6 :

    n = r.randint(1,45)                                     # 1 부터 45 사이의 숫자를 받음
    lucky_set.add(n)

lucky = list(sorted(lucky_set))
print(lucky)    
'''

# 실습4 두 수를 입력받아 각각의 약수를 구하고 두 수의 공약수를 구하는 프로그램을 작성하라. (집합, for, if)
'''
f_num = int(input("첫 번째 수를 입력하세요! : "))
n_num = int(input("두 번째 수를 입력하세요! : "))

f_set = set()                                               # 첫 번째 약수
n_set = set()                                               # 두 번째 약수

for i in range(1, f_num+1) :
    if f_num % i == 0 :
        f_set.update([i, f_num])
print("첫 번째 수의 약수는 {}".format(sorted(f_set)))

for i in range(1, n_num+1) :
    if n_num % i == 0 :
        n_set.update([i, n_num])
print("두 번째 수의 약수는 {}".format(sorted(n_set)))

print("{}와 {}의 공약수는".format(f_num, n_num))
print("{}".format(sorted(f_set & n_set)))
'''

# 실습5 컴프리헨션으로 수정하기
'''
f_num = int(input("첫 번째 수를 입력하세요! : "))
n_num = int(input("두 번째 수를 입력하세요! : "))

f_set = set(i for i in range(1, f_num+1) if f_num % i == 0)                                               # 첫 번째 약수
n_set = set(i for i in range(1, n_num+1) if n_num % i == 0)                                               # 두 번째 약수

print("첫 번째 수의 약수는 {}".format(sorted(f_set)))
print("두 번째 수의 약수는 {}".format(sorted(n_set)))

print("{}와 {}의 공약수는 {}".format(f_num, n_num, sorted(f_set & n_set)))
'''

# 실습6 number list 내부에 들어있는 숫자가 몇 번 등장하는지를 출력하는 프로그램
'''
import random

number = []
counter = {}

# 숫자 10개를 요소로 갖는 리스트 생성

number = [random.randint(1,9) for i in range(10)]
print("number", number)

# 숫자 등장 횟수 계산 - 딕셔너리 사용

for i in number :
    if i not in counter :
        counter[i] = 1
    else :
        counter[i] = counter[i]+1

# 결과 출력

for key in sorted(counter) :
    print(key, " : ", counter[key])
'''

# 실습7 암호 해독 사전 만들기

secret_msg = ""
key_list = []
value_list = []

key_list = [chr(i) for i in range(97, 123)]                     # chr()은 아스키코드에 해당하는 문자로 변환
value_list = list(set('abcdefghijklmnopqrstuvwxyz'))

secret_code = dict(zip(key_list, value_list))

for key_, value_ in secret_code.items() :
    print("{} -> {}".format(key_, value_), end = ' , ')

# 암호화 하기

msg = list(input("암호화 할 단어를 입력하세요. >>> "))

for i in msg :
    secret_msg += secret_code[i]
    print(secret_code[i], end='')

# 복호화 하기

print()
print("복호화 결과")

decode = dict(zip(value_list,key_list))

for i in secret_msg :
    print(decode[i], end="")
























