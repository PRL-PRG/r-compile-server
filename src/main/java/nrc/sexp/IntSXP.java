package nrc.sexp;

import java.util.List;

public class IntSXP extends VectorSXP<Integer> {
    public IntSXP(List<Integer> data) {
        super(SEXPTypes.INTSXP, data);
    }
}
