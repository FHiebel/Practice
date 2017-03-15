#Day 8: Dictionaries and Maps
n=input()
n=int(n)
d = dict(input().split() for _ in range(n))
#print(d)

a=(input() for _ in range(n))

for b in map(lambda x:(x+'='+d[x])if x in d else "Not found",a):
    print(b)