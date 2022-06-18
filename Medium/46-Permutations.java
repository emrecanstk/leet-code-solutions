class Solution {
    
	public List<List<Integer>> permute(int[] nums) {
		
        List<List<Integer>> array = new ArrayList<List<Integer>>();
		List<Integer> res = new ArrayList<>();
		solver(array,res,nums,new boolean[nums.length],0);
		return array;
        
	}
	
    public void solver(List<List<Integer>> array , List<Integer> res, int[] arr, boolean[] visited, int idx){

		int n = arr.length;
		if(idx==n){
			array.add(new ArrayList<>(res));
			return;
		}
        
		for(int i=0;i<n;i++){
			
            if(visited[i]==false){
                
				visited[i]=true;
				res.add(arr[i]);
				solver(array,res,arr,visited,idx+1);
				res.remove(res.size()-1);
				visited[i]=false;
                
			}
		}
        
	}
}