package nrc.sexp;

import java.util.Objects;

import nrc.util.Either;

public class LangSXP extends AbstractSXP {

    private final Either<SymSXP, LangSXP> fun;
    private final ListSXP args;

    public LangSXP(Either<SymSXP, LangSXP> fun, ListSXP args) {
        this.fun = fun;
        this.args = args;
    }

    @Override
    public int getType() {
        return SEXPTypes.LANGSXP;
    }

    public Either<SymSXP, LangSXP> getFun() {
        return fun;
    }

    public ListSXP getArgs() {
        return args;
    }

    @Override
    public String contentToString() {
        return "fun=" + fun + ", args=" + args;
    }

    @Override
    public int hashCode() {
        return Objects.hash(fun, args);
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        LangSXP other = (LangSXP) obj;
        if (fun == null) {
            if (other.fun != null)
                return false;
        } else if (!fun.equals(other.fun))
            return false;
        if (args == null) {
            if (other.args != null)
                return false;
        } else if (!args.equals(other.args))
            return false;
        return true;
    }

}
