def main():
    print(solve())




def solve():
    # Covert into integer array
    n = int(input())
    nums = input().split()
    for i in range(n):
        nums[i] = int(nums[i])

    # Traverse through array and distinguish the even and odd nums and save indecies
    even = []
    odd = []
    for j in range(n):
        if nums[j] % 2 == 0:
            even.append(j+1)
        else:
            odd.append(j+1)

    # Return first element of the 1-length array
    if len(even) == 1:
        return even[0]
    return odd[0]







if __name__ == "__main__":
    main()