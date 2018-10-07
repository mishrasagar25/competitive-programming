package ds.graph;

public class App {
	public static void main(String[] args){
		BetterGraph graph = new BetterGraph(5,"directed");
		graph.addVertex("Ratlam");
		graph.addVertex("Indore");
		graph.addVertex("Pune");
		graph.addVertex("Banglore");
		graph.addVertex("Mumbai");
		
		graph.addEdge("Ratlam", "Indore");
		graph.addEdge("Ratlam", "Pune");
		graph.addEdge("Ratlam", "Mumbai");
		graph.addEdge("Indore","Pune");
		graph.addEdge("Indore","Mumbai");
		
		graph.print("Indore");
		
	}
}
