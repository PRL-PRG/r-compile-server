package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Objects;
import java.util.SequencedMap;
import java.util.stream.IntStream;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcOptLevel;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.BcRecordingFeedback;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

/// Tests how the server translates what the copy-and-patch JIT recorded for a bytecode baseline
/// into FIŘ feedback ([BcRecordingFeedback], see `server/doc/bytecode-baseline-feedback.md`), and
/// how the runtime finds the baselines' pools.
///
/// The JIT only runs on Linux x86-64, so what's tested here is everything the translation relies
/// on: that the bytecode offsets are the ones the JIT records feedback under, that the registers
/// are the FIŘ instructions that feedback describes, and that the feedback text parses back into
/// the module.
class BytecodeBaselineFeedbackTest {
  /// Covers all four recorded instructions: `GETVAR` (`x`, `n`), `GETFUN` and `CALL` (`f(x)`), and
  /// `BRIFNOT` (`if`).
  @Language("R")
  private static final String SOURCE =
      """
      function() {
        f <- function(n) n * 2
        x <- 21
        if (x > 0) f(x) else x
      }
      """;

  @Test
  void mapsEveryRecordedInstruction() {
    var compiled = compile();

    // The JIT records feedback for every `GETVAR`, `GETFUN`, `CALL` and `BRIFNOT`, keyed by the
    // instruction's offset into the encoded bytecode, so the map must have an entry for each.
    assertEquals(
        recordedOffsets(compiled.mainBc()),
        List.copyOf(compiled.mainOffsets().keySet()),
        "feedback map doesn't have exactly the offsets the JIT records feedback under");
  }

  @Test
  void mapsEachRecordedInstructionToTheExpressionItCompiledInto() {
    var compiled = compile();
    var registers = List.copyOf(compiled.mainOffsets().values());
    var baseline = compiled.mainBaseline();
    var recorded = recordedInstructions(compiled.mainBc());

    for (var i = 0; i < recorded.size(); i++) {
      var instruction = recorded.get(i);
      var register = register(baseline, registers.get(i));
      var expression =
          assertInstanceOf(AssigneeOf.class, register, "recorded register must be assigned")
              .statement()
              .expression();

      // The JIT records the value the instruction leaves on the bytecode stack, so the register
      // must be the one that value ends up in.
      switch (instruction) {
        // `GETVAR` forces, so its value is the `force`'s, not the `ld`'s.
        case BcInstr.GetVar _ ->
            assertInstanceOf(Force.class, expression, "GETVAR records the forced value");
        case BcInstr.GetFun _ ->
            assertInstanceOf(Load.class, expression, "GETFUN records the loaded function");
        case BcInstr.Call _ ->
            assertInstanceOf(Call.class, expression, "CALL records the call's result");
        // `BRIFNOT`'s condition is `as.logical`-cast, and that cast is what the `if` branches on.
        case BcInstr.BrIfNot _ ->
            assertInstanceOf(Call.class, expression, "BRIFNOT records the cast condition");
        default -> throw new AssertionError("not a recorded instruction: " + instruction);
      }
    }

    // Guard against the assertions above passing vacuously.
    assertEquals(
        4,
        recorded.stream().map(i -> i.getClass().getSimpleName()).distinct().count(),
        "example must cover every recorded instruction, it has: " + recorded);
  }

  @Test
  void poolLayoutMatchesTheRuntime() {
    var compiled = compile();
    var pools = compiled.baselinePools();

    // Only `main`'s: nothing emits the inner `f`, because the only FIŘ code that would create it
    // is `main`'s baseline, which is the bytecode instead.
    assertEquals(1, pools.size(), "every bytecode baseline's pool must be identified once");
    var pool = pools.getFirst();
    assertInstanceOf(BCodeSXP.class, pool.get(0), "slot 0 must be the bytecode");
    assertEquals(
        SEXPs.string(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK_MAGIC, "main"),
        pool.get(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK),
        "slot 3 must be the magic string and the function's name");
    assertInstanceOf(
        NilSXP.class,
        pool.get(Fir2CCompiler.FIR_BC_BASELINE_CALLS),
        "slot 4 must be space for the call counter");
    assertTrue(
        compiled
            .code()
            .contains(
                "Fir_set_const(pool, %d, Rf_ScalarInteger(0));"
                    .formatted(Fir2CCompiler.FIR_BC_BASELINE_CALLS)),
        "the version's init function must allocate the call counter");
  }

  @Test
  void translatesRecordingsIntoFeedbackThatParsesBackIntoTheModule() {
    var compiled = compile();
    var offsets = compiled.mainOffsets();
    var baseline = compiled.mainBaseline();
    var bc = compiled.mainBc();
    var loaded = offsetOf(bc, offsets, BcInstr.GetVar.class, 0);
    var unrun = offsetOf(bc, offsets, BcInstr.GetVar.class, 1);
    var callee = offsetOf(bc, offsets, BcInstr.GetFun.class, 0);
    var call = offsetOf(bc, offsets, BcInstr.Call.class, 0);
    var condition = offsetOf(bc, offsets, BcInstr.BrIfNot.class, 0);
    var inner =
        compiled.module().localFunctions().stream()
            .filter(f -> !f.name().name().equals("main"))
            .findFirst()
            .orElseThrow();

    // A `main` that ran twice, whose first `GETVAR` always loaded a real scalar and whose second
    // never ran, whose `GETFUN` always loaded the inner function, whose `CALL` returned a real
    // scalar and a real vector, and whose `BRIFNOT` never jumped.
    var recording =
        recording(
            2,
            group(List.of(condition), List.of(0), List.of(2), "taken", "not_taken"),
            group(
                List.of(loaded, call, unrun),
                List.of(2, 2, 0),
                List.of(1 << 28, 1 << 28 | 1 << 29, 0),
                "counters",
                "types"),
            (VecSXP)
                SEXPs.vec(
                        SEXPs.integer(callee),
                        SEXPs.integer(2),
                        SEXPs.vec(SEXPs.string(inner.name().name())))
                    .withNames(List.of("bcids", "counters", "callees")));
    var recordings =
        BcRecordingFeedback.Recording.listOf(
            SEXPs.vec(
                SEXPs.vec(
                        SEXPs.string("main"),
                        recording.get(0),
                        recording.get(1),
                        recording.get(2),
                        recording.get(3))
                    .withNames(List.of("function", "calls", "branch", "var_call", "fun"))));

    var text = BcRecordingFeedback.print(compiled.module(), compiled.bytecodes(), recordings);
    assertEquals(
        """
        feedback {
          main< %s > = 2x
          [
            reg %s :v1(R) (2x)
            reg %s =TRUE (2x)
            reg %s -%s (2x)
            reg %s :V (2x)
          ]
        }"""
            .formatted(
                Printer.toString(baseline.signature()),
                offsets.get(loaded),
                offsets.get(condition),
                offsets.get(callee),
                inner.name().name(),
                offsets.get(call)),
        text);

    var feedback =
        Objects.requireNonNull(
                BcRecordingFeedback.translate(compiled.module(), compiled.bytecodes(), recordings))
            .get(baseline);
    var loadedRegister = register(baseline, offsets.get(loaded));
    assertEquals(2, feedback.numCalls(), "number of calls");
    assertEquals(Type.BOXED_REAL, feedback.type(loadedRegister).union(), "recorded type");
    assertEquals(2, feedback.times(loadedRegister), "number of recordings");
    assertEquals(
        new Value.Bool(true),
        feedback.constant(register(baseline, offsets.get(condition))),
        "recorded condition");
    assertEquals(inner, feedback.callee(register(baseline, offsets.get(callee))), "callee");
  }

  /// A callee that isn't a function of the module is recorded like an ambiguous one.
  @Test
  void translatesUnknownCalleesAsAmbiguous() {
    var compiled = compile();
    var offsets = compiled.mainOffsets();
    var callee = offsetOf(compiled.mainBc(), offsets, BcInstr.GetFun.class, 0);
    var empty = group(List.of(), List.of(), List.of(), "counters", "types");

    for (var name : List.of(SEXPs.NULL, SEXPs.string("not_in_the_module"))) {
      var recording =
          recording(
              1,
              group(List.of(), List.of(), List.of(), "taken", "not_taken"),
              empty,
              (VecSXP)
                  SEXPs.vec(SEXPs.integer(callee), SEXPs.integer(1), SEXPs.vec(name))
                      .withNames(List.of("bcids", "counters", "callees")));
      var text =
          BcRecordingFeedback.print(
              compiled.module(),
              compiled.bytecodes(),
              List.of(new BcRecordingFeedback.Recording("main", recording)));
      assertTrue(
          Objects.requireNonNull(text).contains("reg " + offsets.get(callee) + " -_ (1x)"), text);
    }
    assertNull(
        BcRecordingFeedback.translate(
            compiled.module(),
            compiled.bytecodes(),
            BcRecordingFeedback.Recording.listOf(SEXPs.NULL)),
        "no recordings is no feedback");
  }

  /// A `GETVAR` that pushes a parameter's argument also describes the parameter: only the first
  /// `GETVAR` of `x`, and none of `y`, which the function assigns.
  @Test
  void translatesParameterGetVarsIntoParameterFeedback() {
    var session = GNUR.instance().getSession();
    var source = (CloSXP) GNUR.instance().eval("function(x, y) { y <- x; x + y }");
    var bc =
        new BCCompiler(source, session)
            .compile()
            .orElseThrow(() -> new AssertionError("example didn't compile"));
    var closure = SEXPs.closure(source.parameters(), SEXPs.bcode(bc), source.env());

    // The offsets, from a throwaway compile: the translation must evaluate the baseline itself,
    // because that's what records the parameters' `GETVAR`s.
    var throwawayBytecodes = new ModuleBcOriginMap();
    var throwaway =
        BC2FirClosureCompiler.compile(session, new Module(), "f", closure, throwawayBytecodes)
            .baseline();
    var offsets =
        BcRecordingFeedback.feedbackOffsets(
            throwaway, Objects.requireNonNull(throwawayBytecodes.get("f")));
    var registers = List.copyOf(offsets.values());
    assertEquals(3, offsets.size(), "the `GETVAR`s of `x`, `x`, and `y`: " + offsets);

    var module = new Module();
    var bytecodes = new ModuleBcOriginMap();
    var function = BC2FirClosureCompiler.compile(session, module, "f", closure, bytecodes);

    // 3 calls, but the first `GETVAR` counts 6: the parameter's feedback counts at most the calls.
    var recording =
        recording(
            3,
            group(List.of(), List.of(), List.of(), "taken", "not_taken"),
            group(
                List.copyOf(offsets.keySet()),
                List.of(6, 3, 3),
                List.of(1 << 28, 1 << 28, 1 << 28),
                "counters",
                "types"),
            (VecSXP)
                SEXPs.vec(SEXPs.integer(), SEXPs.integer(), SEXPs.vec())
                    .withNames(List.of("bcids", "counters", "callees")));
    var recordings = List.of(new BcRecordingFeedback.Recording("f", recording));
    assertEquals(
        """
        feedback {
          f< %s > = 3x
          [
            reg %s :v1(R) (6x)
            reg x :v1(R)[v1(R) 3x] (3x)
            reg %s :v1(R) (3x)
            reg %s :v1(R) (3x)
          ]
        }"""
            .formatted(
                Printer.toString(function.baseline().signature()),
                registers.get(0),
                registers.get(1),
                registers.get(2)),
        BcRecordingFeedback.print(module, bytecodes, recordings));

    var feedback =
        Objects.requireNonNull(BcRecordingFeedback.translate(module, bytecodes, recordings))
            .get(function.baseline());
    var x = function.baseline().parameters().get(0);
    var y = function.baseline().parameters().get(1);
    assertEquals(
        List.of(Type.BOXED_REAL),
        feedback.type(x).streamHits(3, x.type()).toList(),
        "`x`'s type must be a hit at the threshold");
    assertTrue(feedback.type(y).isEmpty(), "`y` is assigned, so it has no feedback");
  }

  /// The offset of `bc`'s `index`th recorded instruction of the given class.
  private static int offsetOf(
      Bc bc,
      SequencedMap<Integer, String> offsets,
      Class<? extends BcInstr> instruction,
      int index) {
    var recorded = recordedInstructions(bc);
    var keys = List.copyOf(offsets.keySet());
    return IntStream.range(0, recorded.size())
        .filter(i -> instruction.isInstance(recorded.get(i)))
        .skip(index)
        .mapToObj(keys::get)
        .findFirst()
        .orElseThrow(
            () -> new AssertionError("example has too few " + instruction.getSimpleName()));
  }

  private static VecSXP recording(int calls, VecSXP branch, VecSXP varCall, VecSXP fun) {
    return (VecSXP)
        SEXPs.vec(SEXPs.integer(calls), branch, varCall, fun)
            .withNames(List.of("calls", "branch", "var_call", "fun"));
  }

  private static VecSXP group(
      List<Integer> bcids, List<Integer> first, List<Integer> second, String... names) {
    return (VecSXP)
        SEXPs.vec(SEXPs.integer(bcids), SEXPs.integer(first), SEXPs.integer(second))
            .withNames(List.of("bcids", names[0], names[1]));
  }

  // region compiling the example
  /// [#SOURCE] compiled all the way to C, with everything the assertions need.
  private record Compiled(
      Module module, ModuleBcOriginMap bytecodes, String code, VecSXP constantPool) {
    /// Every bytecode baseline's pool, found the way the runtime finds them: by walking the
    /// module's constant pool and testing each nested pool for the magic string. Mirrors
    /// `Fir_visit_vectors` and `Fir_bc_baseline_feedback_map` in `runtime.c`.
    List<VecSXP> baselinePools() {
      return nestedVectors(constantPool).stream()
          .filter(
              pool ->
                  pool.size() > Fir2CCompiler.FIR_BC_BASELINE_CALLS
                      && pool.get(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK) instanceof StrSXP header
                      && header.size() == 2
                      && header.get(0).equals(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK_MAGIC))
          .toList();
    }

    Bc mainBc() {
      return Objects.requireNonNull(bytecodes.get("main")).bc();
    }

    Abstraction mainBaseline() {
      var function = module.localFunction(Variable.named("main"));
      assertNotNull(function, "no main function");
      return function.baseline();
    }

    SequencedMap<Integer, String> mainOffsets() {
      return BcRecordingFeedback.feedbackOffsets(
          mainBaseline(), Objects.requireNonNull(bytecodes.get("main")));
    }
  }

  private static Compiled compile() {
    var R = GNUR.instance();
    var session = R.getSession();

    var source = (CloSXP) R.eval(SOURCE);
    var bcCompiler = new BCCompiler(source, session);
    bcCompiler.setOptimizationLevel(BcOptLevel.FIR);
    var bc = bcCompiler.compile().orElseThrow(() -> new AssertionError("example didn't compile"));
    var main = SEXPs.closure(SEXPs.list(), SEXPs.bcode(bc), source.env());

    var module = new Module();
    var bytecodes = new ModuleBcOriginMap();
    BC2FirClosureCompiler.compile(session, module, "main", main, bytecodes);

    var mainFunction = module.localFunction(Variable.named("main"));
    assertNotNull(mainFunction, "FIR module missing main function");

    var compiled = Fir2CCompiler.compile(mainFunction, session, bytecodes, Option.values());
    return new Compiled(module, bytecodes, compiled.code().toString(), compiled.constantPool());
  }

  // endregion compiling the example

  // region reading the constant pool
  /// Every vector reachable from `vector` through vectors, including itself. Mirrors
  /// `Fir_visit_vectors` in `runtime.c`.
  private static List<VecSXP> nestedVectors(VecSXP vector) {
    var visited = new LinkedHashSet<VecSXP>();
    var worklist = new ArrayList<VecSXP>();
    worklist.add(vector);
    while (!worklist.isEmpty()) {
      var next = worklist.removeLast();
      if (!visited.add(next)) {
        continue;
      }
      for (var element : next) {
        if (element instanceof VecSXP nested) {
          worklist.add(nested);
        }
      }
    }
    return ImmutableList.copyOf(visited);
  }

  // endregion reading the constant pool

  // region the bytecode the JIT sees
  /// The instructions the JIT records feedback for, in order.
  private static List<BcInstr> recordedInstructions(Bc bc) {
    return bc.code().stream()
        .filter(BytecodeBaselineFeedbackTest::isRecorded)
        .collect(ImmutableList.toImmutableList());
  }

  /// The offsets of the instructions the JIT records feedback for, into the *encoded* bytecode:
  /// the array that starts with the version number and stores every instruction's arguments after
  /// its opcode, which is what the JIT indexes.
  private static List<Integer> recordedOffsets(Bc bc) {
    var offsets = ImmutableList.<Integer>builder();
    // Slot 0 is the version number, and every instruction takes its opcode plus its arguments.
    var offset = 1;
    for (var instruction : bc.code()) {
      if (isRecorded(instruction)) {
        offsets.add(offset);
      }
      offset += 1 + instruction.op().nArgs();
    }
    return offsets.build();
  }

  private static boolean isRecorded(BcInstr instruction) {
    return switch (instruction) {
      case BcInstr.GetVar _, BcInstr.GetFun _, BcInstr.Call _, BcInstr.BrIfNot _ -> true;
      default -> false;
    };
  }

  // endregion the bytecode the JIT sees

  /// The version's only register named `name` (feedback refers to registers by name, so it must be
  /// unambiguous).
  private static Register register(Abstraction version, String name) {
    var registers = version.streamRegisters().filter(r -> r.name().equals(name)).toList();
    assertEquals(1, registers.size(), "expected exactly one register named " + name);
    return registers.getFirst();
  }
}
