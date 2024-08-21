package org.prlprg.bc2c;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;

public class CFile {
    private final List<CFunction> funs = new ArrayList<>();
    private final List<CFunction> forwards = new ArrayList<>();
    private final List<String> includes = new ArrayList<>();

    public void writeTo(Writer w) {
        var pw = new PrintWriter(w);

        includes.forEach(x -> pw.println("#include <" + x + ">"));
        pw.println();
        forwards.stream().map(CFunction::getDeclaration).forEach(x -> pw.println(x + ";"));

        funs.forEach(x -> x.writeTo(pw));
    }

    public String toString() {
        var w = new StringWriter();
        writeTo(new PrintWriter(w));
        return w.toString();
    }

    public void addFun(CFunction fun, boolean forwardDeclare) {
        funs.add(fun);
        if (forwardDeclare) {
            forwards.add(fun);
        }
    }

    public void addInclude(String include) {
        includes.add(include);
    }
}
