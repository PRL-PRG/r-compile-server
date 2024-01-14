package nrc.sexp;

import java.util.List;

public class VecSXP extends VectorSXP<SEXP> {
    public VecSXP(List<SEXP> data) {
        super(SEXPTypes.VECSXP, data);
    }
}