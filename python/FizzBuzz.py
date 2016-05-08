# Python FizzBuzz program. Between numbers 1 and 100, if a number is divisable by 3 print Fizz
#                          if a number is divisable by 5 print buzz. If the number is divisable by
#                          3 and 5 print FizzBuzz. Else print the number.

# for 1 to 100
for i in range(1, 101):
    if((i % 3 == 0) and (i % 5 == 0)):          # Case0: Divisable by 3 and 5
        print("FizzBuzz")
    elif(i % 3 == 0):                             # Case1: Divisable by 3
        print("Fizz")
    elif(i % 5 == 0):                           # Case2: Divisable by 5
        print("Buzz")
    else:                                       # Case3: Not divisable by 3 or 5
        print(i)
