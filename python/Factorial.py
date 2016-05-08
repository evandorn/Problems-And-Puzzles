"""
Enter a number N from commandline and the program will return N factorial (N!)
"""

def factorial(n):
    if(n == 0):
        return 1;
    else:
        return n * factorial(n-1)

if __name__ == '__main__':
    
    print("Enter a number to compute the factorial ")
    n = int(input())

    print("The factorial of " + str(n) + " is " + str(factorial(n)))