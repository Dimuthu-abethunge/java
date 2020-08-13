
public class first{
	public static void main(String[] args){
		first ob1 = new first();
		ob1.firstmeth();
		first ob2 = new first();
		ob2.firstmeth();
		first ob3 = new first();
		ob3.firstmeth();
		secondtmeth();
	}
	
public  void firstmeth(){
	System.out.println("First methode");
}
public  static void secondtmeth(){
	System.out.println("secondtmeth");
}
}