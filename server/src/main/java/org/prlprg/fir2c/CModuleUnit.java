package org.prlprg.fir2c;

import java.io.PrintWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

/**
 * Extremely small helper for building C translation units.
 *
 * <p>The class mirrors the {@code org.prlprg.bc2c} builders but keeps the implementation local so
 * the FIR compiler can evolve without leaking BC specific conventions.
 */
final class CModuleUnit {
  private final Set<String> includes = new LinkedHashSet<>();
  private final List<CFunctionUnit> functions = new ArrayList<>();

  public void addInclude(String include) {
    includes.add(include);
  }

  public CFunctionUnit addFunction(String returnType, String name, List<String> parameters) {
    var function = new CFunctionUnit(returnType, name, parameters);
    functions.add(function);
    return function;
  }

  public List<CFunctionUnit> functions() {
    return Collections.unmodifiableList(functions);
  }

  public void writeTo(Writer writer) {
    var pw = writer instanceof PrintWriter printWriter ? printWriter : new PrintWriter(writer);

    includes.forEach(include -> pw.printf("#include <%s>%n", include));

    if (!includes.isEmpty()) {
      pw.println();
    }

    for (var function : functions) {
      function.writeTo(pw);
      pw.println();
    }

    pw.flush();
  }

  public String render() {
    var sw = new StringWriter();
    writeTo(new PrintWriter(sw));
    return sw.toString();
  }

  static final class CFunctionUnit {
    private final String returnType;
    private final String name;
    private final List<String> parameters;
    private final List<String> body = new ArrayList<>();

    private CFunctionUnit(String returnType, String name, List<String> parameters) {
      this.returnType = returnType;
      this.name = name;
      this.parameters = List.copyOf(parameters);
    }

    public void line(int indentLevel, String line) {
      body.add("  ".repeat(Math.max(0, indentLevel)) + line);
    }

    public void blankLine() {
      if (body.isEmpty() || !body.get(body.size() - 1).isEmpty()) {
        body.add("");
      }
    }

    public void comment(int indentLevel, String comment) {
      line(indentLevel, "// " + comment);
    }

    public void writeTo(PrintWriter pw) {
      pw.printf("%s %s(%s) {%n", returnType, name, String.join(", ", parameters));
      for (var line : body) {
        pw.println(line);
      }
      pw.println("}");
    }

    public String declaration() {
      return "%s %s(%s)".formatted(returnType, name, String.join(", ", parameters));
    }

    public String name() {
      return name;
    }
  }
}
