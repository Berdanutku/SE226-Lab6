#1
def equation1(n):
 f=lambda x:(x-3)/(x*x)
 list=[]
 for i in range(1,n+1):
    list.append(f(i))
 print(sum(list))

n=int(input("Please enter a number: "))
equation1(n)

#2
def equation2(n):
    """The function calculates and prints the result of the equation using a recursive function"""
    if n==0:
        return 1
    else:
        return (((n/(n+2))-10)*equation2(n-1))

n=int(input("Please enter a number: "))
print(equation2(n))
print(equation2.__doc__)





