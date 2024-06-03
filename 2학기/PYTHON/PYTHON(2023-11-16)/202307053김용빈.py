# 실습1 문자열 함수 복습---------------
'''
instr = input("정수를 입력하세요>>");

a = 0;

for i in range(0, len(instr)) :                    

    print("♨" * int(instr[i])); 
'''

# 실습2 문자수 세기
'''
countDic = {};
inStr = input("문자열을 입력하세요 > ");

for ch in inStr :
    if 'A' <= ch and ch <= 'z' :
        if ch in countDic :
            countDic[ch] += 1;
        else :
            countDic[ch] = 1;
print("원문" + "*" * 50, "\n" + inStr);
print("-" * 20);
print("문자" + "    " + "빈도수");
print("-" * 20);



for i in sorted(countDic) :
    print(i, '\t     ', countDic[i]);
'''

# 실습3 단어 세기
'''
countDic = {};

inStr = input("여러 단어를 입력하세요 > ");

inList = inStr.split();

for ch in inList :
        if ch in countDic :
            countDic[ch] += 1;
        else :
            countDic[ch] = 1;
            
print("원문" + "*" * 50, "\n" + inStr);
print("-" * 20);
print("문자" + "    " + "빈도수");
print("-" * 20);



for i in sorted(countDic) :
    print(i, '\t      ', countDic[i]);
'''

# 실습4 시저 암호 만들기

# 암호화
'''
msg = input("암호화할 문장을 영어로 입력하세요.");
key = int(input("암호화 키(1~26 숫자)를 입력하세요."));

encode = '';

for a in msg :
    tmp = ord(a) + key;
    a = chr(tmp);
    encode = encode + a;
    
print("평    문 : ", msg);
print("암 호 키 : ", key);
print("암 호 문 : ", encode);

# 복호화

print("암호 복호화 하기");

decode = '';

for a in encode :
    tmp = ord(a) - key;
    a = chr(tmp);
    decode = decode + a;
    
print("복호문 : ", decode);
'''


