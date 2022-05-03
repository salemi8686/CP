public class MyCar{
	private String marka;
	private int year;
	MyCar(String marka,int year){
	      this.marka = marka;
	      this.year = year;
	}

	public int age(){
           return 2022-this.year;
	}

	public String compares(String newMarka){
	     return this.marka + " better than  " + newMarka;
	}
}