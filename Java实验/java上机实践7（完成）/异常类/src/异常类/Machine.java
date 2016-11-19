package 异常类;

public class Machine {
	public void checkBag(Goods goods) throws DangerException {
		if (goods.isDanger()) {
			DangerException danger = new DangerException();
			throw danger;
		} else {
			System.out.println(goods.getName()+"不是危险品!");
		}
	}
}
