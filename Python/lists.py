list=[1,2,3,4,5,10,6,7,8,20,1,9,10,10]
list1=['a','b','c','d','e']
# list3=list()
#print(type(list3))
print(list1)
print(list)

# Slicing
print(list[1:3])
print(list1[:])
print(list[:4])

# Count
print(list.count(0))
print(list.count(20))
print(list.count(10))
print(list.count(1))
print(list.count(5))
print('\n')

#Index
print(list.index(1))
print(list.index(10,6))
print(list.index(1,1))

#insert
# not applicable list1.insert("Ujjwal")
list1.insert(2,"Deepak")
print(list1)

#pop
list1.pop()
print(list1)
list1.pop(4)
print(list1)

#extend
list3=["Ankush", "Abhinav", "Atul"]
list1.extend(list3)
print(list1)

#copy
list3=list.copy()
print(list3)
list4=list1[:]
print(list4)

list5=list[3:10]
print(list5)


#sort
list.sort()
print(list)

list.sort(reverse=True)
print(list)

#reverse print
list1.reverse()
print(list1)

#list in list
list6=[10,20,40,50,[12,13,14,[15,16,17,18]]]

listt=[1]
print(type(listt))