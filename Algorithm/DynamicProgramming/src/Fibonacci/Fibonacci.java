package Fibonacci;

import java.util.HashMap;
import java.util.Map;
public class Fibonacci {

	private Map<Integer , Integer> memorizeTable;

	public Fibonacci()
	{
		this.memorizeTable = new HashMap<>();
		this.memorizeTable.put(0,0);
		this.memorizeTable.put(1,1);
	}

	public int fibonacciDP(int n)
	{
		if(memorizeTable.containsKey(n)) return memorizeTable.get(n);

		memorizeTable.put(n-1, fibonacciDP(n-1));
		memorizeTable.put(n-2, fibonacciDP(n-2));

		int result = memorizeTable.get(n-1) + memorizeTable.get(n-2);
		memorizeTable.put(n , result);
		return result;
	}
	
	public int naiveFibonacci(int n)
	{
		if(n==0) return 0;
		if(n==1) return 1;

		return naiveFibonacci(n-1) + naiveFibonacci(n-2);
	}

}

