package Sudoko;

public class Algorithm {

	private int[][] sudokuTable;

	public Algorithm(int [][] sudokuTable)
	{
		this.sudokuTable = sudokuTable;
	}

	public void solveProblem(){

		if(solve(0,0))
			showResults();
		else
			System.out.println("No Solution ......");
	}

	private boolean solve(int rowIndex, int columnIndex) {
		if(rowIndex == Constants.BOARD_SIZE && ++columnIndex == Constants.BOARD_SIZE){
			return true;
		}

		if(rowIndex == Constants.BOARD_SIZE)
		{
			rowIndex = 0;
		}

		if(sudokuTable[rowIndex][columnIndex] != 0)
			return solve(rowIndex+1 , columnIndex);

		for(int number = Constants.MIN_NUMBER ;number<=Constants.MAX_NUMBER;number++)
		{
			if(valid(rowIndex , columnIndex , number))
			{
				sudokuTable[rowIndex][columnIndex] = number;

				if(solve(rowIndex+1 , columnIndex))
					return true;

				//backtrack....
				sudokuTable[rowIndex][columnIndex] = 0;
			}
		}

		return false;
	}

	private boolean valid(int rowIndex, int columnIndex, int actualNumber) {

		//if given no. is already part in row
		for(int i=0;i<Constants.BOARD_SIZE;i++)
			if(sudokuTable[rowIndex][i] ==  actualNumber)
				return false;

		for(int i=0;i<Constants.BOARD_SIZE;i++)
			if(sudokuTable[i][columnIndex] == actualNumber)
				return false;

		int boxRowOffset = (rowIndex/3) * Constants.BOX_SIZE;
		int boxColumnOffset = (columnIndex/3) * Constants.BOX_SIZE;

		for(int i=0;i<Constants.BOX_SIZE;i++)
		{
			for(int j=0;j<Constants.BOX_SIZE;j++)
				if(actualNumber == sudokuTable[boxRowOffset+i][boxColumnOffset+i])
					return false;
		}
		return true;
	}

	private void showResults() {

		for(int i=0; i<Constants.BOARD_SIZE;i++)
		{
			if(i%3 == 0) System.out.println(" ");
			for(int j=0;j<Constants.BOARD_SIZE;j++)
			{
				if(j%3 == 0)System.out.print(" ");
				System.out.print(sudokuTable[i][j] + " ");
			}
			System.out.println("");
		}
	}


}
