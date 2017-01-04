import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

abstract class Employee {
	private String ID;
	private String name;
	
	public Employee(String a, String b) {
		this.ID = a;
		this.name = b;
	}
	
	public String getID() {
		return ID;
	}
	
	public String getName() {
		return name;
	}
	
	public void setID(String a) {
		this.ID = a;
	}
	
	public void setName(String a) {
		this.name = a;
	}
	
	abstract float salary();
}

class Engineer extends Employee {
	private float coe;
	public Engineer(String a, String b, float c) {
		super(a, b);
		this.coe = c;
	}
	
	public float salary() {
		return coe*300;
	}
}

class Freelancer extends Employee {
	private int hour;
	public Freelancer(String a, String b, int d) {
		super(a, b);
		this.hour = d;
	}
	
	public float salary() {
		return 3*hour;
	}
}

public class TestEmployee {
	public static void main(String[] args) throws IOException {
		Scanner nhap = new Scanner(System.in);
		System.out.print("Nhap so nguoi: ");
		int n = Integer.parseInt(nhap.nextLine());
		
		//Polymorphism
		Employee eList[] = new Employee[n];
		
		for (int i = 0; i < n; i++) {
			String name = null;
			String id = null;
			
			// Engineer
			float coe = (float)0.0;
			
			// Freelancer
			int hour = 0, a;
			do {
			System.out.println("1 - Engineer \t 2 - Freelancer");
			System.out.print("Nguoi thu " + (i+1) + ": ");
			a = nhap.nextInt();
			nhap.nextLine();
			} while (a!= 1 && a != 2);
			switch (a) {
				case 1: {
					System.out.print("Nhap ten: ");
					name = nhap.nextLine();
					System.out.print("Nhap ID: ");
					id = nhap.nextLine();
					System.out.print("Nhap he so luong: ");
					coe = Float.parseFloat(nhap.nextLine());
					eList[i] = new Engineer(id, name, coe);
					break;
				}
				case 2: {
					System.out.print("Nhap ten: ");
					name = nhap.nextLine();
					System.out.print("Nhap ID: ");
					id = nhap.nextLine();
					System.out.print("Nhap gio lam: ");
					hour = Integer.parseInt(nhap.nextLine());
					eList[i] = new Freelancer(id, name, hour);
					break;
				}
			}
		}
		
		nhap.close();	
		
		float[] arrays = new float[eList.length];
		String[] names = new String[eList.length];
		String[] ids = new String[eList.length];
		for (int i = 0; i < arrays.length; i++) {
			arrays[i] = eList[i].salary();
			names[i] = eList[i].getName();
			ids[i] = eList[i].getID();
		}
		
		System.out.println("Name\tID\tSalary");
		for (int i = 0; i<n; i++) {
			System.out.println(names[i] + "\t" + ids[i] + "\t" + arrays[i] + "$");
		}
		List<String> l1 = new LinkedList<String> ();
		for (int i = 0; i < n; i++) {
			l1.add(names[i] + "\t" + ids[i] + "\t" + arrays[i] + "$");
		}
		
        BufferedWriter out = new BufferedWriter(new FileWriter("EIS.txt"));
        PrintWriter printer = new PrintWriter(out);
        printer.print(l1 + "\n");
        out.close();
        printer.close();
	}
}
