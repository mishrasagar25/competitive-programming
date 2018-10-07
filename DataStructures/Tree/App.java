package ds.Tree;

import java.util.Scanner;
public class App {

	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		BST bst = new BST();
		bst.insert(15);
		bst.insert(10);
		bst.insert(20);
		bst.insert(8);
		bst.insert(12);
		bst.insert(17);
		bst.insert(25);
		bst.insert(6);
		bst.insert(11);
		bst.insert(16);
		bst.insert(27);

	//	bst.inOrder();

		/*System.out.print("Enter data to search : ");
		int n = sc.nextInt();
		bst.search(n);
0

		bst.min();
		bst.max();
		bst.getSuccessor(12);
		bst.delete(10);
		bst.inOrder();

		bst.findHeight();

		bst.isBST();
*/
		bst.levelOrder();

	}
}
