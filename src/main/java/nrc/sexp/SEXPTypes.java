package nrc.sexp;

public class SEXPTypes {
    private SEXPTypes() {
    }

    public static final int NILSXP = 0; /* nil = NULL */
    public static final int SYMSXP = 1; /* symbols */
    public static final int LISTSXP = 2; /* lists of dotted pairs */
    public static final int CLOSXP = 3; /* closures */
    public static final int ENVSXP = 4; /* environments */
    public static final int PROMSXP = 5; /* promises: [un]evaluated closure arguments */
    public static final int LANGSXP = 6; /* language constructs (special lists) */
    public static final int SPECIALSXP = 7; /* special forms */
    public static final int BUILTINSXP = 8; /* builtin non-special forms */
    public static final int CHARSXP = 9; /* "scalar" string type (internal only) */
    public static final int LGLSXP = 10; /* logical vectors */
    public static final int INTSXP = 13; /* integer vectors */
    public static final int REALSXP = 14; /* real variables */
    public static final int CPLXSXP = 15; /* complex variables */
    public static final int STRSXP = 16; /* string vectors */
    public static final int DOTSXP = 17; /* dot-dot-dot object */
    public static final int ANYSXP = 18; /* make "any" args work */
    public static final int VECSXP = 19; /* generic vectors */
    public static final int EXPRSXP = 20; /* expressions vectors */
    public static final int BCODESXP = 21; /* byte code */
    public static final int EXTPTRSXP = 22; /* external pointer */
    public static final int WEAKREFSXP = 23; /* weak reference */
    public static final int RAWSXP = 24; /* raw bytes */
    public static final int S4SXP = 25; /* S4 non-vector */
    public static final int NEWSXP = 30; /* fresh node creaed in new page */
    public static final int FREESXP = 31; /* node released by GC */
    public static final int FUNSXP = 99;

    public static String toString(int type) {
        switch (type) {
            case NILSXP:
                return "NILSXP";
            case SYMSXP:
                return "SYMSXP";
            case LISTSXP:
                return "LISTSXP";
            case CLOSXP:
                return "CLOSXP";
            case ENVSXP:
                return "ENVSXP";
            case PROMSXP:
                return "PROMSXP";
            case LANGSXP:
                return "LANGSXP";
            case SPECIALSXP:
                return "SPECIALSXP";
            case BUILTINSXP:
                return "BUILTINSXP";
            case CHARSXP:
                return "CHARSXP";
            case LGLSXP:
                return "LGLSXP";
            case INTSXP:
                return "INTSXP";
            case REALSXP:
                return "REALSXP";
            case CPLXSXP:
                return "CPLXSXP";
            case STRSXP:
                return "STRSXP";
            case DOTSXP:
                return "DOTSXP";
            case ANYSXP:
                return "ANYSXP";
            case VECSXP:
                return "VECSXP";
            case EXPRSXP:
                return "EXPRSXP";
            case BCODESXP:
                return "BCODESXP";
            case EXTPTRSXP:
                return "EXTPTRSXP";
            case WEAKREFSXP:
                return "WEAKREFSXP";
            case RAWSXP:
                return "RAWSXP";
            case S4SXP:
                return "S4SXP";
            case NEWSXP:
                return "NEWSXP";
            case FREESXP:
                return "FREESXP";
            case FUNSXP:
                return "FUNSXP";
            default:
                throw new IllegalArgumentException("Unknown SEXP type: " + type);
        }
    }
}
