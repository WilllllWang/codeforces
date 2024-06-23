

def main():
    n = int(input())
    for _ in range(n):
        num = input()
        res = 1
        if len(num) > 1:
        	for j in range(len(num) - 1):
                  if num[j] == '1' and num[j+1] == '0':
                      res += 1
        print(res)
            
    


  
if __name__ == "__main__":
    main()