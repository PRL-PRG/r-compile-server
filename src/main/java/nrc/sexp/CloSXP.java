package nrc.sexp;

import java.util.Objects;

public class CloSXP extends AbstractSXP {
    private final ListSXP formals;
    private final SEXP body;
    private final EnvSXP env;

    public CloSXP(ListSXP formals, SEXP body, EnvSXP env) {
        this.formals = formals;
        this.body = body;
        this.env = env;
    }

    @Override
    public int getType() {
        return SEXPTypes.CLOSXP;
    }

    @Override
    public String contentToString() {
        return "formals=" + formals + ", body=" + body + ", env=" + env;
    }

    @Override
    public int hashCode() {
        return Objects.hash(formals, body, env);
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        CloSXP other = (CloSXP) obj;
        if (formals == null) {
            if (other.formals != null)
                return false;
        } else if (!formals.equals(other.formals))
            return false;
        if (body == null) {
            if (other.body != null)
                return false;
        } else if (!body.equals(other.body))
            return false;
        if (env == null) {
            if (other.env != null)
                return false;
        } else if (!env.equals(other.env))
            return false;
        return true;
    }

    public SEXP getBody() {
        return body;
    }
}
