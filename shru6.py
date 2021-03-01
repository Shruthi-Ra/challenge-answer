

def ntoascii():
    u_list=input("Enter value to be converted to ascii")
    if(type(u_list)==str):
        test_list=u_list.split()
        print("The original list : " + str(test_list)) 
   
        res = [ord(ele) for sub in test_list for ele in sub]  
        print("The ascii list is : " + str(res))
def asciiton():
    n = int(input("Enter number of elements : ")) 

    a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n] 
    res = ''.join(chr(val) for val in a) 
    print ("Resultant string" ,str(res))      
ntoascii()
asciiton()