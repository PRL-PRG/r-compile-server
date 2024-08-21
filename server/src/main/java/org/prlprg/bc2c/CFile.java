package org.prlprg.bc2c;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;

public class CFile {
    private String preamble;
    private final List<CFunction> funs = new ArrayList<>();

    public void setPreamble(String preamble) {
        this.preamble = preamble;
    }

    public void writeTo(Writer w) {
        var pw = new PrintWriter(w);

        if (preamble != null) {
            pw.println(preamble);
            pw.println();
        }

        funs.forEach(x -> x.writeTo(pw));
    }

    public String toString() {
        var w = new StringWriter();
        writeTo(new PrintWriter(w));
        return w.toString();
    }

    public void add(CFunction fun) {
        funs.add(fun);
    }
}
