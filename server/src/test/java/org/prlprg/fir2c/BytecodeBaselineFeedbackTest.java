package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.stream.IntStream;
import org.intellij.lang.annotations.Language;
import org.jspecify.annotations.Nullable;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcOptLevel;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.feedback.MockModuleFeedback;
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
import org.prlprg.fir.parseprint.ModuleFeedbackParseContext;
import org.prlprg.parseprint.Parser;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

/// Tests the half of `Fir_serialized_feedback` that lives on the server: the feedback map every
/// bytecode baseline carries in its constant pool, which is how the runtime translates what the
/// copy-and-patch JIT recorded into FIŘ feedback (see `server/doc/bytecode-baseline-feedback.md`).
///
/// The other half (`client/rsh/src/fir2c/runtime.c`) needs the JIT, which only runs on Linux
/// x86-64, so what's tested here is everything it relies on: that the map's bytecode offsets are
/// the ones the JIT records feedback under, that its registers are the FIŘ instructions that
/// feedback describes, and that the feedback text the runtime builds around them parses back into
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
        compiled.mainMap().offsets(),
        "feedback map doesn't have exactly the offsets the JIT records feedback under");
  }

  @Test
  void mapsEachRecordedInstructionToTheExpressionItCompiledInto() {
    var compiled = compile();
    var map = compiled.mainMap();
    var baseline = compiled.mainBaseline();
    var recorded = recordedInstructions(compiled.mainBc());

    for (var i = 0; i < recorded.size(); i++) {
      var instruction = recorded.get(i);
      var register = register(baseline, map.registers().get(i));
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
  void everyMapIsWellFormed() {
    var compiled = compile();
    var maps = compiled.maps();

    // Only `main`'s: nothing emits the inner `f`, because the only FIŘ code that would create it
    // is `main`'s baseline, which is the bytecode instead.
    assertEquals(1, maps.size(), "every bytecode baseline must carry exactly one feedback map");
    for (var map : maps) {
      assertEquals(
          map.offsets().size(),
          map.registers().size(),
          "offsets and registers must be parallel: " + map.header());
      assertTrue(
          isAscending(map.offsets()),
          "offsets must ascend, so feedback is printed in bytecode order: " + map.offsets());
      for (var register : map.registers()) {
        // Feedback is parsed against the version its header names, so its registers must be the
        // ones in that version.
        register(compiled.baselineOf(map), register);
      }
    }
  }

  @Test
  void poolLayoutMatchesTheRuntime() {
    var compiled = compile();
    var pool = compiled.mainMap().pool();

    assertInstanceOf(BCodeSXP.class, pool.get(0), "slot 0 must be the bytecode");
    assertInstanceOf(
        VecSXP.class,
        pool.get(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK),
        "slot 3 must be the feedback map");
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
  void buildsFeedbackThatParsesBackIntoTheModule() {
    var compiled = compile();
    var map = compiled.mainMap();
    var baseline = compiled.mainBaseline();
    var loaded = register(baseline, map.registerOf(compiled.mainBc(), BcInstr.GetVar.class));
    var callee = register(baseline, map.registerOf(compiled.mainBc(), BcInstr.GetFun.class));
    var condition = register(baseline, map.registerOf(compiled.mainBc(), BcInstr.BrIfNot.class));

    // What the runtime writes for a `main` that ran twice, whose `GETVAR` always loaded a real
    // scalar, whose `GETFUN` always loaded a function it can't name, and whose `BRIFNOT` never
    // jumped.
    var text =
        """
        feedback {
          %s2x
          [
            reg %s :v1(R) (2x)
            reg %s -_ (2x)
            reg %s =TRUE (2x)
          ]
        }"""
            .formatted(map.header(), loaded.name(), callee.name(), condition.name());

    var feedback =
        Parser.fromString(
            text, MockModuleFeedback.class, new ModuleFeedbackParseContext(compiled.module()));
    var baselineFeedback = feedback.get(baseline);

    assertEquals(2, baselineFeedback.numCalls(), "number of calls");
    assertEquals(Type.BOXED_REAL, baselineFeedback.type(loaded).union(), "recorded type");
    assertEquals(2, baselineFeedback.times(loaded), "number of recordings");
    assertEquals(new Value.Bool(true), baselineFeedback.constant(condition), "recorded condition");
    // An ambiguous callee is recorded feedback that can't be speculated on, not absent feedback.
    assertTrue(baselineFeedback.callees.containsKey(callee), "ambiguous callee must be recorded");
    assertNull(baselineFeedback.callee(callee), "ambiguous callee must not resolve to a function");
  }

  // region compiling the example
  /// [#SOURCE] compiled all the way to C, with everything the assertions need.
  private record Compiled(Module module, String code, VecSXP constantPool) {
    /// Every bytecode baseline's feedback map, found the way the runtime finds them: by walking
    /// the module's constant pool and testing each nested pool for the magic string.
    List<FeedbackMap> maps() {
      var maps = new ArrayList<FeedbackMap>();
      for (var pool : nestedVectors(constantPool)) {
        var map = FeedbackMap.of(pool);
        if (map != null) {
          maps.add(map);
        }
      }
      return maps;
    }

    FeedbackMap mainMap() {
      return maps().stream()
          .filter(m -> m.header().startsWith("main<"))
          .findFirst()
          .orElseThrow(() -> new AssertionError("main's baseline has no feedback map"));
    }

    Bc mainBc() {
      return ((BCodeSXP) mainMap().pool().get(0)).bc();
    }

    Abstraction mainBaseline() {
      return baselineOf(mainMap());
    }

    /// The version `map`'s feedback is parsed against: the baseline of the function its header
    /// names.
    Abstraction baselineOf(FeedbackMap map) {
      var name = map.header().substring(0, map.header().indexOf('<'));
      var function = module.localFunction(Variable.named(name));
      assertNotNull(function, "no such function: " + name);
      return function.baseline();
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
    return new Compiled(module, compiled.code().toString(), compiled.constantPool());
  }

  // endregion compiling the example

  // region reading the feedback map
  private record FeedbackMap(
      VecSXP pool, String header, List<Integer> offsets, List<String> registers) {
    /// The map in `pool` if it's a bytecode baseline's constant pool, otherwise `null`. Mirrors
    /// `Fir_bc_baseline_feedback_map` in `runtime.c`.
    static @Nullable FeedbackMap of(VecSXP pool) {
      if (pool.size() <= Fir2CCompiler.FIR_BC_BASELINE_CALLS
          || !(pool.get(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK) instanceof VecSXP map)
          || map.size() != 3
          || !(map.get(0) instanceof StrSXP header)
          || header.size() != 2
          || !header.get(0).equals(Fir2CCompiler.FIR_BC_BASELINE_FEEDBACK_MAGIC)) {
        return null;
      }

      return new FeedbackMap(
          pool,
          header.get(1),
          Streams.stream((IntSXP) map.get(1)).collect(ImmutableList.toImmutableList()),
          Streams.stream((StrSXP) map.get(2)).collect(ImmutableList.toImmutableList()));
    }

    /// The register recorded for `bc`'s first instruction of the given class.
    String registerOf(Bc bc, Class<? extends BcInstr> instruction) {
      var recorded = recordedInstructions(bc);
      return IntStream.range(0, recorded.size())
          .filter(i -> instruction.isInstance(recorded.get(i)))
          .mapToObj(registers::get)
          .findFirst()
          .orElseThrow(() -> new AssertionError("example has no " + instruction.getSimpleName()));
    }
  }

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

  // endregion reading the feedback map

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

  private static boolean isAscending(List<Integer> values) {
    for (var i = 1; i < values.size(); i++) {
      if (values.get(i - 1) >= values.get(i)) {
        return false;
      }
    }
    return true;
  }
}
