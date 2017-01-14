import java.io.*;
import java.util.*;

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
		
		System.out.println("Name\tID\tSalary");
		for (int i = 0; i<n; i++) {
			System.out.println(eList[i].getName() + "\t" + eList[i].getID() + "\t" + eList[i].salary() + "$");
		}
		LinkedList<String> l1 = new LinkedList<String> ();
		for (int i = 0; i < n; i++) {
			l1.add(eList[i].getName() + "\t" + eList[i].getID() + "\t" + eList[i].salary() + "\n");
		}
		Iterator<String> itr = l1.iterator();
		
        BufferedWriter out = new BufferedWriter(new FileWriter("EIS.txt"));
        while (itr.hasNext()) {
        	String temp = itr.next();
        	out.write(temp);
        }
        out.close();
		
	}
}
