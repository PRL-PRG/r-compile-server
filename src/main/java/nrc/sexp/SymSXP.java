package nrc.sexp;

import java.util.Objects;

public class SymSXP implements SEXP {
    private final String name;

    public SymSXP(String name) {
        this.name = name;
    }

    @Override
    public int getType() {
        return SEXPTypes.SYMSXP;
    }

    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return "SymSXP(" + name + ")";
    }

    @Override
    public boolean equals(Object o) {
        if (this == o)
            return true;
        if (o == null || getClass() != o.getClass())
            return false;
        SymSXP symSXP = (SymSXP) o;
        return Objects.equals(name, symSXP.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name);
    }

}
