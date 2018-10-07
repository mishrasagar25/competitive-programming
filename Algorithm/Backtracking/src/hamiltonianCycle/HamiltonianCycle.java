package hamiltonianCycle;

public class HamiltonianCycle {

	private int numOfVertex;
	private int[] hamiltonianPath;
	private int[][] adjacencyMatrix;

	public HamiltonianCycle(int[][] adjacencyMatrix)
	{
		this.adjacencyMatrix = adjacencyMatrix;
		this.hamiltonianPath = new int[adjacencyMatrix.length];
		this.numOfVertex = adjacencyMatrix.length;
		this.hamiltonianPath[0] = 0;
	}

	public void solve()
	{
		if(findFeasibleSolution(1))
		{
			showHamiltonianPath();
		}
		else
		{
			System.out.println("There is no feasible solution....");
		}
	}

	private boolean findFeasibleSolution(int position) {

		if(position == numOfVertex)
		{
			if(adjacencyMatrix[hamiltonianPath[position-1]][hamiltonianPath[0]] == 1)
				return true;
			else
				return false;
		}

		for(int vertexIndex = 1; vertexIndex<numOfVertex; vertexIndex++)
		{
			if(isFeasible(vertexIndex , position))
			{
				hamiltonianPath[position] = vertexIndex;

				if(findFeasibleSolution(position+1))
				{
					return true;
				}

				//backtrack....
			}
		}
		return false;
	}

	private boolean isFeasible(int vertexIndex, int actualPosition) {

		if(adjacencyMatrix[hamiltonianPath[actualPosition-1]][vertexIndex] == 0)
			return false;

		for(int i = 0; i<actualPosition;i++)
			if(hamiltonianPath[i] == vertexIndex)
				return false;

		return true;
	}

	private void showHamiltonianPath() {

		for(int i=0;i<hamiltonianPath.length;i++)
		{
			System.out.print(hamiltonianPath[i] + " -> ");
		}
		System.out.print(hamiltonianPath[0]);
	}

}

