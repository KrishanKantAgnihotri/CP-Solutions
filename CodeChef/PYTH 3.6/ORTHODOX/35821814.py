def solve(A): 
    res = set() 
    pre = {0} 
  
    for x in A: 
        pre = {int(x) | y for y in pre} | {int(x)} 
        res |= pre 
  
    return len(res) 
  
t=int(input())
while(t>0): 
    n=int(input())
    A=(input().split(' ')) 
   
    b = int(solve(A))
    if(b!=(n*(n+1)/2)):
        print("NO")
    else:
        print("YES") 
    t=t-1 
