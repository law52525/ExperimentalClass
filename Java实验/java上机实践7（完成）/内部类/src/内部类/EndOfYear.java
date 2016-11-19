package 内部类;

class Huawei {
	private int Prize = 50000000;
	class Employee{
		int 年终奖金;
		double 所持股份;
		Employee(){
		}
		Employee(double g) {
			所持股份 = g;
			年终奖金 = (int)(Prize*所持股份);
		}
		void 应得年终奖金(){
			System.out.println(年终奖金);
		}
	}
}

public class EndOfYear{
	public static void main(String[] args) {
		Huawei.Employee 项目经理 = new Huawei().new Employee(0.0005);
		Huawei.Employee 软件工程师 = new Huawei().new Employee(0.0001);
		项目经理.应得年终奖金();
		软件工程师.应得年终奖金();
	}
}
