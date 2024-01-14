package nrc.sexp;

import java.util.List;

public final class BCodeSXP implements SEXP {
    private final List<Integer> code;
    private final List<SEXP> consts;

    public BCodeSXP(List<Integer> code, List<SEXP> consts) {
        this.code = code;
        this.consts = consts;
    }

    @Override
    public int getType() {
        return SEXPTypes.BCODESXP;
    }

    @Override
    public String toString() {
        return "BCodeSXP(code=" + code + ", consts=" + consts + "";
    }

}