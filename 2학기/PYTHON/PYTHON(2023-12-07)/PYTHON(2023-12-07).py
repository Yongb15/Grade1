# 실습 1 - 사진앨범
'''
from tkinter import*

## 전역 변수 선언 부분 ##

fnameList = []

for i in range(1,10) :
    fnameList.append("jeju" + str(i) + ".gif")
photoList = [None]*9
num = 0

## 함수 선언 부분 ##

def clickNext() :                                                                   # 다음 페이지
    global num
    
    num += 1

    if num > 8 :
        num = 0
    photo = PhotoImage(file = "gif/" + fnameList[num])
    pLabel.configure(image = photo)
    pLabel.image = photo
    file_name.configure(text = "현재 이미지 : " + fnameList[num])                   # 추가된 레이블

def clickPrev() :                                                                   # 다음 페이지
    global num

    num -= 1

    if num < 0 :
        num = 8
    photo = PhotoImage(file = "gif/" + fnameList[num])
    pLabel.configure(image = photo)
    pLabel.image = photo
    file_name.configure(text = "현재 이미지 : " + fnameList[num])                   # 추가된 레이블

## 메인 코드 부분

window = Tk()
window.geometry("700x500")
window.title("사진 앨범 보기")

btnPrev = Button(window, text = "<< 이전", command = clickPrev)
btnNext = Button(window, text = "다음 >>", command = clickNext)
file_name = Label(window, text = "")                                                # 추가된 레이블

photo = PhotoImage(file = "gif/" + fnameList[0])
pLabel = Label(window, image = photo)

file_name.place(x = 80, y = 10)                                                     # 추가된 레이블
btnPrev.place(x = 250, y = 10)
btnNext.place(x = 400, y = 10)
pLabel.place(x = 15, y = 50)

window.mainloop()
'''

# 실습 2 - 그림판
'''
from tkinter import*

mycolor = 'blue'
i = 4

def paint(event) :
    global i
    
    x1, y1 = (event.x),(event.y)
    x2, y2 = (event.x + i),(event.y + i)

    canvas.create_oval(x1,y1,x2,y2, fill = mycolor, outline = mycolor)

def change_color1() :
    global mycolor
    mycolor = 'red'

def change_color2() :
    global mycolor
    mycolor = 'black'

def size_up() :
    global i
    i += 10

def size_down() :
    global i

    i -= 10
    
    if i <= 0 :
        i = 1
    
window = Tk()

canvas = Canvas(window, width = 300, height = 300, bg = 'white')
canvas.pack()
canvas.bind("<B1-Motion>", paint)

button1 = Button(window, text = "빨   강", command = change_color1)
button2 = Button(window, text = "검   정", command = change_color2)
button3 = Button(window, text = "크기 키우기", command  = size_up)
button4 = Button(window, text = "크기 줄이기", command  = size_down)


button1.pack(side = LEFT)
button2.pack(side = LEFT)
button3.pack(side = LEFT)
button4.pack(side = LEFT)

window.mainloop()
'''

# 키보드 이벤트
'''
from tkinter import *

win = Tk()

def right(event) : # 키보드 오른쪽 화살표 눌리면 실행되는 함수

    canvas.move(Image, 10, 0)

def left(event) : # 키보드 왼쪽 화살표 눌리면 실행되는 함수

    canvas.move(Image, -10, 0)

def up(event) : # 키보드 위쪽 화살표 눌리면 실행되는 함수

    canvas.move(Image, 0, -10)

def down(event) : # 키보드 아래쪽 화살표 눌리면 실행되는 함수

    canvas.move(Image, 0, 10)

canvas = Canvas(win, width = 1000, height = 500)

canvas.pack()

png3 = PhotoImage(file = 'gif/pie.gif')

Image = canvas.create_image(500, 200, image = png3)

win.bind('<Right>', right)
win.bind('<Left>', left)
win.bind('<Up>', up)
win.bind('<Down>', down)
win.mainloop()
'''

# 실습 3 - 명화 감상
'''
from tkinter import*
from tkinter.filedialog import*

## 파일 입출력
'''
'''
    한 행씩 읽기 -> readline()
    한 번에 모두 읽기 -> readlines(), read()
    한 행씩 쓰기 -> writelines()
    한 번에 모두 스기 -> write()
    
'''
'''
## 함수 선언 부분 ##

def func_open() :
    filename = askopenfilename(parent = window, filetypes = (("GIF 파일", "*.gif"), ("모든 파일", "*.*")))            # 열기모드에서 b는 br, bw처럼 붙여쓰기 가능
    photo = PhotoImage(file = filename)
    pLabel.configure(image = photo)
    pLabel.image = photo
    
def func_exit() :
    window.quit()
    window.destroy()

## 메인 코드 부분 ##

window = Tk()
window.geometry("400x400")
window.title("명화 감상하기")

photo = PhotoImage()
pLabel = Label(window, image = photo)
pLabel.pack(expand = 1, anchor = CENTER)

mainMenu = Menu(window)
window.config(menu = mainMenu)
fileMenu = Menu(mainMenu)                   # tearoff=0 : 메뉴 창 분리 x
mainMenu.add_cascade(label = "파일", menu = fileMenu)
fileMenu.add_command(label = "파일 열기", command = func_open)
fileMenu.add_separator()
fileMenu.add_command(label = "프로그램 종료", command = func_exit)
'''

# 키보드로 입력 내용을 파일로 출력 writelines
'''
outFp = None
outStr = ""

outFp = open("write1.txt", "w")               # 쓰기 전용으로 열기

while True :

    outStr = input("내용 입력 ")

    if outStr != "" :
        outFp.writelines(outStr + "\n")

    else  :
        break
    
outFp.close()
'''

inFp = None
inStr = ""

inFp = open("write1.txt", "r")

while True :

    inStr = inFp.readline()

    if inStr == "" :
        break

    print(inStr.strip())                    # .strip() : 필요없는 개행문자 삭제
inFp.close()



























    


























