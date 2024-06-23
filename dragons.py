def main():
    if solve():
        print("YES")
    else:
        print("NO")





def solve():
    s, n = input().split()
    s, n = int(s), int(n)
    dragons = [[0 for _ in range(2)]for _ in range(n)]
    

    for i in range(n):
        target, bonus  = input().split()
        dragons[i][0] = int(target)
        dragons[i][1] = int(bonus)
    dragons.sort()

    for j in range(n):
        if s > int(dragons[j][0]):
            s += int(dragons[j][1])
        else:
            return False
    return True





if __name__ == "__main__":
    main()