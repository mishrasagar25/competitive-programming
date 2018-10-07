package ds.queue;

public class Queue {
	private int maxSize;
	private long[] queueArray;
	private int front;
	private int rear;
	private int nItems;
	
	public Queue(int size){
		this.maxSize = size;
		this.queueArray = new long[size];
		this.front = this.rear = -1;
		this.nItems = 0;
	}
	
	public void insert(long item)
	{
		if(!isFull())
		{
			
			if(front == -1 && rear == -1)
				front = rear = 0;
			else if(rear == maxSize-1)
				rear = 0;
			else
				rear++;
			
			queueArray[rear] = item;
			nItems++;
		}
		else
			System.out.println("Queue is overflow");
	}
	
	public long remove()
	{
		if(!isEmpty())
		{	
			nItems--;
			long data = queueArray[front++];
			if(front == maxSize)
			{
				if(!isEmpty())
					front = 0;	
			}
			return data;
		}
		else
		{
			System.out.println("queue is already empty");
			return -1;
		}
	}
	
	public boolean isEmpty(){
		/*if(front == -1 || front == rear+1)
			return true;
		else
			return false;
		*/
		return (nItems==0);
	}
	
	public boolean isFull(){
		/*if(rear == maxSize-1)
			return true;
		else 
			return false;
			*/
		return (nItems == maxSize);
	}
}
