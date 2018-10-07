package ds.Tree;

import java.util.LinkedList;

public class BST {
	private Node root;

	public Node getNewNode(int data)
	{
		Node newNode = new Node();
		newNode.data = data;
		return newNode;
	}

	public void insert(int data)
	{
		root = insert(root,data);
	}

	private Node insert(Node node , int data)
	{
		if(node == null)
			node = getNewNode(data);
		else if(data <= node.data)
		{
			node.left = insert(node.left,data);
		}
		else
			node.right = insert(node.right,data);

		return node;
	}

	public void inOrder()
	{
		inOrder(root);
		System.out.println("");
	}

	private void inOrder(Node node)
	{
		if(node != null)
		{
			inOrder(node.left);
			System.out.print(node.data + " ");
			inOrder(node.right);
		}
	}

	public void search(int data)
	{
		int n = search(root,data);
		if(n == data)
			System.out.println("Required Data found");
		else
			System.out.println("Required Data not found");
	}

	private int search(Node node, int data)
	{
		if(node == null)
			return -1;
		else if(node.data == data)
			return data;
		else if(data <= node.data)
			return search(node.left , data);
		else
			return search(node.right , data);

	}

	public void min()
	{
		Node temp = min(root);
		if(temp != null)
			System.out.println("Minimum element : "+ temp.data);

	}

	private Node min(Node root)
	{
		if(root == null)
		{
			System.out.println("BST is empty");
			return null;
		}
		while(root.left != null)
			root = root.left;

		return root;
	}

	public void max()
	{
		Node temp = max(root);
		if(temp != null)
			System.out.println("Maximum element : " + temp.data);
	}

	private Node max(Node root)
	{
		if(root == null)
		{
			System.out.println("BST is empty");
			return null;
		}

		while(root.right != null)
			root = root.right;

		return root;
	}

	public void getSuccessor(int data)
	{
		Node temp = getSuccessor(root,data);
		if(temp == null)
			System.out.println("Given element is not in BST");
		else
			System.out.println("Successor of "+ data + " is : "+temp.data);
	}

	private Node getSuccessor(Node root,int data)
	{
		Node current = find(root,data);
		if(current == null)
			return null;
		else if(current.right != null)
		{ // when node has right subtree
			return min(current);
		}
		else
		{
			//when node have no right subtree
			Node successor = null;
			Node ancestor = root;

			while(ancestor != current)
			{
				if(current.data < ancestor.data)
				{
					successor = ancestor;
					ancestor = ancestor.left;
				}
				else
				{
					ancestor = ancestor.right;
				}
			}

			return successor;
		}
	}

	private Node find(Node root,int data)
	{
		if(root == null)
			return null;
		else
		{
			if(root.data == data)
				return root;
			else if(data <= root.data)
				return find(root.left,data);
			else
				return find(root.right,data);
		}

	}

	public void delete(int data)
	{
		delete(root,data);
	}

	private Node delete(Node root , int data)
	{
		if(root == null)
			return null;
		else if(data < root.data)
			root.left = delete(root.left , data);
		else if(data > root.data)
			root.right = delete(root.right , data);
		else
		{
			if(root.left == null && root.right == null)
				root = null;
			else if(root.left == null)
			{
				root = root.right;
			}
			else if(root.right == null)
			{
				root = root.left;
			}
			else
			{
				Node temp = min(root.right);
				//System.out.println(temp.data);
				root.data = temp.data;
				root.right = delete(root.right , temp.data);
			}

		}
		return root;

	}

	public void findHeight()
	{
		System.out.println("Height of tree : "+ findHeight(root));
	}


	private int findHeight(Node root)
	{
		if(root == null)
			return -1;

		return maxH(findHeight(root.left),findHeight(root.right))+1;
	}

	private int maxH(int l ,int r)
	{
		return r>l ? r : l;
	}

	public void isBST(){

		if(isBST(root , Integer.MIN_VALUE , Integer.MAX_VALUE))
		{
			System.out.println("yes the given tree is BST");
		}
		else
			System.out.println("No the given tree is not BST");
	}

	private boolean isBST(Node root , int min , int max)
	{
		if(root == null ) return true;

		if(root.data >= min && root.data <= max && isBST(root.left , min , root.data ) && isBST(root.right , root.data+1 , max))
			return true;
		else
			return false;
	}

	public void levelOrder()
	{
		levelOrder(root);
	}

	private void levelOrder(Node root)
	{
		if(root == null)
		{
			System.out.println("tree is empty");
			return;
		}

		LinkedList list = new LinkedList();

		list.addFirst(root);

		while(list.size() != 0)
		{
			Node current = (Node)list.getFirst();
			System.out.print(current.data + " ");

			if(current.left != null) list.add(current.left);
			if(current.right != null) list.add(current.right);

			list.removeFirst();
		}
	}

}
