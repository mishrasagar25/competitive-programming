package ds.doublyLinkedList;

import ds.circularLinkedList.Node;

public class DoublyLinkedList {
	private Node first;
	private Node last;
	
	DoublyLinkedList(){
		first= null;
		last = null;
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
	
	public void displayForward(){

		Node temp = first;
		while(temp != null)
		{
			temp.display();
			temp = temp.next;
		}
		System.out.println();
	}
	
	public void displayBackward(){

		Node temp = last;
		while(temp != null)
		{
			temp.display();
			temp = temp.previous;
		}
		System.out.println();
	}
	
	public boolean isEmpty() {
		// TODO Auto-generated method stub
		return first==null;
	}

	public void insertFirst(int item){
		Node newNode = new Node();
		newNode.data = item;
		
		if(isEmpty()){
			first = newNode;
			last = newNode;
		}
		else
		{
			first.previous = newNode;
			newNode.next = first;
			first = newNode;
		}
	}
	
	public void insertLast(int item){
		Node newNode = new Node();
		newNode.data = item;
		
		if(isEmpty()){
			first = newNode;
			last = newNode;
		}
		else
		{
			last.next = newNode;
			newNode.previous = last;
			last = newNode;
		}
	}
	
	public Node deleteFirst(){
		Node temp = first;
		
		if(first.next == null)
			last = null;
		else
			first.next.previous = null;
		first = first.next;
		return temp;
	}
	
	public Node deleteLast(){
		//int item = last.data;
		if(last == null)
		{
			System.out.println("list is empty");
			return null;
		}
		else if(first == last)
		{
			Node temp = last;
			first = null;
			last = null;
			return temp;
		}
		else
		{
			Node temp = last;
			last.previous.next = null;
			last = last.previous;
			return temp;
		}
		//return item;
	}
	
	public boolean insertAfter(int key , int data)
	{
		if(first == null)
		{
			System.out.println("list is empty");
			return false;
		}
		else 
		{
			Node newNode = new Node();
			newNode.data = data;
			
			Node temp = first;
			while(temp != null && temp.data!= key)
			{
				temp = temp.next;
			}
			
			if(temp == null)
			{
				System.out.println("no node found with given key i.e : "+key);
				return false;
			}
			else
			{
				if(temp == last)
				{
					newNode.next = null;
					temp.next = newNode;
					newNode.previous = temp;
					last = newNode;
				}
				else
				{
					newNode.next = temp.next;
					newNode.previous = temp;
					temp.next.previous = newNode;
					temp.next = newNode;
				}
				return true;
			}
		}
	}
	
	public Node deleteKey(int key)
	{
		Node temp = first;
		if(first == null)
		{
			System.out.println("list is already empty");
			return temp;
		}
		else
		{
			if(first == last && first.data == key)
			{
				first = null;
				last = null;
							}
			else
			{
				while(temp != null && temp.data != key)
				{
					temp = temp.next;
				}
				if(temp == null)
				{
					System.out.println("there is no node in list with data "+key);
				}
				else
				{
					if(temp == last)
					{
						temp.previous.next = null;
						last = temp.previous;
					}
					else if(temp == first)
					{
						temp.next.previous = null;
						first = temp.next;
					}
					else
					{
						temp.previous.next = temp.next;
						temp.next.previous = temp.previous;
						
					}
				}
			}
		}
		
		return temp;
	}
	
	
}
