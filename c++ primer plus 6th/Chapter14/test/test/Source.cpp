#include"test.h"

#include <vector>
#include <queue>

class Solution {
public:
	int orangesRotting(std::vector<std::vector<int>>& grid) {
		int rows = grid.size();
		int cols = grid[0].size();

		std::queue<std::pair<int, int>> rotten; // 存放腐烂的橘子
		int freshCount = 0; // 新鲜橘子的数量

							// 初始化，将腐烂的橘子入队，统计新鲜橘子的数量
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				if (grid[i][j] == 2) {
					rotten.push({ i, j });
				}
				else if (grid[i][j] == 1) {
					freshCount++;
				}
			}
		}

		int minutes = 0;
		int dx[] = { 0, 1, 0, -1 };
		int dy[] = { 1, 0, -1, 0 };

		while (!rotten.empty() && freshCount > 0) {
			int size = rotten.size();
			for (int i = 0; i < size; ++i) {
				int x = rotten.front().first;
				int y = rotten.front().second;
				rotten.pop();

				// 尝试腐烂新鲜橘子的四个方向
				for (int d = 0; d < 4; ++d) {
					int nx = x + dx[d];
					int ny = y + dy[d];
					if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == 1) {
						grid[nx][ny] = 2;
						freshCount--;
						rotten.push({ nx, ny });
					}
				}
			}
			minutes++;
		}

		return (freshCount == 0) ? minutes : -1;
	}
};

int main() {
	std::vector<std::vector<int>> grid = { { 0,2} };
	Solution solution;
	int minutes = solution.orangesRotting(grid);
	std::cout << "Minutes required: " << minutes << std::endl;
	system("pause");


	return 0;
}