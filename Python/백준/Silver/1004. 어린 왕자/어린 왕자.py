#백준 1004번 어린왕자
T = int(input())

for i in range(T):
    cnt = 0
    x1, y1, x2, y2 = map(int, input().split())  
    #n =행성계의 개수 
    n = int(input())
    
    for i in range(n):
        px, py, pr = map(int, input().split())
        
        d1 = (x1 - px) ** 2 + (y1 - py) ** 2
        d2 = (x2 - px) ** 2 + (y2 - py) ** 2
        num_pr = pr**2
        
        if num_pr > d1 and num_pr > d2:
            pass

        elif num_pr > d1:
            cnt+=1
            
        elif num_pr > d2:
            cnt+=1
            
    print(cnt)