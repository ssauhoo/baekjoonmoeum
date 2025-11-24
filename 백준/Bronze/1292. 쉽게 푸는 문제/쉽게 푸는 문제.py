a, b = map(int, input().split())
cnt = 0  
num = 0  
total = 0

while cnt < b:
    num += 1
    for _ in range(num):
        cnt += 1
        if a <= cnt <= b:
            total += num
        if cnt == b:
            break

print(total)
