---
tags:
  - Idea
---
# Idea breakdown

## Logic
Have a class that will take in a binary number and display resolution.
e.g.
```cpp
struct Resolution{
	int x;
	int y;
};

class Logic{
	public:
		Logic(int current_gen, Resolution res) :
			m_current_gen(current_gen),
			m_res(res)
			{}
		
		int calculateNextGen(){
			int next_gen;
			// Logic code for game
			return next_gen;
		}
	
	private:
		int m_current_gen;
		Resolution m_res;
};
```

### Conway's Game of Life Rules
1. Any live cell with fewer than two live neighbours dies, as if by underpopulation.
2. Any live cell with two or three live neighbours lives on to the next generation.
3. Any live cell with more than three live neighbours dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction

![[Images/conways-game-of-life-rules.jpg]]

