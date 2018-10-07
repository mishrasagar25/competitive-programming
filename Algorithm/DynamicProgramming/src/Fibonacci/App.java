package Fibonacci;

public class App {

	public static void main(String args[])
	{
		Fibonacci fibonacci = new Fibonacci();
		System.out.println(fibonacci.fibonacciDP(1000));
		//System.out.println(fibonacci.naiveFibonacci(500));
	}
}
