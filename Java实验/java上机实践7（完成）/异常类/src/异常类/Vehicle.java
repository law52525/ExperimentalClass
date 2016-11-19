package 异常类;

public class Vehicle {
	double speed;
	int power;
	SpeedException OverSpeed;
	SpeedException Back;

	class SpeedException extends Exception {
		String mes;

		SpeedException() {
		}

		SpeedException(String s) {
			mes = s;
		}

		void toShow() {
			System.out.println(mes);
		}
	}

	void speedUp(int s) throws SpeedException {
		if (speed + s > 200) {
			OverSpeed = new SpeedException("时速" + (speed + s) + ":已超速!");
			throw OverSpeed;
		} else
			speed = speed + s;
	}

	void speedDown(int d) throws SpeedException {
		if (speed - d < 0) {
			Back = new SpeedException("时速" + (speed - d) + ":即将倒车!");
			throw Back;
		} else
			speed = speed - d;
	}

	void setPower(int p) {
		power = p;
	}

	int getPower() {
		return power;
	}

	double getSpeed() {
		return speed;
	}

	void brake() {
		speed = 0.0;
	}
}
