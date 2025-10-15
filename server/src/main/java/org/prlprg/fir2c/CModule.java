package org.prlprg.fir2c;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.intellij.lang.annotations.PrintFormat;

/// Shallow-structured representation of a C source file generated from FIŘ.
///
/// The class mirrors [org.prlprg.bc2c.CFile], they could probably be merged into one since the
/// "structure" of both is just C includes and functions consisting of text.
final class CModule {
  private final Set<String> includes = new LinkedHashSet<>();
  private final Map<String, CFunctionOrStub> functions = new LinkedHashMap<>();

  public void addInclude(String include) {
    includes.add(include);
  }

  public void addStubFunction(String returnType, String name, List<String> parameters) {
    if (functions.containsKey(name)) {
      throw new IllegalArgumentException("Function with name " + name + " already exists");
    }

    var function = new CStubFunction(returnType, name, parameters);
    functions.put(name, function);
  }

  public CFunction addFunction(String returnType, String name, List<String> parameters) {
    if (functions.containsKey(name)) {
      throw new IllegalArgumentException("Function with name " + name + " already exists");
    }

    var function = new CFunction(returnType, name, parameters);
    functions.put(name, function);
    return function;
  }

  public void toString(PrintWriter pw) {
    includes.forEach(include -> pw.printf("#include <%s>%n", include));

    if (!includes.isEmpty()) {
      pw.println();
    }

    for (var function : functions.values()) {
      function.toString(pw);
      pw.println();
    }

    pw.flush();
  }

  public void toString(Writer writer) {
    toString(writer instanceof PrintWriter pw ? pw : new PrintWriter(writer));
  }

  @Override
  public String toString() {
    var sw = new StringWriter();
    toString(sw);
    return sw.toString();
  }

  abstract static sealed class CFunctionOrStub {
    private final String returnType;
    private final String name;
    private final List<String> parameters;

    private CFunctionOrStub(String returnType, String name, List<String> parameters) {
      this.returnType = returnType;
      this.name = name;
      this.parameters = List.copyOf(parameters);
    }

    protected void printSignature(PrintWriter pw) {
      pw.printf("%s %s(%s)", returnType, name, String.join(", ", parameters));
    }

    public abstract void toString(PrintWriter pw);

    public void toString(Writer writer) {
      toString(writer instanceof PrintWriter pw ? pw : new PrintWriter(writer));
    }

    @Override
    public String toString() {
      var sw = new StringWriter();
      toString(sw);
      return sw.toString();
    }
  }

  static final class CStubFunction extends CFunctionOrStub {
    private CStubFunction(String returnType, String name, List<String> parameters) {
      super(returnType, name, parameters);
    }

    @Override
    public void toString(PrintWriter pw) {
      pw.print("extern ");
      printSignature(pw);
      pw.println(";");

      pw.flush();
    }
  }

  static final class CFunction extends CFunctionOrStub {
    private final List<String> body = new ArrayList<>();

    private CFunction(String returnType, String name, List<String> parameters) {
      super(returnType, name, parameters);
    }

    public void label(@PrintFormat String format, Object... args) {
      body.add(format.formatted(args));
    }

    public void stmt(@PrintFormat String format, Object... args) {
      stmt(1, format.formatted(args));
    }

    public void stmt(int indentLevel, @PrintFormat String format, Object... args) {
      body.add("  ".repeat(indentLevel) + format.formatted(args));
    }

    public void blank() {
      if (body.isEmpty() || !body.getLast().isEmpty()) {
        body.add("");
      }
    }

    public void comment(@PrintFormat String format, Object... args) {
      body.add("  // " + format.formatted(args));
    }

    @Override
    public void toString(PrintWriter pw) {
      printSignature(pw);
      pw.println(" {");
      for (var line : body) {
        pw.println(line);
      }
      pw.println("}");

      pw.flush();
    }
  }
}
