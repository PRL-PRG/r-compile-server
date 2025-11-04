package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

public final class Snapshot {
  private final ImmutableList<StackFrame> stack;
  private final GlobalEnvSXP globalEnv;
  private @Nullable String structuralString = null;

  Snapshot(ImmutableList<StackFrame> stack, GlobalEnvSXP globalEnv) {
    this.stack = stack;
    this.globalEnv = globalEnv;
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof Snapshot snapshot)) {
      return false;
    }
    return Objects.equals(structuralString(), snapshot.structuralString());
  }

  @Override
  public int hashCode() {
    return Objects.hash(structuralString());
  }

  /// EnvSXPs will have different identities, but we want to compare snapshots structurally.
  /// Hence we use this for `equals` and `hashCode`.
  public String structuralString() {
    if (structuralString == null) {
      structuralString = Printer.use(p -> print(p, false));
    }
    return structuralString;
  }

  // region printing
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    print(p, true);
  }

  private void print(Printer p, boolean includeFeedback) {
    var w = p.writer();
    var f = w.formatter();

    // Create "global" context that is used to print "local" stack frames
    var forSexp = new SEXPPrintContext(SEXPPrintOptions.FULL);

    var frameAppearances = new HashMap<StackFrame, ArrayList<Integer>>(stack.size());
    for (var i = 0; i < stack.size(); i++) {
      var frame = stack.get(i);
      frameAppearances.computeIfAbsent(frame, _ -> new ArrayList<>()).add(i);
    }

    var envToStackIndex = new HashMap<EnvSXP, Integer>(stack.size());
    for (var i = 0; i < stack.size(); i++) {
      var frame = stack.get(i);
      if (!envToStackIndex.containsKey(frame.environment())) {
        envToStackIndex.put(frame.environment(), i);
      }
    }

    // Print stack
    w.write("Stack:\n");
    var maxDigits = String.valueOf(stack.size() - 1).length();
    var padding = maxDigits + 2; // +2 for ". "
    for (var i = stack.size() - 1; i >= 0; i--) {
      var frame = stack.get(i);
      var ctx =
          new FrameContext(
              -1, frameAppearances, envToStackIndex, globalEnv, forSexp, includeFeedback);

      f.format("%" + maxDigits + "d. ", i);
      w.runIndented(padding, () -> printFrame(ctx, frame, p));
      w.write('\n');
    }

    // Print global environment
    w.write("Global environment:\n");
    p.withContext(forSexp).print(globalEnv);
  }

  private record FrameContext(
      int currentStackIndex,
      HashMap<StackFrame, ArrayList<Integer>> frameAppearances,
      Map<EnvSXP, Integer> envToStackIndex,
      @Nullable GlobalEnvSXP globalEnv,
      SEXPPrintContext forSexp,
      boolean includeFeedback) {
    private static final FrameContext EMPTY =
        new FrameContext(
            -1,
            new HashMap<>(),
            Map.of(),
            null,
            new SEXPPrintContext(SEXPPrintOptions.FULL),
            false);
  }

  static void printFrame(StackFrame frame, Printer p) {
    printFrame(FrameContext.EMPTY, frame, p);
  }

  private static void printFrame(FrameContext ctx, StackFrame frame, Printer p) {
    var w = p.writer();

    var appearances = ctx.frameAppearances.get(frame);
    var appearanceIndex =
        ctx.currentStackIndex == -1
            ? -2
            : appearances == null ? -1 : appearances.indexOf(ctx.currentStackIndex);

    // Position
    switch (appearanceIndex) {
      // Print all positions
      case -2 -> p.printSeparated("---\n", frame.positions());
      // Bad context
      case -1 ->
          throw new IllegalStateException(
              "Stack frame's indices are "
                  + ctx.frameAppearances
                  + ", but we're printing at index "
                  + ctx.currentStackIndex);
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
            var feedback = frame.scopeFeedback();

            for (var entry : frame.registers().entrySet()) {
              var register = entry.getKey();
              var value = entry.getValue();

              w.write("reg ");
              p.print(register);
              w.write(" = ");
              p.print(value);
              if (ctx.includeFeedback) {
                feedback.print(register, p);
              }
              w.write('\n');
            }

            for (var entry : frame.environment().bindings()) {
              var variable = entry.getKey();
              var value = entry.getValue();

              w.write("var ");
              Names.write(w, variable);
              w.write(" = ");
              p.print(value);
              w.write('\n');
            }

            w.write("parent = ");
            printStackEnv(ctx, frame.environment().parent(), p);
          });
      w.write("\n]");
    }
  }

  private static void printStackEnv(FrameContext ctx, SEXP sexp, Printer p) {
    var w = p.writer();

    if (sexp instanceof EnvSXP env) {
      var stackIndex = ctx.envToStackIndex.get(env);
      if (stackIndex != null) {
        w.write("<frame ");
        p.print(stackIndex);
        w.write('>');
        return;
      } else if (env == ctx.globalEnv) {
        w.write("<global>");
        return;
      }
    }

    p.withContext(ctx.forSexp).print(sexp);
  }
  // endregion printing
}
