from itertools import permutations
class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        n = len(tiles)
        l1=[]
        for i in tiles:
            l1.append(i)
        all_passwords = []
        for r in range(1, n + 1):
            perms = set(permutations(l1, r))  
            all_passwords.extend(perms)

        return len(all_passwords)
        
        