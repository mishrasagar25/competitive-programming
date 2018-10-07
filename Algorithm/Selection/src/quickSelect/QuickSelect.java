package quickSelect;

import java.util.Random;

public class QuickSelect {

	private int []nums;

	public QuickSelect(int []nums)
	{
		this.nums = nums;
	}

	public int select(int k)
	{
		return select(0 , nums.length-1 , k-1);
	}

	private int select(int firstIndex, int lastIndex, int k) {

		int pivot = partition(firstIndex , lastIndex);

		if(k < pivot)
			return select(firstIndex , pivot-1 , k);
		else if(k>pivot)
			return select(pivot+1,lastIndex , k);

		return nums[k];
	}

	private void swap(int i , int j)
	{
		int temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
	private int partition(int firstIndex, int lastIndex) {

		int pivot = new Random().nextInt(lastIndex - firstIndex + 1) + firstIndex;

		swap(lastIndex , pivot);
		for(int i=firstIndex ; i<lastIndex; i++)
		{
			if(nums[i] < nums[lastIndex]) //by this all elements greater than pivot comes in left side so we can find Kth max element if we want to find Kth smallest then
			{							  //we have to just replace greater than sign with small than by this all elements small than pivot comes in left side.
				swap(i,firstIndex);
				firstIndex++;
			}
		}

		swap(firstIndex , lastIndex);


		return firstIndex;
	}
}
