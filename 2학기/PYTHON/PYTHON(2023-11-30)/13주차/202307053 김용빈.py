# 12주 과제 1번
'''
def score_info(score) :

    a = len(score)
    b = max(score)
    c = min(score)
    d = sum(score)

    return a, b, c, d

score = [90, 88, 84, 77, 85, 97, 60, 66, 79, 93]

score_len, score_max, score_min, score_sum = 0, 0, 0, 0;

score_len, score_max, score_min, score_sum = score_info(score)

print("학생수는 {}명입니다.".format(score_len))
print("최고점 : {}".format(score_max))
print("최저점 : {}".format(score_min))
print("평균 : {}".format(score_sum / score_len))
'''

# 12주 과제 2번
'''
def a_score(score, p_score) :
    for i in range(0, len(score)) :
        score[i] += p_score
        if score[i] > 100 :
            score[i] = 100

score = [90, 88, 84, 77, 85, 97, 60, 66, 79, 93]

p_score = int(input("가산 점수 입력 : "))

print("가산 전 성적 : {}".format(score))

a_score(score, p_score)

print("{}점씩 가산한 최종 성적 : {}".format(p_score, score))
'''
'''
from tkinter import *
# tkinter는 파이썬에서 GUI 관련 모듈 제공해주는 표준 윈도 라이브러리

window = Tk()
# 부모 윈도우
# Tk()는 기본이 되는 윈도를 반환, 이를 루트 윈도 또는 베이스 윈도라고 함. 
# 이 부분에서 화면을 구성하고 처리

entry = Entry(window)
# Entry안에 window를 만들고 변수에 대입
entry.pack()
# 배치관리자 중 하나
# pack()있어야 배치 가능

window.title("윈도창 연습")
# 창 이름

window.geometry("400x100")
# 가로 400 x 세로 100

window.resizable(width = FALSE, height = FALSE)
# 크기 변경 X

window.mainloop()
# 위 행에서 베이스 윈도를 window 변수에 넣고 window.mainloop() 함수 실행

# 위젯의 이름 첫 글자는 대문자
# .configure(옵션) : 제일 많이 사용
'''

# 도전횟수 추가 할 때 활용
'''
from tkinter import *

def cnt() :
    global count 
    count += 1
    label2.config(text = count)

def in_txt() :
    msg = ent.get()
    label3.config(text = msg)

    
count = 0

window = Tk()

photo = PhotoImage(file = "rock.png")
label = Label(window, image = photo)
label2 = Label(window, text = count)
label3 = Label(window, text = "")
btn = Button(window, text="눌러봐~", command = cnt)
btn1 = Button(window, text="in_txt", command = in_txt)
ent = Entry(window, font=("맑은고딕", 30))

ent.pack()
btn.pack()
label.pack()
label2.pack()
label3.pack()
btn1.pack()

window.mainloop()
'''

# 가위바위보 게임
'''
from tkinter import *
import random as r

def pass_s() :
    choice("가위")
    
def pass_r() :
    choice("바위")
    
def pass_p() :
    choice("보")
           
def choice(human) :
    computer = r.choice(["가위", "바위", "보"])

    if computer == "바위" :
        com_image["image"] = rock_image
    elif computer == "보" :
        com_image["image"] = paper_image
    else :
        com_image["image"] = scissors_image

    if victory[computer] == human :
        result = "인간 승리!"
    elif computer == human :
        result = "비겼습니다."
    else :
        result = "컴퓨터 승리!"

    output.config(text = "인간 : " + human + "   컴퓨터 : " + computer + "       " + result)


victory = {"바위":"보", "가위":"바위", "보":"가위"}       # 필승

win = Tk()

rock_image = PhotoImage(file = "rock.png")
paper_image = PhotoImage(file="paper.png")

scissors_image = PhotoImage(file="scissors.png")

 

# 위젯 생성

msg1 = Label(win, text="선택하세요", font=("맑은 고딕", "16"))

rock = Button(win, image=rock_image, command=pass_r)

paper = Button(win, image=paper_image, command=pass_p)

scissors = Button(win, image=scissors_image, command=pass_s)

msg2 = Label(win, text="컴퓨터는 다음을 선택하였습니다.", font=("맑은 고딕", "16"))

com_image = Label(win, image=rock_image)

output = Label(win, text="", font=("맑은 고딕", "16"))

 

# 위젯 배치

msg1.grid(row=0, column=0, columnspan = 3)

scissors.grid(row=1, column=0)

rock.grid(row=1, column=1)

paper.grid(row=1, column=2)

msg2.grid(row=2, column=0,columnspan = 3)

com_image.grid(row=3, column=0,columnspan = 3)

output.grid(row=4, column=0,columnspan = 3)

'''

# up-down 게임

from tkinter import *
import random as r

def inNum() :

    global count
    global num1
    
    num = int(ent_inNum.get())

    if num == comNum :
        lab_M.config(text = "정답입니다.")
    elif num > comNum :
        lab_M.config(text = "DOWN")
    else :
        lab_M.config(text = "UP")

    count += 1
    lab_C.config(text = count)
    
    num1 += ent_inNum.get() + ", "
    lab_Y.config(text = num1)
    
def reset() :
    global comNum

    comNum = r.randint(0, 50)
    ent_inNum.delete(0, END)

    lab_M.config(text = "1~100까지 숫자 중 선택!")

    count = 0
    lab_C.config(text = count)

    num1 = ""
    lab_Y.config(text = num1)
    
# main

msg = "1 ~ 100까지 숫자 중 선택!"
comNum = r.randint(0, 100)
count = 0
num1 = ""

win = Tk()
win.title("13주 과제 -- UP DOWN GAME")

lab_T = Label(win, text="도전횟수 : ", font = ("맑은고딕", 15), height = 2)
lab_C = Label(win, text=count)
lab_M = Label( win, text = msg, width = 20, font = ("맑은고딕", 12), height = 2)
lab_Y = Label(win, text = num1, bg = "yellow", width = 80, height = 2)
ent_inNum = Entry( win, width = 45, font = ("맑은고딕", 18), bg = "yellow green")
btn_inNum = Button( win, width = 20, text = "숫자 입력", font = ("맑은고딕", 15), command = inNum)
btn_reSet = Button( win, width = 15, text = "다시 도전", font = ("맑은고딕", 15), command = reset)
btn_end = Button( win, width = 20, text = "게임 종료", font = ("맑은고딕", 15), command = quit)

lab_M.grid(row = 0, column = 0, columnspan = 2)
lab_T.grid(row = 0, column = 2, columnspan = 2)
lab_C.grid(row = 0, column = 3)
ent_inNum.grid(row = 1, column = 0, columnspan = 4)
btn_inNum.grid(row = 2, column = 0, columnspan = 2)
btn_reSet.grid(row = 2, column = 2)
btn_end.grid(row = 2, column = 3)
lab_Y.grid(row = 3, columnspan = 4)

win.mainloop()
































