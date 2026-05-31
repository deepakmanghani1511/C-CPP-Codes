# # #Leap Year

# # # n=int(input())

# # # if(n%400==0 or (n%4==0 and n%100!=0)):
# # #     print("Leap year")
# # # else:
# # #     print("Non-leap year")



# # #Largest of numbers

# # # a,b,c=5,9,10
# # # if(a>b and a>c):
# # #     print(a)
# # # elif(b>a and b>c):
# # #     print(b)
# # # else:
# # #     print(c)


# # # a=5
# # # print(a/2)
# # # print(a//2)

# # #Table

# # # p=int(input("Enter number:"))

# # # for i in range(1,11):
# #     # print(i*p)


# # #palindrome

# # # n=12321
# # # temp=n
# # # sum=0
# # # while n>0:
# # #     a=n%10
# # #     sum=sum*10+a
# # #     n=n//10

# # # if sum==temp :
# # #     print("Palindrome")
# # # else:
# # #     print("Not palindrome")


# # #pattern

# # # for i in range(6):
# # #     print(i*'*')
# # # for j in range(5,0,-1):
# # #     print(j*'*')



# # #STRINGS

# # for i in "banana":
# #     print(i)

# # a="banana"
# # print(len(a))

# # txt = "The best things in life are free!"
# # print("free" in txt)

# # txt = "The best things in life are free!"
# # if "expensive" not in txt:
# #   print("No, 'expensive' is NOT present.")


# # b="My name is Deepak Manghani"
# # print(b[-26:-10])

# # b = "Hello, World!"
# # print(b[-5:-2])

# # a = "Hello, World!"
# # print(a.upper())
# # print(a.lower())

# # a = "                  Hello, World!                        "
# # print(a.strip())

# # b="My name is Deepak Manghani"
# # print(b.replace("Deepak","Hitesh"))

# # c="My name is, Hello, World! , Namaste Duniya!!"
# # print(c.split("e"))

# # # String Concatenation
# # # To concatenate, or combine, two strings you can use the + operator.


# # f="abcd"
# # g="efgh"

# # H=f+g
# # print(H)

# # h=f+" "+g
# # print(h)


# #LISTS

# list1=["apple", "banana", "cherry", "dragon fruit"]
list2=[1,2,3,4,5]
# list3=[True,False, False]
# list4=["abc",34,True,30,"male"]
# list5=["a", "b", "c", "d", "e"]

# print(list1)
# print(list2)
# print(list3)
# list1.append("orange")
# list2.insert(2,3.1)
# print(list2)
# print(list1)
# list4.extend(list3)
# print(list4)
list2.remove(2)
print(list2)

# del list5[0]
# print(list5)

# del list5
# print(list5)

# print(list2.clear)

# def fibonacii(n):
#     a,b=0,1
#     fi