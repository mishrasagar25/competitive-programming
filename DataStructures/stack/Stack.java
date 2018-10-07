package ds.stack;

public class Stack {
	private int maxSize;
	private long[] stackArray;
	private int top;
	
	public Stack(int size)
	{
		this.maxSize = size;
		this.stackArray = new long[size];
		this.top = -1;
		
	}
	
	public void push(long item)
	{
		if(!isFull())
			stackArray[++top] = item;
		else
			System.out.println("stack is overflow");
	}
	
	public long pop()
	{
		if(!isEmpty())
			return stackArray[top--];
		else
		{
			System.out.println("stack is already empty");
			return -1;
		}
	}
	
	public long peak(){
		return stackArray[top];
	}
	
	public boolean isEmpty(){
		return (top == -1);
	}
	
	public boolean isFull(){
		return (top == maxSize-1);
	}
}
