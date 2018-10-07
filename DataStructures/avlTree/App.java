package ds.avlTree;

public class App {

	public static void main(String args[]){
		AvlTree avl = new AvlTree();
		avl.insert(10);
		avl.insert(15);
		avl.insert(5);
		avl.insert(14);

		avl.delete(5);
		avl.traverse();
	}
}
