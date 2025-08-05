package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

class PrintContext {
  // Data
  private final ImmutableList<StackFrame> stack;
  private final @Nullable GlobalEnvSXP globalEnv;
  private final SEXPPrintContext forSexp = new SEXPPrintContext(SEXPPrintOptions.FULL);

  // State
  private int currentStackIndex = -1;

  // Cached
  private final Map<StackFrame, List<Integer>> frameAppearances;
  private final Map<EnvSXP, Integer> envToStackIndex;

  PrintContext() {
    this(ImmutableList.of(), null);
  }

  PrintContext(ImmutableList<StackFrame> stack, @Nullable GlobalEnvSXP globalEnv) {
    this.stack = stack;
    this.globalEnv = globalEnv;

    frameAppearances = new HashMap<>(stack.size());
    for (var i = 0; i < stack.size(); i++) {
      var frame = stack.get(i);
      frameAppearances.computeIfAbsent(frame, _ -> new ArrayList<>()).add(i);
    }

    envToStackIndex = new HashMap<>(stack.size());
    for (var i = 0; i < stack.size(); i++) {
      var frame = stack.get(i);
      if (!envToStackIndex.containsKey(frame.environment())) {
        envToStackIndex.put(frame.environment(), i);
      }
    }
  }

  @Override
  public String toString() {
    // REACH: `Printer.toString` doesn't work, and it's probably a bug in `parseprint`
    // (perhaps because this class has `@PrintMethod`s where it's both object and context).
    return Printer.use(this::print);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    var f = w.formatter();

    // Print stack
    w.write("Stack:\n");
    var maxDigits = String.valueOf(stack.size() - 1).length();
    var padding = maxDigits + 2; // +2 for ". "
    for (var i = stack.size() - 1; i >= 0; i--) {
      currentStackIndex = i;
      var frame = stack.get(i);

      f.format("%" + maxDigits + "d. ", i);
      w.runIndented(padding, () -> p.withContext(this).print(frame));
      w.write('\n');
    }

    // Print global environment
    w.write("Global environment:\n");
    p.withContext(forSexp).print(globalEnv);
  }

  @PrintMethod
  private void print(StackFrame frame, Printer p) {
    var w = p.writer();

    var appearances = frameAppearances.get(frame);
    var appearanceIndex =
        currentStackIndex == -1
            ? -2
            : appearances == null ? -1 : appearances.indexOf(currentStackIndex);

    // Position
    switch (appearanceIndex) {
        // Print all positions
      case -2 -> p.printSeparated("---\n", frame.positions());
        // Bad context
      case -1 ->
          throw new IllegalStateException(
              "Stack frame's indices are "
                  + frameAppearances
                  + ", but we're printing at index "
                  + currentStackIndex);
        // Only print the position at this appearance.
      default -> p.print(frame.position(appearanceIndex));
    }

    // Variables (registers and named).
    if (appearanceIndex > 0) {
      // Print a reference here, because we'll print them later.
      w.write("[ ...see " + appearances.get(appearanceIndex - 1) + "... ]");
    } else {
      // Actually print the variables
      w.write("[ ");
      w.runIndented(
          () -> {
            for (var entry : frame.registers().entrySet()) {
              w.write("reg ");
              p.print(entry.getKey());
              w.write(" = ");
              p.print(entry.getValue());
              w.write(";\n");
            }

            for (var entry : frame.environment().bindings()) {
              w.write("var ");
              w.write(entry.getKey());
              w.write(" = ");
              p.print(entry.getValue());
              w.write(";\n");
            }

            w.write("parent = ");
            p.print(frame.environment().parent());
          });
      w.write("\n]");
    }
  }

  @PrintMethod
  private void print(SEXP sexp, Printer p) {
    var w = p.writer();

    if (sexp instanceof EnvSXP env) {
      var stackIndex = envToStackIndex.get(env);
      if (stackIndex != null) {
        w.write("<frame ");
        p.print(stackIndex);
        w.write('>');
        return;
      } else if (env == globalEnv) {
        w.write("<global>");
        return;
      }
    }

    p.withContext(forSexp).print(sexp);
  }
}
