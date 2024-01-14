package nrc.sexp;

public final class NilSXP implements SEXP {
    private NilSXP() {
    }

    static final NilSXP INSTANCE = new NilSXP();

    @Override
    public int getType() {
        return SEXPTypes.NILSXP;
    }

    @Override
    public String toString() {
        return "NilSXP";
    }
}
