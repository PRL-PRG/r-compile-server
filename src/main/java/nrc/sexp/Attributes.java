package nrc.sexp;

import java.util.HashMap;

public class Attributes {
    private final HashMap<String, SEXP> attrs;

    public static final Attributes EMPTY = new Attributes() {
        @Override
        public String toString() {
            return "EMPTY_ATTR";
        }
    };

    // TODO: prohibit modifications
    public static final Attributes NONE = new Attributes();

    public Attributes() {
        attrs = new HashMap<>();
    }

    public void put(String key, SEXP value) {
        attrs.put(key, value);
    }

    public String toString() {
        return attrs.toString();
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((attrs == null) ? 0 : attrs.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Attributes other = (Attributes) obj;
        if (attrs == null) {
            if (other.attrs != null)
                return false;
        } else if (!attrs.equals(other.attrs))
            return false;
        return true;
    }
}
