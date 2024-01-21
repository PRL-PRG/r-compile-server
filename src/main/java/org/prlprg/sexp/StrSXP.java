package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.escape.Escaper;
import com.google.common.escape.Escapers;
import org.prlprg.primitive.Constants;

import javax.annotation.concurrent.Immutable;

@Immutable
public interface StrSXP extends VectorSXP<String> {
    @Override
    default SEXPType type() {
        return SEXPType.STR;
    }

    @Override Attributes attributes();

    @Override
    StrSXP withAttributes(Attributes attributes);
}

record StrSXPImpl(ImmutableList<String> data, @Override Attributes attributes) implements StrSXP {
    @Override
    public UnmodifiableIterator<String> iterator() {
        return data.iterator();
    }

    @Override
    public String get(int i) {
        return data.get(i);
    }

    @Override
    public int size() {
        return data.size();
    }

    @Override
    public String toString() {
        return VectorSXPUtil.toString(this, data.stream().map(StrSXPUtil::escapeString));
    }

    @Override
    public StrSXP withAttributes(Attributes attributes) {
        return SEXP.string(data, attributes);
    }
}

final class SimpleStrSXPImpl extends SimpleScalarSXPImpl<String> implements StrSXP {
    SimpleStrSXPImpl(String data) {
        super(data);
    }

    @Override
    public String toString() {
        return StrSXPUtil.escapeString(data);
    }

    @Override
    public StrSXP withAttributes(Attributes attributes) {
        return SEXP.string(data, attributes);
    }
}

final class StrSXPUtil {
    private static final Escaper rEscaper = Escapers.builder()
            .addEscape('"', "\\\"")
            .addEscape('\\', "\\\\")
            .addEscape('\n', "\\n")
            .addEscape('\r', "\\r")
            .addEscape('\t', "\\t")
            .build();

    static String escapeString(String s) {
        return Constants.isNaString(s) ? "NA" : rEscaper.escape(s);
    }

    private StrSXPUtil() {
    }
}
