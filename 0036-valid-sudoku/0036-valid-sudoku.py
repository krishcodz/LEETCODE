import math
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row =[]
        col =[[],[],[],[],[],[],[],[],[]]
        box=[[[],[],[]],[[],[],[]],[[],[],[]]]
        for i in range(9):
            for j in range(9):
                if(board[i][j] == "."):
                    continue
                if(board[i][j] in row or board[i][j] in col[j]):
                    return False
                if(board[i][j] in box[i//3][j//3]):
                    return False
                else:
                    row += [board[i][j]]
                    col[j] += [board[i][j]]
                    box[i//3][j//3] += [board[i][j]]
            row = []
            
        return True