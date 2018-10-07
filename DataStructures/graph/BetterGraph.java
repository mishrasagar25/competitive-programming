package ds.graph;

public class BetterGraph {
	private int vCount;
	private SinglyLinkedList[] list;
	private boolean isDirected;
	static int i=0;
	
	public BetterGraph(int vCount , String dir)
	{
		this.vCount = vCount;
		list = new SinglyLinkedList[vCount];
		isDirected = dir.equalsIgnoreCase("directed");
	
		for(int i=0;i<vCount;i++)
		{
			list[i] = new SinglyLinkedList();
		}
	}
	
	public void addVertex(String str)
	{
		if(i<vCount)
			list[i].insertFirst(str);
		else
			System.out.println("you can not add more than "+vCount+" vertex");
		i++;
	}
	
	public void addEdge(String src , String dest){
		
		for(int i=0;i<vCount;i++)
		{
			if(isDirected)	
			{
				if(list[i].getFirst().equalsIgnoreCase(src))
					list[i].insertLast(dest);
			}
			else
			{
				if(list[i].getFirst().equalsIgnoreCase(src))
					list[i].insertLast(dest);
				else if(list[i].getFirst().equalsIgnoreCase(dest))
					list[i].insertLast(src);
			}
		}
	}
	
	public void print(String src){
		for(int i=0;i<vCount;i++)
		{
			if(list[i].getFirst().equalsIgnoreCase(src))
			{
				list[i].display();
				break;
			}

		}
	}
	
}
