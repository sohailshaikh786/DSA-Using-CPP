#Write a Python program to do arithmetical operations addition and division.
# Addition
num1 = float(input("Enter first number :"))
num2 = float(input("Enter second number : "))
result = num1 + num2
print(f'Sum : {num1} + {num2} = {result}')


#Division
num3 = float(input("Enter number :"))
num4 = float(input("Enter second number :"))
if num4 == 0 :
    print("Divion by Zero is not allowed")
else:
    result_div = num3 / num4
    print(f'Division : {num3} / {num4} = {result_div}')

