package nrc.sexp;

import java.util.List;

public final class LglSXP extends VectorSXP<Integer> {
    public LglSXP(List<Integer> data) {
        super(SEXPTypes.LGLSXP, data);
    }
}