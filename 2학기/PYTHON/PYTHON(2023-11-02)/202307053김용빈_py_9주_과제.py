# 6번 문제
'''
arr = (1,2,3)
brr = list(arr)
s = brr[1]
brr[1] = brr[2]
brr[2] = s
print(brr)
'''
# 11번 문제

members = {}

while True :
    select = int(input("1. 회원가입, 2. 프로그램 종료    "))
    
    if select == 1 :
        _id = input("아이디를 입력하세요 : ")
        _pw = int(input("비밀번호를 입력하세요. : "))
        print()
        members[_id] = _pw
    if select == 2 :
        print("-" * 20)
        print("아이디 : 비밀번호")
        print("-" * 20)        

        for key in members.keys() :
            print(key, '\t', members[key])
        print("-" * 20)
        break

# 12번 문제
'''
quiz = (['3 + 2',5,3],['5/2의 몫',2,5],['10-2',8,3],['1-(10/4의 나머지)',-1,5],['4*2+(100)',108,3],['3*7*1+2',23,5],['12/3*7',28,3])
O_cnt = 0
X_cnt = 0
score = 0

for i in quiz :
    print("문제 : {}".format(i[0]))
    answer = int(input("정답을 입력하세요. "))

    if answer == i[1] :
        O_cnt += 1
        score += i[2]
    else :
        X_cnt += 1
print("----------------")
print("정답 개수 : {}".format(O_cnt))
print("오답 개수 : {}".format(X_cnt))
print("총점 : {}".format(score))
print("----------------")
'''

# 수업 예제 1번
'''
menu = {'Americano':2000, 'Cafe latte':2500, 'Green Tea latte':3000, 'Mocha latte':3500}
print('Americano' in menu.keys())
print('Vanila latte' in menu.keys())

for value in menu.values() :
    print(value)                                                  # 메뉴 명만 나옴
for key in menu.keys() :
    print(key)                                                    # 값만 나옴
'''
# 수업 예제 2번
'''
Goods_price = {'연필':200, '펜':800, '지우개':500, '자':300}

price = list(Goods_price.values())
print(price)
'''
