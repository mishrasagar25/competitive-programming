package medianOfMedian;

public class App {

	int nums[] = {1 ,5, 4, 8, -2};
	MedianOfMedians mom = new MedianOfMedians(nums);

	public static void main(String [] args)
	{
		int nums[] = {1 ,5, 4, 8, -2};
		MedianOfMedians mom = new MedianOfMedians(nums);
		System.out.println(mom.select(4));
	}

}
