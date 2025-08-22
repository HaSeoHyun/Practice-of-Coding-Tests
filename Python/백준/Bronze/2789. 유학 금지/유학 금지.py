S = input()
black_list = ["C","A","M","B","R","I","D","G","E"]

for i in range(0,len(S)):
    if S[i] not in black_list:
        print(S[i], end = '')
