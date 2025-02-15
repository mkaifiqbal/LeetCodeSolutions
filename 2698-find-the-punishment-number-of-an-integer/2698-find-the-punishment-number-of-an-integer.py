class Solution:
    def punishmentNumber(self, n: int) -> int:
        def canPartition(sq_str, target, start):
            if start == len(sq_str):
                return target == 0
            
            num = 0
            for i in range(start, len(sq_str)):
                num = num * 10 + int(sq_str[i]) 
                if num > target: 
                    break
                if canPartition(sq_str, target - num, i + 1):
                    return True
            
            return False

        total_sum = 0
        for i in range(1, n + 1):
            sq = i * i
            sq_str = str(sq)
            if canPartition(sq_str, i, 0): 
                total_sum += sq  
        
        return total_sum

        