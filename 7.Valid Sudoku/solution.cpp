#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::vector<std::unordered_set<char>> rows(9);
        std::vector<std::unordered_set<char>> cols(9);
        std::vector<std::unordered_set<char>> boxes(9);
        
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];
                if (num == '.') continue;
                int box_index = (i / 3) * 3 + (j / 3);
                if (rows[i].count(num) || cols[j].count(num) || boxes[box_index].count(num)) {
                    return false;
                }
                rows[i].insert(num);
                cols[j].insert(num);
                boxes[box_index].insert(num);
            }
        }
        return true;
    }
};

// Example usage
int main() {
    Solution solution;
    std::vector<std::vector<char>> board1 = { {'5','3','.','.','7','.','.','.','.'},
                                              {'6','.','.','1','9','5','.','.','.'},
                                              {'.','9','8','.','.','.','.','6','.'},
                                              {'8','.','.','.','6','.','.','.','3'},
                                              {'4','.','.','8','.','3','.','.','1'},
                                              {'7','.','.','.','2','.','.','.','6'},
                                              {'.','6','.','.','.','.','2','8','.'},
                                              {'.','.','.','4','1','9','.','.','5'},
                                              {'.','.','.','.','8','.','.','7','9'} };
    std::vector<std::vector<char>> board2 = { {'8','3','.','.','7','.','.','.','.'},
                                              {'6','.','.','1','9','5','.','.','.'},
                                              {'.','9','8','.','.','.','.','6','.'},
                                              {'8','.','.','.','6','.','.','.','3'},
                                              {'4','.','.','8','.','3','.','.','1'},
                                              {'7','.','.','.','2','.','.','.','6'},
                                              {'.','6','.','.','.','.','2','8','.'},
                                              {'.','.','.','4','1','9','.','.','5'},
                                              {'.','.','.','.','8','.','.','7','9'} };
    std::cout << std::boolalpha << solution.isValidSudoku(board1) << std::endl;  // Output: true
    std::cout << std::boolalpha << solution.isValidSudoku(board2) << std::endl;  // Output: false
    return 0;
}
