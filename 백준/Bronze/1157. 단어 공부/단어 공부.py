a = input().upper()
word = list(set(a))

cnt = []
for i in word:
    cnt.append(a.count(i))

if cnt.count(max(cnt))>1:
    print("?")
else :
    print(word[cnt.index(max(cnt))])