def is_isogram(word): 
   
    c_word = word.lower() 
 
    l_list = [] 
  
    for l in c_word: 
  
        # If letter is an alphabet then only check 
        if l.isalpha(): 
            if l in l_list: 
                return False
            l_list.append(l) 
  
    return True
word=input("Enter")
print(is_isogram(word))                              