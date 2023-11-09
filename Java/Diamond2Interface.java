package Java;

public interface Diamond2Interface {

	public default void NonVirtualMethod() {
		System.out.println("Diamond2Interface NonVirtualMethod");
	};

	public default void VirtualMethod() {
		System.out.println("Diamond2Interface Virtual Method");
	};

}