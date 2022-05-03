import java.util.ArrayList;
import java.util.*;
class LeetSort{
	public List<String> answer(List<String> input){
	       List<String> output = new ArrayList<String>();
	       HashMap<char,Integer> m = new HashMap<>(); 
	       HashMap<char,String> hm = new HashMap<>();
	       for(String w : input){
	       	if(!m.containsKey(w.charAt(0))) m.put(w.charAt(0),0);
            m.put(w.charAt(0),m.get(w.charAt(0))+1);
            hm.put(w.charAt(0),w);
	       }
	       String word="";
	        for(String w : input){
	       	if(!m.containsKey(w.charAt(0))){
                word = w;
                break;
	       	}
	       }
           System.out.println("Starting String: " + word);
	       for(int i=0;i<input.size();++i){
	             //output.add(word);
	            // word = hm.get(word.charAt(word.length()-1));
	       }
	       return output;
	}
}