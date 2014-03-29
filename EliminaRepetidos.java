public class EliminaRepetidos{
public static void main(String args[])
{
	EliminaRepetidos arraycar= new EliminaRepetidos();
	String Arraycar[]={"2","2","3","4","5","5","7","5","7","8","9"};

	System.out.println(arraycar);

	for(int i=0;i<Arraycar.length;i++){
 		for(int j=0;j<Arraycar.length-1;j++){
 		if(i!=j){
			if(Arraycar[i]==Arraycar[j]){
				Arraycar[i]="";
										}
				}
											}
										}
	int n=Arraycar.length;
	for (int k=0;k<=n-1;k++){
		if(Arraycar[k]!=""){
		System.out.println( Arraycar[k]);
							}
							}
}
							}
