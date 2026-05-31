var={}
print(type(var))

var1=set()
print(type(var1))

set={10,'Ankush',60.3,True,2+3j}
print(set)
# not works 'cause values get interchanged 
#print(set[1])
  
#Duplicate does not allow
set1={10,'Aman',60.3,True,2+3j,'Aman',60.3,2+3j}
print(set1)  

#Adding an element
set1={10,'Aman',60.3,True,2+3j,'Aman',60.3,2+3j}
set1.update('Atul')
print(set1)
set1.update(['Atul'])
print(set1) 
set1.update(['Avinash','Shiv'])
print(set1) 

#Note: If the set is unordered then there’s no such way to determine which element is popped by using the pop() function. 
set1.pop()
print(set1)
set1.pop()
print(set1)

#Removing an element
set1.remove("Shiv")
print(set1)

#empty the set
# set1.clear()
# print(set1)

set_a={10,'ankit',66.7,True,'Roy'}
set_b={10,'ankit',90.1,False,'Jiggy'}

print(set_a.union(set_b))
print(set_a.intersection(set_b))

print(set_a | set_b)
print(set_a & set_b)

print(set_a.difference(set_b))
print(set_a - set_b)

#Print uniques values
print(set_a.symmetric_difference(set_b))