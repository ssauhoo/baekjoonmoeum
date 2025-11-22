a = int(input())
for i in range(a):
    ycnt = 0
    kcnt = 0
    for j in range(9):
        y, k =map(int,input().split())
        ycnt += y
        kcnt += k
    if(ycnt>kcnt):
        print("Yonsei")
    elif(kcnt>ycnt):
        print("Korea")
    else :
        print("Draw")
