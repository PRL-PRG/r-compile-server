package nrc.sexp;

public abstract class AbstractSXP implements SEXP {
    private Attributes attributes = Attributes.EMPTY;

    @Override
    public Attributes getAttributes() {
        return attributes;
    }

    public void setAttributes(Attributes attributes) {
        this.attributes = attributes;
    }

    @Override
    public String toString() {
        return SEXPTypes.toString(getType()) + "(" + contentToString() + ", attrs=" + getAttributes() + ")";
    }

    public abstract String contentToString();

}
