package ds.doublyLinkedList;

public class Node {

	int data;
	Node next = null;
	Node previous = null;
	
	public void display(){
		System.out.print("{ "+data+" } ");
	}
}
