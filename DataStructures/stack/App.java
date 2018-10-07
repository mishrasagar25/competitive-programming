package ds.stack;

public class App {

	public static void main(String [] args)
	{
		/*Stack stack = new Stack(10);
		stack.push(10);
		stack.push(20);
		stack.push(30);
		stack.push(40);
		stack.push(10);
		stack.push(20);
		stack.push(30);
		stack.push(40);
		stack.push(10);
		stack.push(20);
		stack.push(30);
		stack.push(40);
		
		
		
		while(!stack.isEmpty())
		{
			System.out.println(stack.pop());
		}
		*/
		System.out.println(reverse("sagar"));
	}
	
	public static String reverse(String str)
	{
		StringBuffer sb = new StringBuffer();
		Stack stack = new Stack(str.length());
		for(int i=0;i<str.length();i++)
		{
			stack.push(str.charAt(i));
		}
		while(!stack.isEmpty())
		{
			sb.append((char)stack.pop());
		}
		return sb.toString();
	}
}
