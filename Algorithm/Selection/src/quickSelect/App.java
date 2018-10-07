package quickSelect;

public class App {

	public static void main(String[] args) {

		int nums[] = {1 ,5, 4, 8, -2};
		QuickSelect quickselect  = new QuickSelect(nums);
		System.out.println(quickselect.select(3));
	}

}
