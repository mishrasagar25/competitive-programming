package ds.singlyLinkedList;

public class SinglyLinkedList {
	private Node first;

	public SinglyLinkedList(){
		
	}
	
	public boolean isEmpty(){
		return (first == null);
	}
	
	public void insert(int data){
		Node newNode = new Node();
		newNode.data = data;
		if(isEmpty())
		{
			first = newNode;
		}
		else
		{
			Node tempNode;
			tempNode = first;
			while(tempNode.next != null)
			{
				tempNode = tempNode.next;
			}
			tempNode.next = newNode;
		}
		
	}
	
	public void insertFirst(int data)
	{
		Node newNode = new Node();
		newNode.data = data;
		newNode.next = first;
		first = newNode;
	}
	
	public Node deleteFirst(){
		Node tempNode = first;
		first = first.next;
		return tempNode;
	}
	
	public Node delete(int data){
		if(!isEmpty())
		{
			Node temp = first;
			Node temp2 = first;
			if(first.data == data)
			{
				first = first.next;
				return temp;
			}
			while(temp != null && temp.data != data)
			{
				temp2 = temp;
				temp = temp.next;
			}
			if(temp != null)
			{
				temp2.next = temp.next;
				return temp;
			}
			else
			{
				System.out.println("node with "+data+ " not found");
				return null;
			}
		}
		else 
		{
			System.out.println("List is Empty");
			return null;
		}
	}
	
	public void insertLast(int item)
	{
		Node newNode = new Node();
		newNode.data = item;
		
		Node temp = first;
		while(temp.next != null)
			temp = temp.next;
		temp.next = newNode;
			
	}
	public void display(){
		Node tempNode = first;
		while(tempNode != null)
		{
			tempNode.display();
			tempNode = tempNode.next;
		}
		System.out.println();
	}
}
