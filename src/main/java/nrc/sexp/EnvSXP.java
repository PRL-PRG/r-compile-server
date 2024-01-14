package nrc.sexp;

public class EnvSXP extends AbstractSXP {

    @Override
    public int getType() {
        return SEXPTypes.ENVSXP;
    }

    @Override
    public String contentToString() {
        return "";
    }

}
