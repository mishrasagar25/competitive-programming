package graphColoring;

public class App {

	public static void main(String[] args) {

		int [][] graph = new int[][]{
				{0,1,0,1,0},
				{1,0,1,1,0},
				{0,1,0,1,0},
				{1,1,1,0,1},
				{0,0,0,1,0}
		};

		int numOfColors = 3;
		Algorithm algo = new Algorithm(graph,numOfColors);
		algo.solve();
	}
}
