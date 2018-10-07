package ds.circularLinkedList;

public class Stack {
	CircularLinkedList list;
	public Stack(){
		list = new CircularLinkedList();
		
	}
	public void push(int item)
	{
		list.insertFirst(item);
	}
	
	public int pop()
	{
		return list.deleteFirst();
	}
	
	public void display(){
		list.display();
	}
}
