package Java;

public interface Diamond1Interface {

	public default void NonVirtualMethod() {
		System.out.println("Diamond1Interface NonVirtualMethod");
	};

	public default void VirtualMethod() {
		System.out.println("Diamond1Interface Virtual Method");
	};

}