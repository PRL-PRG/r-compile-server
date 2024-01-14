package nrc.sexp;

public interface SEXP {
    int getType();

    default Attributes getAttributes() {
        return Attributes.NONE;
    }

    default void setAttributes(Attributes attributes) {
        throw new UnsupportedOperationException(SEXPTypes.toString(getType()) + " do not support attributes");
    }
}
