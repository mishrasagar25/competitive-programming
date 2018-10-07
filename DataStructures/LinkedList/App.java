package ds.LinkedList;

public class App {

	public static void main(String[] args) {

		Node nodeA = new Node();
		nodeA.data = 4;
		
		Node nodeB = new Node();
		nodeB.data = 3;
		
		Node nodeC = new Node();
		nodeC.data = 5;
		
		Node nodeD = new Node();
		nodeD.data = 7;
	
		nodeA.next = nodeB;
		nodeB.next = nodeC;
		nodeC.next = nodeD;
		
		System.out.println(listLength(nodeA));
	}

	public static int listLength(Node node){
		int count=0;
		while(node != null)
		{
			count++;
			node = node.next;
		}
		return count;
	}
}
