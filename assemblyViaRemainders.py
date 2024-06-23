def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        res = []
        head = int(arr[0]) + 1
        res.append(head)
        for i in range(n - 1):
            new = int(arr[i]) + res[i]
            while (new % int(arr[i]) != res[i]):
                new += int(arr[i])
            res.append(int(arr[i]) + res[i])
            

        for r in res:
            print(r, end=' ')
        print()




if __name__ == "__main__":
    main()

# Unfinished

