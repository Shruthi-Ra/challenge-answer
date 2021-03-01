def is_anagram(str1, str2):
    list_str1 = list(str1)
    list_str1.sort()
    list_str2 = list(str2)
    list_str2.sort()

    return (list_str1 == list_str2)

str1=input("Enter string")
str2=input("Enter another string")
print(is_anagram(str1,str2))
