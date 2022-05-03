import java.util.ArrayList;
import java.util.*;
class Leetcode{
	public List<String> answer(List<String> input,Integer k,String word){
	       List<String> output = new ArrayList<String>();
	       for(int i=0;i<k;++i) output.add(input.get(i));
	       for(int i=k;i<input.size();++i){
	             if(input.get(i)!=word){
	                output.remove(0);
	                output.add(input.get(i));
	             }
	             else{
	             	output.add(word);
	                break;
	             }
	       }
	       return output;
	}
}