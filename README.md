# python-PALB-1
print("Hello World")
a=int(input("Enter any number"))
print(a)
r=float(input("Enter the radius of the circle"))
ar=3.14*r**2
print(ar)
ag=int(input("Enter the age"))
days=ag*365
print(days)
for i in range(1,10):
    print(i)
i=1
while i<10:
    print(i)
    i+=1
n=int(input("Enter the elements of the list"))
ls=[]
for i in range(n):
    a=int(input("Enter the elements of the list"))
    ls.append(a)
for i in ls:
    print(i)
c=ls.extend([12,34,5])
print(ls)
print(ls.pop(n-3))
print(ls[2])
arr=[1,2,3,4,5,6,7,8,9,10]
for i in arr:
    print(i)
# arr.reverse()
# print(arr)
for i in range(9,-1,-1):
    print(arr[i])
print(arr[10:0:-1])   
#reverse the given array
def rev_arr(arr):
    start=0
    end=len(arr)-1
    while(start<end):
        arr[start],arr[end]=arr[end],arr[start]
        start+=1
        end-=1
    return arr
c=rev_arr(arr)
print(c)
#min and max
def min_max(arr):
    max=arr[0]
    min=arr[0]
    for i in range(0,len(arr)):
        if max<arr[i]:
            max=arr[i]
        if min>arr[i]:
            min=arr[i]
    print(min) 
    print(max)
min_max(arr)            
#find largest element of the given array 
def large(arr):
    larg=arr[0]
    for i in range(0,len(arr)):
        if larg<arr[i]:
            larg=arr[i]
    return larg
d=large(arr)
print(d)
# find kth smallest element in the array
n=int(input("Enter the size of the array"))
ar=[]
for i in range(0,n):
    e=int(input("Enter the elements of the array:"))
    ar.append(e)
k=int(input("Enter the index of which you want to find the element:"))
def kth_smallest(ar,k):
    for i in range(0,n-1):
        for j in range(0,n-i-1):
            if ar[j]>ar[j+1]:
                temp=ar[j+1]
                ar[j+1]=ar[j]
                ar[j]=temp
    return ar[k]
cd=kth_smallest(ar,k)
print(cd)
#return the union of two givem array
a1=['a','b','c','d']
a2=['c','d','e','f']
a3=[]
p1=p2=0
while(p1<len(a1) and p2<len(a2)):
    if a1[p1]<a2[p2]:
        a3.append(a1[p1])
        p1+=1
    elif a1[p1]>a2[p2]:
        a3.append(a2[p2])
        p2+=1
    else:
        a3.append(a1[p1])
        p1+=1
        p2+=1
while (p1<len(a1)):
    a3.append(a1[p1])
    p1+=1
while (p2<len(a2)):
    a3.append(a2[p2])
    p2+=1
for i in a3:
    print(i)
#rotate the array elements by one position clockwise
n=int(input("Enter the size of the array"))
lst=[]
for i in range(0,n):
    a=int(input("Enter the elements of the array"))
    lst.append(a)
last=lst[n-1]   
for i in range(n-1,0,-1):
    lst[i]=lst[i-1]
lst[0]=last
print(lst)
def rotateclockwise(arr):
    if len(arr) <= 1:
        return arr
    return [arr[-1]] + arr[:-1]
array = [1, 2, 3, 4, 5]
rotated = rotateclockwise(array)
print(rotated)
#find the subarray with the maximum sum from the array [2,3,-8,7,-1,2,3] 
arr=[2,3,-8,7,-1,2,3]
cur_sum=max_sum=arr[0]
for i in range(1,len(arr)):
    cur_sum=max(arr[i],cur_sum+arr[i])
    max_sum=max(max_sum,cur_sum)
print(max_sum)
# Given a sorted array of distinct integers and a target value return the index if the target is found if not return the index where it would be if it were inserted in order
def index_value(arr,n,k):
    start=0;end=n-1
    while start<end:
        mid=(start+end)//2
        if arr[mid]==k:
            return mid
        elif arr[mid]<k:
            start=mid+1
        elif arr[mid]>k:
            end=mid-1
    i=0
    while i<n and k>arr[i]:
        i+=1
    return i
n=int(input("Enter the size of the array"))
arr=[]
for i in range(0,n):
    a=int(input("Enter the elements of the array:"))
    arr.append(a)
k=int(input("Enter the number you want to find:"))
index=index_value(arr,n,k)
print(index)
#Given an array of integers and an integer target return indices of the two numbers such that they add upto target
def indices_val(ar,n,k):
    for i in range(0,n):
        for j in range(i,n):
            if ar[i]+ar[j]==k:
                return i,j
n=int(input("Enter the size of the array:"))
ar=[]
for i in range(0,n):
    a=int(input("Enter the elements of the array:"))
    ar.append(a)
k=int(input("Enter the value of the target:"))
indices=indices_val(ar,n,k)
print(indices)
# arr=[5,2,3,6,1]
a=int(input("enter the size of the elemnet:"))
lst=[]
for i in range(0,a):
    m=int(input("enter the elements of the array:"))
    lst.append(m)
last=lst[a-1]
last_second=lst[a-2]
for i in range(a-1,0,-1):
    lst[i]=lst[i-2]
lst[0]=last_second 
lst[1]=last
print(lst)
def leader(arr):
    lead=[]
    count=0
    for i in range(0,len(arr)-1):
        for j in range(i+1,len(arr)):
            if arr[i]<arr[j]:
                break
        else:
            lead.append(arr[i])
    return lead               
arr=[2,3,5,4,3,1]
var=leader(arr)
print(var)
def leader(arr):
    lead=[]
    count=0
    for i in range(0,len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i]>arr[j]:
                count=1
            else:
                count=0
        if count!=0:
            lead.append(arr[i])
    return lead               
arr=[2,3,5,4,3,1]
var=leader(arr)
print(var)
arr=[1,3,5,8,9,2,6,7,6,8,9]
def jumpFunc(arr):
    n = len(arr)
    if n <= 1:
        return 0
    if arr[0] == 0:
        return -1 
    jump =0
    i =0
    while i < len(arr):
        i = i+arr[i]
        jump +=1
        if(i>len(arr)):           
            break
    return jump
numJump = jumpFunc(arr)
print(f"Number of jumps: {numJump}")
