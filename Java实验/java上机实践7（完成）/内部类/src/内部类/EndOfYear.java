package �ڲ���;

class Huawei {
	private int Prize = 50000000;
	class Employee{
		int ���ս���;
		double ���ֹɷ�;
		Employee(){
		}
		Employee(double g) {
			���ֹɷ� = g;
			���ս��� = (int)(Prize*���ֹɷ�);
		}
		void Ӧ�����ս���(){
			System.out.println(���ս���);
		}
	}
}

public class EndOfYear{
	public static void main(String[] args) {
		Huawei.Employee ��Ŀ���� = new Huawei().new Employee(0.0005);
		Huawei.Employee �������ʦ = new Huawei().new Employee(0.0001);
		��Ŀ����.Ӧ�����ս���();
		�������ʦ.Ӧ�����ս���();
	}
}
