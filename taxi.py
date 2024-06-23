def main():
    print(solve())
    

def solve():
    n = int(input())
    if n == 1:
        return 1
    s = input().split()
    for i in range(n):
        s[i] = int(s[i])
    s.sort()

    ans = 0
    low, high = 0, n - 1
    while low <= high:
        peeps = s[low] + s[high]
        if peeps == 4:
            low += 1
            high -= 1
        elif peeps < 4:
            while peeps < 4:
                low += 1
                peeps += s[low]
                if low == high:
                    break
            if peeps <= 4:
                low += 1
            high -= 1
        else:
            high -= 1
        ans += 1
    return ans



if __name__ == "__main__":
    main()


'''
    peeps = 0
    joint = 0
    for sss in s:
        peeps += sss
        if peeps > 4:
            break
        joint += 1

    ans = n - joint + 1
    return ans
'''