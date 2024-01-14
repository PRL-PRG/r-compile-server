package nrc.sexp;

import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;

public abstract class VectorSXP<T> extends AbstractSXP implements Iterable<T> {
    private final List<T> data;
    private final int type;

    public VectorSXP(int type, List<T> data) {
        this.type = type;
        this.data = Collections.unmodifiableList(data);
    }

    @Override
    public String contentToString() {
        return data.toString();
    }

    @Override
    public int getType() {
        return type;
    }

    public T get(int i) {
        return data.get(i);
    }

    public List<T> getData() {
        return data;
    }

    public int size() {
        return data.size();
    }

    @Override
    public Iterator<T> iterator() {
        return data.iterator();
    }

    @Override
    public int hashCode() {
        return Objects.hash(type, data);
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        VectorSXP<?> other = (VectorSXP<?>) obj;
        if (data == null) {
            if (other.data != null)
                return false;
        } else if (!data.equals(other.data))
            return false;
        if (type != other.type)
            return false;
        return true;
    }
}
