def main():
    if solve():
        print("YES")
    else:
        print("NO")



def solve():
    s = input()
    target = 'hello'
    sPtr, tPtr = 0, 0
    while True:
        if s[sPtr] == target[tPtr]:
            tPtr += 1
        sPtr += 1

        if tPtr == len(target):
            return True
        if sPtr == len(s):
            return False



if __name__ == "__main__":
    main()