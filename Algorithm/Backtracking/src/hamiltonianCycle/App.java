package hamiltonianCycle;


public class App {

	public static void main(String[] args) {

		int[][] matrix = {
				{1,1,0},
				{1,0,1},
				{1,1,0}
		};

		HamiltonianCycle cycle = new HamiltonianCycle(matrix);
		cycle.solve();

	}


}
