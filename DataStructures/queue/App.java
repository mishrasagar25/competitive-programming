package ds.queue;

public class App {
	public static void main(String args[]){
		Queue queue = new Queue(3);
		System.out.println(queue.remove());
		queue.insert(10);
		queue.insert(20);
		System.out.println(queue.remove());
		queue.insert(30);
		queue.insert(40);
		System.out.println(queue.remove());
		System.out.println(queue.remove());
		System.out.println(queue.remove());
		queue.insert(50);
		System.out.println(queue.remove());
	}	
}
