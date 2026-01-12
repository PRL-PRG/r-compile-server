package org.prlprg.gen2c;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

/// C translation unit i.e. source file
public class CUnit {
  private final List<String> includes = new ArrayList<>();
  private final List<CExternGlobalVariable> externGlobalVariables = new ArrayList<>();
  private final List<CExternFunction> externFunctions = new ArrayList<>();
  private final List<CGlobalVariable> globalVariables = new ArrayList<>();
  private final List<CFunction> functions = new ArrayList<>();

  public void addInclude(String include) {
    includes.add(include);
  }

  public void addExternGlobalVariable(String type, String name) {
    externGlobalVariables.add(new CExternGlobalVariable(type, name));
  }

  public void addGlobalVariable(String type, String name) {
    globalVariables.add(new CGlobalVariable(type, name));
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

  public void writeTo(Path path) throws IOException {
    try (var w = Files.newBufferedWriter(path, StandardCharsets.UTF_8)) {
      writeTo(new PrintWriter(w));
    }
  }

  public void writeTo(PrintWriter pw) {
    includes.forEach(x -> pw.format("#include <%s>", x));
    if (!includes.isEmpty()) {
      pw.println();
    }

    externGlobalVariables.forEach(x -> x.writeTo(pw));
    if (!externGlobalVariables.isEmpty()) {
      pw.println();
    }

    externFunctions.forEach(x -> x.writeTo(pw));
    if (!externFunctions.isEmpty()) {
      pw.println();
    }

    globalVariables.forEach(x -> x.writeTo(pw));
    if (!globalVariables.isEmpty()) {
      pw.println();
    }

    functions.forEach(x -> x.writeForwardDeclaration(pw));
    if (!functions.isEmpty()) {
      pw.println();
    }

    functions.forEach(x -> x.writeDefinition(pw));
  }
}
