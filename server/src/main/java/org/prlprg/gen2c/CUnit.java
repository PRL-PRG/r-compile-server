package org.prlprg.gen2c;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;

/// C translation unit i.e. source file
public class CUnit {
  private final List<String> includes = new ArrayList<>();
  private final List<CExternFunction> externFunctions = new ArrayList<>();
  private final List<CFunction> functions = new ArrayList<>();

  public void addInclude(String include) {
    includes.add(include);
  }

  public void addExternFunction(String returnType, String name, List<String> parameters) {
    externFunctions.add(new CExternFunction(returnType, name, parameters));
  }

  public CFunction addFunction(String returnType, String name, List<String> parameters) {
    var fun = new CFunction(returnType, name, parameters);
    functions.add(fun);
    return fun;
  }

  public void writeTo(Writer w) {
    var pw = new PrintWriter(w);

    includes.forEach(x -> pw.format("#include <%s>", x));
    if (!includes.isEmpty()) { pw.println(); }
    externFunctions.forEach(x -> x.writeTo(pw));
    if (!externFunctions.isEmpty()) { pw.println(); }
    functions.forEach(x -> x.writeForwardDeclaration(pw));
    functions.forEach(x -> x.writeDefinition(pw));
  }

  public String toString() {
    var w = new StringWriter();
    writeTo(new PrintWriter(w));
    return w.toString();
  }
}
