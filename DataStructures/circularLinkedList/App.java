package ds.circularLinkedList;

public class App {

	public static void main(String[] args){
		
		CircularLinkedList list = new CircularLinkedList();
		list.insertLast(10);
		list.insertLast(20);
		list.insertFirst(50);
		list.display();
		System.out.println(list.deleteFirst());
		
		list.display();
	}
}
