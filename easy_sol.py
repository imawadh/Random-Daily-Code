str = input()
mid1 = (len(str)+1)/2 +1
mid2 = (len(str)+1)/2 -1
Flag = False
while(mid2!=0):
    if(str[0:mid1]==str[mid2:len(str)]):
        print("Yes")
        Flag = True
        print(str[mid2:len(str)])
        break
    mid1+=1
    mid2-=1
if(Flag==False):
   print("No")
   

