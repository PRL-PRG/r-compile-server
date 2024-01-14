package nrc.sexp;

import java.util.List;

public class RealSXP extends VectorSXP<Double> {
    public RealSXP(List<Double> data) {
        super(SEXPTypes.REALSXP, data);
    }
}