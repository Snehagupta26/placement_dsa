age = 22 
name = "Sneha Gupta"
print("Hello World !")
print(age)
print(name)

num_int = 10
num_float = 3.14
message = "Hello Python"
my_list = [1,2,3,"four",5.0]
my_tuple = (1,2,3,"four",5.0)
for i in my_list:
    print("Elements of list are : " , i)

i = 0
while i < len(my_tuple):
    print("Elements of tuple are:", my_tuple[:i+1])
    i += 1

age = int(input("Enter your age: "))
if age > 18:
    print("You can drive.")
elif age >= 16 and age <= 18:
    print("You can apply for a driving license.")
else:
    print("You cannot drive.")

def greet(name = "Sneha"):
    print("Hello , " + name)
greet()
greet(name = "Priya")

def add(a,b):
    return a+b
x = add(4,5)
print("sum is ",x)

add_ten = lambda x: x + 10
print(add_ten(5)) 

