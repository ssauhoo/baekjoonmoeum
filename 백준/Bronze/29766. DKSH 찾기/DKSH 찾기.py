a = str(input())
cnt = 0
for i in range(0,len(a)-3):
    if(a[i] == 'D'):
        if(a[i+1] == 'K'):
            if(a[i+2] == 'S'):
                if(a[i+3] == 'H'):
                    cnt +=1
print(cnt)

