from itertools import permutations
class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        n = len(tiles)
        l1=[]
        count=0
        for i in tiles:
            l1.append(i)
        all_passwords = []
        for r in range(1, n + 1):
            perms = set(permutations(l1, r)) 
            count = count+len(perms) 
            #all_passwords.extend(perms)

        return count
        
        