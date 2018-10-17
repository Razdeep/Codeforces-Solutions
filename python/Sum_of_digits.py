def sumOfDigits(n):
    sum=0
    while n:
        sum+=(n%10)
        n//=10
    return sum
def solve(n):
    count=0
    while(n>=10):
        n=sumOfDigits(n)
        count+=1
    print(count)
if __name__=='__main__':
    n=int(input())
    solve(n)