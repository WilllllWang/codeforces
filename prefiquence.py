def main():
    t = int(input())
    for _ in range(t):
        lengthA, lengthB = input().split()
        a = input()
        b = input()
        aPtr = 0
        bPtr = 0
        ans = 0

        while True:
            if a[aPtr] == b[bPtr]:
                aPtr += 1
                bPtr += 1
                ans += 1
            else:   
                bPtr += 1

            if (aPtr >= int(lengthA) or bPtr >= int(lengthB)):
                break

        print(ans)







if __name__ == "__main__":
    main()



