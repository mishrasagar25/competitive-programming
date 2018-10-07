package nQueen;

public class QueenProblem {

	private int[][] chessTable;
	private int numOfQueens;

	public QueenProblem(int numOfQueens)
	{
		this.chessTable = new int[numOfQueens][numOfQueens];
		this.numOfQueens  = numOfQueens;
	}

	public void solve(){

		if(setQueens(0))
		{
			printQueens();
		}
		else
		{
			System.out.println("There is no feasible solution.....");
		}
	}

	private boolean setQueens(int colIndex) {
		if(colIndex == numOfQueens)
			return true;

		for(int rowIndex = 0; rowIndex<numOfQueens ; rowIndex++)
		{
			if(isPlaceValid(rowIndex , colIndex))
			{
				chessTable[rowIndex][colIndex] = 1;

				if(setQueens(colIndex + 1))
				{
					return true;
				}

				chessTable[rowIndex][colIndex] = 0;
			}
		}
		return false;
	}

	private boolean isPlaceValid(int rowIndex, int colIndex) {

		//check if in same row is there any queen already there
		for(int i=0 ; i<colIndex; i++)
			if(chessTable[rowIndex][i] == 1)
				return false;

		//check if in upper diagonal is there any queen already there
		for(int i=rowIndex , j=colIndex ; i>=0 && j>=0 ; i-- , j--)
			if(chessTable[i][j] == 1)
				return false;

		//check if in lower diagonal is there any queen already there
		for(int i=rowIndex , j= colIndex ; i<chessTable.length && j>=0 ;i++ ,j--)
			if(chessTable[i][j] == 1)
				return false;

		//if all above cond. dont match then this place is valid
		return true;
	}

	private void printQueens() {

		for(int i=0;i<chessTable.length;i++)
		{
			for(int j=0;j<chessTable.length;j++)
			{
				if(chessTable[i][j] == 1)
					System.out.print(" * ");
				else
					System.out.print(" - ");
			}
			System.out.println("");
		}
	}

}
