dict={}
print(type(dict))

dict1={"Name":"Arun", "Age":22, "Username":"Arun"}
print(type(dict))
print(dict1)
print(dict1["Age"])
print(dict1.keys())
print(dict1.values())
print(dict1.items())

dict2={"Name":"Arun", "Age":22, "Name":"Aakash"}
dict2.pop("Name")
print(dict2)
#get the value
print(dict2.get("Age"))

#empty the ddictionary
dict2.clear()
print(dict2)

for key, values in dict2.items():
    print(key,values,sep=" - ")

dict1["age"]=50
print(dict1)