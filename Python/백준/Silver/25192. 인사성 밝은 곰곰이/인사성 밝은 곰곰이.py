import sys

N = int(sys.stdin.readline())
c = 0
speak = set()  # 중복 확인을 위한 set 사용

for i in range(N):
    user = input()

    if user == "ENTER":
        speak.clear()  # 새 대화가 시작되면 set을 비움

    else:
        if user not in speak:  # 중복되지 않은 값만 추가
            speak.add(user)
            c += 1

print(c)
