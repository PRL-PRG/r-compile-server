package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.escape.Escaper;
import com.google.common.escape.Escapers;
import org.prlprg.primitive.Constants;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface StrSXP extends VectorSXP<String>, StrOrRegSymSXP {
    @Override
    default SEXPType type() {
        return SEXPType.STR;
    }

    @Override
    default String reifyString() {
        return isEmpty() ? "" : get(0);
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
        return VectorSXPs.toString(this, data.stream().map(StrSXPs::quoteString));
    }

    @Override
    public StrSXP withAttributes(Attributes attributes) {
        return SEXPs.string(data, attributes);
    }
}

final class SimpleStrSXPImpl extends SimpleScalarSXPImpl<String> implements StrSXP {
    SimpleStrSXPImpl(String data) {
        super(data);
    }

    @Override
    public String toString() {
        return StrSXPs.quoteString(data);
    }

    @Override
    public StrSXP withAttributes(Attributes attributes) {
        return SEXPs.string(data, attributes);
    }
}

final class EmptyStrSXPImpl extends EmptyVectorSXPImpl<String> implements StrSXP {
    static final EmptyStrSXPImpl INSTANCE = new EmptyStrSXPImpl();

    private EmptyStrSXPImpl() {
    }

    @Override
    public StrSXP withAttributes(Attributes attributes) {
        return SEXPs.string(ImmutableList.of(), attributes);
    }
}

final class StrSXPs {
    private static final Escaper rEscaper = Escapers.builder()
            .addEscape('"', "\\\"")
            .addEscape('\\', "\\\\")
            .addEscape('\n', "\\n")
            .addEscape('\r', "\\r")
            .addEscape('\t', "\\t")
            .build();

    static String quoteString(String s) {
        return Constants.isNaString(s) ? "NA" : "\"" + rEscaper.escape(s) + "\"";
    }

    private StrSXPs() {
    }
}
