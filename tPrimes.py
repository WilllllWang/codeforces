import math

def main():
    solve()



def solve():
    n = int(input())
    nums = input().split()
    primes = findPrimes(10 ** 6)

    for i in range(n):
        nums[i] = int(nums[i])
        sr = math.sqrt(nums[i])
        if sr in primes:
            print("YES")
        else:
            print("NO")
        


def findPrimes(limit):
    primes = set()
    composites = set()
    for num in range(2, limit + 1):
        if num not in composites:
            primes.add(num)
            muti = 2
            while (num * muti) <= limit:
                composites.add(num * muti)
                muti += 1
    return primes





if __name__ == "__main__":
    main()