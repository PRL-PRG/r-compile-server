package nrc.sexp;

import java.util.List;

public class StrSXP extends VectorSXP<String> {
    public StrSXP(List<String> data) {
        super(SEXPTypes.STRSXP, data);
    }
}
