package graphColoring;

public class Algorithm {

	private int numOfVertex;
	private int numOfColors;
	private int[] colors;
	private int[][] adjacencyMatrix;


	public Algorithm(int [][] adjacencyMatrix , int numOfColors)
	{
		this.adjacencyMatrix = adjacencyMatrix;
		this.numOfColors = numOfColors;
		this.numOfVertex = adjacencyMatrix.length;
		this.colors = new int[this.numOfVertex];
	}

	public void solve(){
		if( solveProblem(0) )
		{
			showResults();
		}
		else
		{
			System.out.println("There is no solution.....");
		}
	}

	private boolean solveProblem(int nodeIndex) {
		if(nodeIndex == numOfVertex)
			return true;

		for(int colorIndex = 1; colorIndex<=numOfColors ; colorIndex++)
		{
			if(isColorValid(nodeIndex , colorIndex)){
				colors[nodeIndex] = colorIndex;

				if(solveProblem(nodeIndex + 1))
					return true;

				//backtrack...
			}
		}
		return false;
	}

	private boolean isColorValid(int nodeIndex, int colorIndex) {

		for(int i=0;i<numOfVertex;i++)
		{
			if(adjacencyMatrix[nodeIndex][i] == 1 && colors[i] == colorIndex)
				return false;
		}
		return true;
	}

	private void showResults() {
		for(int i=0;i<numOfVertex ; i++)
		{
			System.out.println("Node " + (i+1) + " has color index : "+colors[i]);
		}
	}
}
