public class Autos extends MediosTransporte /// Clase principal
{
	String marca;
	String modelo;
	String color;
	String matricula;
	double precio;
	String dueno;


	public Autos (String marca, String modelo, String color, String matricula, double precio)
	{												//<----constrictor de autos
		System.out.println("creando un Auto...\n");
		this.marca= marca;
		this.modelo= modelo;
		this.color= color;
		this.matricula= matricula;
		this.precio= precio;
	}

public static void main (String args[])   
{   
	Autos a1 = new Autos("Seat", "Leon", "Rojo", "2178wy7wa", 70654.3);
	Autos a2 = new Autos("Ford", "Camaro", "Amarillo", "iouqw4", 978324.3);
	Autos a3 = new Autos("Ferrari", "Enzo", "Negro", "q3rgby4", 3456644.3);
	a1.kilometros=123.78;
	a2.dueno="Miguel Vargas";
	a3.num_pasajeros=4;
	//// Se Muestran autos, primer auto===
	System.out.println("Los datos del primer auto son:\n");
	System.out.println("Marca: "+a1.marca);
	System.out.println("Modelo: "+a1.modelo);
	System.out.println("Color: "+a1.color);
	System.out.println("Matricula: "+a1.matricula);
	System.out.println("Precio: "+a1.precio);
	System.out.println("Ha recorrido un total de"+a1.kilometros+"km");
	System.out.println();
		// Segundo Auto====
	System.out.println("Los datos del segundo auto son:\n");
	System.out.println("Marca: "+a2.marca);
	System.out.println("Modelo: "+a2.modelo);
	System.out.println("Color: "+a2.color);
	System.out.println("Matricula: "+a2.matricula);
	System.out.println("Precio: "+a2.precio);
	System.out.println("Su dueno se llama: "+a2.dueno);
	System.out.println();
	/// Tercer auto============
	System.out.println("Los datos del Tercer auto son:\n");
	System.out.println("Marca: "+a3.marca);
	System.out.println("Modelo: "+a3.modelo);
	System.out.println("Color: "+a3.color);
	System.out.println("Matricula: "+a3.matricula);
	System.out.println("Precio: "+a3.precio);
	System.out.println();
	

	
	a1.arrancar();
	a2.gas();
	a3.carrera();
	a1.frenar();
	a3.acelerar();

}             /// Metodos
public void arrancar () 
{   
	System.out.println(this.modelo+ " tuvo un arranque exitoso");
}
public void gas ()
	{
	System.out.println(this.modelo+ " esta cargando gasolina");
	}
public void carrera ()
	{
	System.out.println(this.modelo+ " ha ganado la carrera");
	}
}
