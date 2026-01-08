package org.prlprg.gen2c;

import com.google.common.base.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;

/// C translation unit i.e. source file
public class CUnit {
  private final List<String> includes = new ArrayList<>();
  private final List<CStaticVariable> staticVariables = new ArrayList<>();
  private final List<CExternFunction> externFunctions = new ArrayList<>();
  private final List<CFunction> functions = new ArrayList<>();

  public void addInclude(String include) {
    includes.add(include);
  }

  public void addStaticVariable(String type, String name) {
    staticVariables.add(new CStaticVariable(type, name));
  }

  public void addExternFunction(String returnType, String name, List<String> parameters) {
    externFunctions.add(new CExternFunction(returnType, name, parameters));
  }

  public CFunction addFunction(String returnType, String name, List<String> parameters) {
    var fun = new CFunction(this, returnType, name, parameters);
    functions.add(fun);
    return fun;
  }

  /// Print the module.
  @Override
  public String toString() {
    var w = new StringWriter();
    writeTo(new PrintWriter(w));
    return w.toString();
  }

  public void writeTo(Writer w) {
    var pw = w instanceof PrintWriter pw1 ? pw1 : new PrintWriter(w);

    includes.forEach(x -> pw.format("#include <%s>", x));
    if (!includes.isEmpty()) {
      pw.println();
    }
    externFunctions.forEach(x -> x.writeTo(pw));
    if (!externFunctions.isEmpty()) {
      pw.println();
    }
    this.functions.forEach(x -> x.writeForwardDeclaration(pw));
    functions.forEach(x -> x.writeDefinition(pw));
  }
}
