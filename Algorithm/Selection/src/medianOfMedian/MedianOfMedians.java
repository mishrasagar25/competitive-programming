package medianOfMedian;

import java.util.Arrays;

public class MedianOfMedians {

	private int []nums;
	private int []medians;
	public MedianOfMedians(int []nums)
	{
		this.nums = nums;
	}

	public int select(int k)
	{
		return select(0,nums.length-1,k-1);
	}

	private int select(int firstIndex , int lastIndex , int k)
	{
		int pivot = partition(firstIndex , lastIndex);

		if(k < pivot)
			select(firstIndex , pivot-1, k);
		else if(k > pivot)
			select(pivot+1 , lastIndex , k);

		return nums[k];
	}

	private void swap(int i , int j)
	{
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
	public int partition(int firstIndex , int lastIndex)
	{
		int pivot = getPivotValue(nums , firstIndex , lastIndex);
		System.out.println(pivot);
		//swap(lastIndex , pivot);

		for(int i = firstIndex ; i<lastIndex ; i++)
		{
			if(nums[i] > pivot)
			{
				swap(i , firstIndex);
				firstIndex++;
			}
		}

		return firstIndex;
	}


	private int getPivotValue(int arr [] , int low , int high)
	{
		if(high-low+1 <= 9)
		{
			Arrays.sort(arr);
			return arr[arr.length/2];
		}

		int temp[] = null;

		medians = new int[(int)Math.ceil((double)(high-low+1)/5)];

		int medianIndex = 0;

		while(low <= high)
		{
			temp = new int[Math.min(5, high-low+1)];

			for(int i=0;i<temp.length && low<=high ; i++)
			{
				temp[i] = arr[low];
				low++;
			}

			Arrays.sort(temp);

			medians[medianIndex] = temp[temp.length/2];
			medianIndex++;
		}

		return getPivotValue(medians , 0 , medians.length-1);

	}
}
