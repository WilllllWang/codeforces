def main():
    n, k = input().split()
    n, k = int(n), int(k)
    scores = input().split()
    ans = 0
    for score in range(len(scores)):
        if int(scores[score]) < int(scores[k-1]):
            break
        if int(scores[score]) != 0:
            ans += 1

    print(ans)
        

if __name__ == "__main__":
    main()