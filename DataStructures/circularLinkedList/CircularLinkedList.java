package ds.circularLinkedList;

public class CircularLinkedList{
	private Node first;
	private Node last;
	
	public CircularLinkedList(){
		first = null;
		last = null;
	}
	
	public boolean isEmpty(){
		return first==null;
	}
	public void insertFirst(int data){
		
		Node newNode = new Node();
		newNode.data = data;
		
		if(isEmpty()){
			first = newNode;
			last = newNode;
		}
		else
		{
			newNode.next = first;
			first = newNode;
		}
	}
	
	public void insertLast(int data){
		Node newNode = new Node();
		newNode.data = data;
		if(isEmpty()){
			first = newNode;
			last = newNode;
		}
		else
		{
			last.next = newNode;
			last = newNode;
		}
		
	}
	
	public void display()
	{
		Node temp = first;
		while(temp != null)
		{
			temp.display();
			temp = temp.next;
		}
		System.out.println();
	}
	
	public int deleteFirst()
	{
		int temp = first.data;
		if(first.next == null)
			last = null;
		first = first.next;
		return temp;
	}
}
