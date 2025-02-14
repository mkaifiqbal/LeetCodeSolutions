class ProductOfNumbers:

    def __init__(self):
        
        self.l1=[]
        

    def add(self, num: int) -> None:
        if len(self.l1)==0 and num!=0:
            self.l1.append(num)
        elif num==0:
            self.l1.clear()
        else:
            self.l1.append(num*self.l1[-1])
        

    def getProduct(self, k: int) -> int:
        n= len(self.l1)
        if k> n:
            return 0
        elif k==n:
            ans= self.l1[-1] 
            return ans
        else:
            ans= self.l1[-1] //self.l1[n-k-1]
            return ans
        


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)