package ds.doublyLinkedList;

public class App {

	public static void main(String [] argss){
		
		DoublyLinkedList list = new DoublyLinkedList();
		list.insertFirst(1);
		list.insertFirst(2);
		list.insertLast(3);
		list.display();
		
		if(list.insertAfter(5, 4))
			System.out.println("succussfully inserted");
		else 
			System.out.println("problem in insertion");
		list.display();
		
		list.deleteKey(3);
		list.display();
		list.insertLast(5);
		list.insertFirst(8);
		list.display();
		list.deleteKey(2);
		list.display();
	}
}
