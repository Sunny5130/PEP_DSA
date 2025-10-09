# name="Sunny"
# namea='''Saini'''
# a=2
# print(name)
# print(namea)
# print(a)
# print(type(a))

# x=2
# y=4
# print(x+y)
# print(x/y)
# print(x%y)
# print(x," ", y)

# name=str(input("Enter your name: "))
# print("Your name is: ",name,type(name))
# age=int(input("Enter your age: "))
# print("Your age is: ",age,type(age))
# side=int(input("Side of square is: "))
# print("Area of square is: ",side*side)

# a=int(input("take a:  "))
# b=int(input("take b:  "))
# print(a>=b)


# a=str(input("take a input\n string: "))
# print(a)
# length=len(a)
# print(length)

# x=int(input("Take a integer value: "));
# if(x>0 and x<18):
#     print("You can't Vote because you are under age");
# elif(x>=18 and x<=60):
#     print("Your condition is good for give the vote");
# else:
#     print("You can't vote");

# liste=[1,2,3,23,44.2,"Sunny",'s'];
# print(liste);
# # print(type(liste))
# liste[5]=222;
# print(liste);
# stri="Saini sahab";
# stri[1]="s";
# print(stri[2]);
# x=int(input("take a input : "));
# while (x<=10):
#     print(x*x);
#     x+=1;
# print(" end of loop at x:  ",x);


# nums=[1,2,3,4,"saini",'a',True,2.34];
# idx=0;
# while(idx<len(nums)):
#     print(nums[idx]);
#     idx+=1;
# x=1;
# while(x<=8):
#     print(x);
#     if(x==4):
#         break;
#     x+=1;
# print("End of loop");

# x=1
# while(x<=8):
#     if(x==4):
#         x+=1
#         continue
#     print(x)
#     x+=1
# print("End of loop")

# x="Sunny saini s"
# for char in x:
#     print(char)

# a=(1,4,"Sunny",'s',4.5,True)
# a=(1,2,3,4,5)
# x=2
# for idx in a:
#     if(idx==x):
#         print(x," is there in tuple")
#         break;   
#     # print(idx*idx)
# else:
#     print("End")

# for i in range(3,20,3):
#     print(i);

# def sum(a,b):
#     return a+b;
# print(sum(12,16))

def sum(a,b,c):
    return (a+b+c)/3;
print("Average of thre number is: ",sum(12,16,14))