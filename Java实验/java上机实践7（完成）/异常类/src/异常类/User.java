package “Ï≥£¿‡;

public class User {
	public static void main(String[] args) {
		Vehicle car1,car2;
		car1 = new Vehicle();
		car2 = new Vehicle();
		car1.setPower(128);
		car2.setPower(76);
		System.out.println("car1's power : " + car1.getPower());
		System.out.println("car2's power : " + car2.getPower());
		try {
			car1.speedUp(80);
			System.out.println("car1's speed : " + car1.getSpeed());
			car1.speedDown(10);
			System.out.println("car1's speed : " + car1.getSpeed());
		} catch (Vehicle.SpeedException e) {
			e.toShow();
		}
		try {
			car2.speedUp(280);
			System.out.println("car2's speed : " + car2.getSpeed());
			car2.speedDown(20);
			System.out.println("car2's speed : " + car2.getSpeed());
		} catch (Vehicle.SpeedException e) {
			e.toShow();
		}
	}
}
