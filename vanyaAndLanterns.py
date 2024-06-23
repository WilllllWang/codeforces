def main():
    print(solve())




def solve():
    n, l = input().split()
    n, l = int(n), int(l)
    lanterns = input().split()
    for i in range(n):
        lanterns[i] = int(lanterns[i])
    lanterns.sort()
    
    ans = 0
    # Calculate least radius needed in between two lanterns
    for low in range(n-1):
        high = low + 1
        temp = (lanterns[high] - lanterns[low]) / 2
        ans = max(ans, temp)
        
    # Cover the start and the end Ex: l=5  lanterns:2,5   r in first check = 1.5, r in second check = 2
    start = lanterns[0] - 0
    end = l - lanterns[n-1] 
    ans = max(ans, start, end)

    return ans



if __name__ == "__main__":
    main()
