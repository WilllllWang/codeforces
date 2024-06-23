def main():
    problems = int(input())
    ans = 0
    for _ in range(problems):
        know = input()
        count = 0
        for num in know:
            if num == '1':
                count += 1
        
        if count >= 2:
            ans += 1

    print(ans)


if __name__ == "__main__":
    main()



