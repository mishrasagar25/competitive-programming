package ds.avlTree;

public class AvlTree implements Tree {

	private Node root;

	@Override
	public void insert(int data) {
		root = insert(root , data);

	}

	private Node insert(Node node, int data) {

		if(node == null)
			return new Node(data);

		if(data < node.getData())
			node.setLeftNode(insert(node.getLeftNode() , data));
		else
			node.setRightNode(insert(node.getRightNode() , data));

		node.setHeight(Math.max(height(node.getLeftNode()), height(node.getRightNode())) + 1);

		node = settleViolation(data , node);

		return node;

	}

	public void delete(int data)
	{
		root = delete(root , data);
	}

	private Node delete(Node node , int data)
	{

		if(node == null)
			return node;

		if(data < node.getData())
		{
			node.setLeftNode(delete(node.getLeftNode(), data));
		}
		else if(data > node.getData())
		{
			node.setRightNode(delete(node.getRightNode() , data));
		}
		else
		{
			if(node.getLeftNode() == null && node.getRightNode() == null)
			{
				System.out.println("Removing a leaf node...");
				return null;
			}
			else if(node.getLeftNode() == null)
			{
				System.out.println("removing a right child");
				Node tempNode = node.getRightNode();
				node = null;
				return tempNode;
			}
			else if(node.getRightNode() == null)
			{
				System.out.println("removing a left child");
				Node tempNode = node.getLeftNode();
				node = null;
				return tempNode;
			}

				Node tempNode = min(node.getRightNode());
				node.setData( tempNode.getData() );
				node.setRightNode(delete(node.getRightNode() , tempNode.getData()));

		}

		node.setHeight(Math.max(height(node.getLeftNode()), height(node.getRightNode())) + 1);

		return settleDeletion(node);

	}
	private Node min(Node node)
	{
		while(node.getLeftNode() != null)
			node = node.getLeftNode();

		return node;
	}
	private Node settleDeletion(Node node) {

		int balance = getBalance(node);

		// OK, we know the tree is left heavy BUT it can be left-right heavy or left-left heavy
		if (balance > 1) {

			// left right heavy situation: left rotation on parent + right rotation on grandparent
			if (getBalance(node.getLeftNode()) < 0) {
				node.setLeftNode(leftRotation(node.getLeftNode()));
			}

			// this is the right rotation on grandparent ( if left-left heavy, thats single right rotation is needed
			return rightRotation(node);
		}

		// OK, we know the tree is right heavy BUT it can be left-right heavy or right-right heavy
		if (balance < -1) {
			// right - left heavy so we need a right rotation ( on parent!!! ) before left rotation
			if (getBalance(node.getRightNode()) > 0) {
				node.setRightNode(rightRotation(node.getRightNode()));
			}

			// left rotation on grand parent
			return leftRotation(node);
		}

		return node;
	}

	private Node settleViolation(int data, Node node) {
		int balance  = getBalance(node);

		//left-left ll
		if(balance > 1 && data < node.getLeftNode().getData())
			return rightRotation(node);

		//right-right rr
		if(balance < -1 && data > node.getRightNode().getData())
			return leftRotation(node);

		//left-right lr
		if(balance > 1 && data > node.getLeftNode().getData())
		{
			node.setLeftNode(leftRotation(node.getLeftNode()));
			return rightRotation(node);
		}

		//right-left rl
		if(balance < -1 && data < node.getRightNode().getData())
		{
			node.setRightNode(rightRotation(node.getRightNode()));
			return leftRotation(node);
		}

		return node;
	}

	private Node rightRotation(Node node) {
		System.out.println("Rotating to the right on node = "+node);

		Node tempLeftNode = node.getLeftNode();
		Node temp = tempLeftNode.getRightNode();

		tempLeftNode.setRightNode(node);
		node.setLeftNode(temp);

		node.setHeight(Math.max(height(node.getLeftNode()), height(node.getRightNode())) + 1);
		tempLeftNode.setHeight(Math.max(height(tempLeftNode.getLeftNode()), height(tempLeftNode.getRightNode())) + 1);

		return tempLeftNode;
	}

	private Node leftRotation(Node node) {
		System.out.println("Rotating to the left on node = "+node);

		Node tempRightNode = node.getRightNode();
		Node temp = tempRightNode.getLeftNode();

		tempRightNode.setLeftNode(node);
		node.setRightNode(temp);

		node.setHeight(Math.max(height(node.getLeftNode()), height(node.getRightNode())) + 1);
		tempRightNode.setHeight(Math.max(height(tempRightNode.getLeftNode()), height(tempRightNode.getRightNode())) + 1);

		return tempRightNode;
	}

	private int height(Node node) {
		if (node == null)
			return -1;

		return node.getHeight();
	}

	@SuppressWarnings("unused")
	private int getBalance(Node node) {
		if (node == null)
			return 0;

		return height(node.getLeftNode()) - height(node.getRightNode());
	}

	@Override
	public void traverse() {
		// TODO Auto-generated method stub

		if (root == null)
			return;

		inOrder(root);
	}

	private void inOrder(Node node) {
		if (node.getLeftNode() != null)
			inOrder(node.getLeftNode());

		System.out.println(node);

		if (node.getRightNode() != null)
			inOrder(node.getRightNode());

	}

}
