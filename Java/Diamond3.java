package Java;

public class Diamond3 extends Base implements Diamond1Interface, Diamond2Interface {

	public void NonVirtual1Method() {
		Diamond1Interface.super.NonVirtualMethod();

	}

	public void Virtual1Method() {
		Diamond1Interface.super.NonVirtualMethod();
	}

	public void NonVirtual2Method() {
		Diamond2Interface.super.NonVirtualMethod();

	}


	public void Virtual2Method() {
		Diamond2Interface.super.NonVirtualMethod();
	}
	
	public static void main(String[] args) {
		Diamond3 diamond3 = new Diamond3();
		
		diamond3.Virtual1Method();
		diamond3.NonVirtual1Method();
		diamond3.Virtual2Method();
		diamond3.NonVirtual2Method();
	}
}
