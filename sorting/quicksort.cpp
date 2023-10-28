int partitionArray(int input[], int start, int end) {
	int pivot = input[start];
	int i=start, j=end+1;
	while(i < j){
		do{
			i++;
		}while(input[i] <= pivot);

		do{
			j--;
		}while(input[j] > pivot);

		if(i<j) swap(input[i], input[j]);
	}
	swap(input[start], input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	if(start < end){
		int j = partitionArray(input, start, end);
		quickSort(input, start, j-1);
		quickSort(input, j+1, end);
	}
}