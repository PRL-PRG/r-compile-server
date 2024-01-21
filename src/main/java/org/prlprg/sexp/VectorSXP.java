package org.prlprg.sexp;

import java.util.stream.BaseStream;

public interface VectorSXP<T> extends ListOrVectorSXP<T> {
    @Override Attributes attributes();

    @Override
    VectorSXP<T> withAttributes(Attributes attributes);
}

final class VectorSXPUtil {
    static final int VECTOR_TRUNCATE_SIZE = 100;

    static String toString(SEXP sexp, BaseStream<?, ?> data) {
        var dataString = new StringBuilder();
        var dataIter = data.iterator();
        while (dataIter.hasNext()) {
            dataString.append(dataIter.next());
            if (dataIter.hasNext()) {
                dataString.append(",");
                if (dataString.length() >= VECTOR_TRUNCATE_SIZE) {
                    dataString.append("...");
                    break;
                }
            }
        }
        return SEXPUtil.toString(sexp, dataString);
    }

    private VectorSXPUtil() {
    }
}
