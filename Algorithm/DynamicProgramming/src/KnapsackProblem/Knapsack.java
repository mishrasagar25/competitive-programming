package KnapsackProblem;

public class Knapsack {

	private int numOfItems;
	private int capacityOfKnapsack;
	private int[][] knapsackTable;
	private int totalBenefits;
	private int[] weights;
	private int[] values;
	
	public Knapsack(int numOfItems , int capacityOfKnapsack , int[] weights , int [] values)
	{
		this.numOfItems = numOfItems;
		this.capacityOfKnapsack = capacityOfKnapsack;
		this.weights = weights;
		this.values = values;
		this.knapsackTable = new int[numOfItems+1][capacityOfKnapsack];
	}

	public void solve()
	{
		for(int i = 1;i<numOfItems+1;i++)
		{
			for(int j=1;j<capacityOfKnapsack+1;j++))
		}
	}
}
