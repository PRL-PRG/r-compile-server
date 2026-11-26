package org.prlprg.fir.analyze.type;

import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.generic.AbstractInterpretation;
import org.prlprg.fir.analyze.type.Provenance.ActionSet;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Compute which registers are read, written, `consume`d, captured, or shared at any point in a
/// [CFG].
///
/// Effectively a general liveness analysis with extra information to enforce provenance
/// invariants (registers that are `consume`d can't be read afterward or captured anywhere).
///
/// A use [shares][#shares] an owned register if it keeps a reference to the vector, so the register
/// can't be written, `consume`d, or moved into an owned phi afterward (until it's assigned again).
///
/// Unlike [InferType] and [InferEffects], this analysis isn't on-demand: constructing runs the
/// full analysis, then [Provenance#at(BB, int)] and [Provenance#returnState()] queries the results.
public final class Provenance extends AbstractInterpretation<ActionSet> implements Analysis {
  private final HashSet<List<Object>> reported = new HashSet<>();
  private final @Nullable Reporter reporter;

  @AnalysisConstructor
  public Provenance(Abstraction scope) {
    this(scope, null);
  }

  /// Creates and runs the analysis, reporting issues to `reporter`.
  public Provenance(Abstraction scope, @Nullable Reporter reporter) {
    super(scope);
    this.reporter = reporter;

    // Parameters are initially written to.
    var entryFlow = new ActionSet();
    entryFlow.write.addAll(scope.parameters());

    run(entryFlow);
  }

  @Override
  protected AbstractInterpretation<ActionSet>.OnCfg mkOnCfg(CFG cfg) {
    return new OnCfg(cfg);
  }

  /// An abstract interpretation over a [CFG].
  private class OnCfg extends AbstractInterpretation<ActionSet>.OnCfg {
    OnCfg(CFG cfg) {
      super(cfg);
    }

    @Override
    protected void runEntry(BB bb) {
      // A register is defined once, so a (re)definition is reached from an earlier `consume` only
      // through a loop, and holds a new value.
      state().write.addAll(bb.phiParameters());
      state().consume.removeAll(bb.phiParameters());
      // Each phi argument was moved into it unshared (see `run(Instruction, int)`) or the phi isn't
      // owned.
      state().share.removeAll(bb.phiParameters());
    }

    @Override
    protected void run(Statement statement) {
      var assignee = statement.assignee();

      if (statement.expression() instanceof Promise(_, _, var code, _, _)) {
        // The promise starts with no reads, so its return state's `read` is what its body uses.
        var entry = state().copy();
        entry.read.clear();
        runSubAnalysis(code, entry, state()::mergePromise);
      } else {
        for (var i = 0; i < statement.argCount(); i++) {
          run(statement, i);
        }
      }

      if (assignee != null) {
        state().write.add(assignee);
        state().consume.remove(assignee);
        state().share.remove(assignee);
      }
    }

    void run(Instruction instruction, int index) {
      switch (instruction.arg(index)) {
        case Constant _ -> {}
        // Ensure register is written before read
        case Read(var variable) -> {
          if (!state().write.contains(variable)) {
            report("Read before write: ", variable);
          }
          if (state().consume.contains(variable)) {
            report("Read after consume: ", variable);
          }
          state().read.add(variable);
          switch (scope.typeOf(variable).ownership()) {
            case OWNED -> runOwned(instruction, index, variable);
            // The caller lends the vector only during the call, and can write it in place after.
            case BORROWED -> {
              if (escapes(instruction, index)) {
                report("Share of borrowed: ", variable);
              }
            }
            default -> {}
          }
        }
        // Ensure register is written before consume, and not consumed or captured.
        case Consume(var register) -> {
          if (!state().write.contains(register)) {
            report("Consume before write: ", register);
          }
          if (state().consume.contains(register)) {
            report("Consume after consume: ", register);
          }
          if (state().capture.contains(register)) {
            report("Consume after capture: ", register);
          }
          if (state().share.contains(register)) {
            report("Consume after share: ", register);
          }
          state().read.add(register);
          state().consume.add(register);
        }
      }
    }

    void runOwned(Instruction instruction, int index, Register register) {
      if (state().share.contains(register)) {
        if (instruction instanceof Statement s
            && s.expression() instanceof SubscriptWrite
            && index == 0) {
          report("Write after share: ", register);
        } else if (isMove(instruction, index)) {
          report("Move after share: ", register);
        }
      }
      if (shares(instruction, index)) {
        state().share.add(register);
      }
    }

    @Override
    protected void run(Jump jump) {
      for (var i = 0; i < jump.argCount(); i++) {
        run(jump, i);
      }
    }

    void report(Object... message) {
      if (reporter == null) {
        return;
      }

      // Prevent the same message from being reported multiple times.
      // Use `Arrays#asList` for structural equality and hashing.
      if (reported.add(Arrays.asList(message))) {
        reporter.report(bb(), instructionIndex(), message);
      }
    }
  }

  /// Whether the argument at `index` of `instruction`, if it reads an owned register, keeps a
  /// reference to the vector, e.g. a `dots` element, a `dyn` call argument, a cast, or an argument
  /// of a shared phi.
  ///
  /// It doesn't if it moves the register into an owned phi, or only reads or writes the vector
  /// while the instruction runs: a subscript read or write target, a `dup` argument, or a static
  /// call argument for a borrowed parameter.
  public static boolean shares(Instruction instruction, int index) {
    if (!(instruction instanceof Statement statement)) {
      return !isMove(instruction, index);
    }
    return switch (statement.expression()) {
      case SubscriptRead _, SubscriptWrite _, Dup _ -> index != 0;
      case Call(StaticFnCallee(_, _, var signature)) -> !isBorrowed(signature, index);
      case Call(FallbackCallee(var signature)) -> !isBorrowed(signature, index);
      default -> true;
    };
  }

  /// Whether the use [shares][#shares] its register and isn't a `deopt` argument (nothing in the
  /// version runs after it).
  public static boolean escapes(Instruction instruction, int index) {
    return shares(instruction, index)
        && !(instruction instanceof Jump jump && jump.expression() instanceof Deopt);
  }

  private static boolean isMove(Instruction instruction, int index) {
    return instruction instanceof Jump jump
        && jump.phiAt(index) instanceof BlockParameter phi
        && phi.type().ownership() == Ownership.OWNED;
  }

  /// Whether the call argument at `index` (after the callee) is for a borrowed parameter.
  private static boolean isBorrowed(Signature signature, int index) {
    var parameterTypes = signature.parameterTypes();
    return index >= 1
        && index <= parameterTypes.size()
        && parameterTypes.get(index - 1).ownership() == Ownership.BORROWED;
  }

  @FunctionalInterface
  public interface Reporter {
    void report(BB bb, int instructionIndex, Object... message);
  }

  public static class ActionSet implements AbstractInterpretation.State<ActionSet> {
    final Set<Register> read = new HashSet<>();
    final Set<Register> write = new HashSet<>();
    final Set<Register> consume = new HashSet<>();
    final Set<Register> capture = new HashSet<>();
    final Set<Register> share = new HashSet<>();

    @Override
    public ActionSet copy() {
      var clone = new ActionSet();
      clone.read.addAll(read);
      clone.write.addAll(write);
      clone.consume.addAll(consume);
      clone.capture.addAll(capture);
      clone.share.addAll(share);
      return clone;
    }

    /// Unifies requirements and intersects guarantees.
    ///
    /// `read`, `consume`, and `defer` are requirements, `write` is a guarantee.
    @Override
    public void merge(ActionSet other) {
      read.addAll(other.read);
      write.retainAll(other.write);
      consume.addAll(other.consume);
      capture.addAll(other.capture);
      share.addAll(other.share);
    }

    /// Unifies requirements, and adds the registers that the promise's body reads or `consume`s
    /// (also in a nested promise) to `capture`.
    ///
    /// This is the stateful analogue to the formalism's compose operator.
    ///
    /// `promise` is the state at the promise's return, which ran from this state without `read`.
    public void mergePromise(ActionSet promise) {
      read.addAll(promise.read);
      consume.addAll(promise.consume);
      capture.addAll(promise.read);
      capture.addAll(promise.capture);
    }

    @Override
    public boolean equals(Object o) {
      if (!(o instanceof ActionSet actionSet)) {
        return false;
      }
      return Objects.equals(read, actionSet.read)
          && Objects.equals(write, actionSet.write)
          && Objects.equals(consume, actionSet.consume)
          && Objects.equals(capture, actionSet.capture)
          && Objects.equals(share, actionSet.share);
    }

    @Override
    public int hashCode() {
      return Objects.hash(read, write, consume, capture, share);
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("( read =");
      p.print(read);
      w.write("\n, write =");
      p.print(write);
      w.write("\n, consume =");
      p.print(consume);
      w.write("\n, capture =");
      p.print(capture);
      w.write("\n, share =");
      p.print(share);
      w.write("\n)");
    }
  }
}
