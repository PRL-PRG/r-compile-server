package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.ArrayList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.Fallback;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// When [InternalInterpreter] asks its [Fallback], and what it does with the answer.
class FallbackInterpretTest {
  /// Answers every call with `answer`, and records the names of the functions it's asked for.
  private static final class RecordingFallback implements Fallback {
    final List<String> asked = new ArrayList<>();
    final @Nullable Value answer;

    RecordingFallback(@Nullable Value answer) {
      this.answer = answer;
    }

    @Override
    public @Nullable Value call(
        InternalInterpreter interpreter,
        Function function,
        Abstraction version,
        List<Value> arguments) {
      asked.add(function.name().name());
      return answer;
    }

    @Override
    public boolean isAttachedFunction(String name) {
      return name.equals("attachedFun");
    }

    @Override
    public @Nullable SEXP attachedVariable(String name) {
      return name.equals("attachedVar") ? SEXPs.integer(7) : null;
    }
  }

  private static final String VECTOR_ADD =
      """
      x: v(R)o = v(R)[1.0, 2.0, 3.0];
      y: v(R)o = v(R)[1.0, 2.0];
      r: V = `+`%< *@!,*@! -+> V >(x, y);
      """;

  @Test
  void unsupportedMockAsksFallback() {
    var fallback = new RecordingFallback(new Value.Sexp(SEXPs.real(42)));
    assertEquals(SEXPs.real(42), run(VECTOR_ADD, fallback));
    assertEquals(List.of("+"), fallback.asked);
  }

  @Test
  void unregisteredStubAsksFallback() {
    var fallback = new RecordingFallback(new Value.Sexp(SEXPs.string("a")));
    assertEquals(
        SEXPs.string("a"), run("f: cls = ldf strsplit; r: V = dyn f(<str \"a b\">);", fallback));
    assertEquals(List.of("strsplit"), fallback.asked);
  }

  @Test
  void fallbackThatDeclinesKeepsUnsupported() {
    var fallback = new RecordingFallback(null);
    var e =
        assertThrows(InternalInterpretUnsupportedException.class, () -> run(VECTOR_ADD, fallback));
    assertTrue(e.getMessage().contains("Stack:\n0. "), e::getMessage);
    assertEquals(List.of("+"), fallback.asked);
  }

  @Test
  void supportedMockDoesNotAskFallback() {
    var fallback = new RecordingFallback(null);
    assertEquals(
        SEXPs.real(3), run("r: V = `+`%< *@!,*@! -+> V >(<real 1.0>, <real 2.0>);", fallback));
    assertEquals(List.of(), fallback.asked);
  }

  /// The mock of `sum` forces its argument, whose `strsplit` isn't supported: only `strsplit`
  /// asks the fallback, because the frame of the promise is on the stack when `sum` gets the
  /// exception.
  @Test
  void unsupportedInNestedFrameOnlyAsksFallbackThere() {
    var fallback = new RecordingFallback(null);
    assertThrows(
        InternalInterpretUnsupportedException.class,
        () ->
            run(
                """
                p: p(V +) = prom<V +>{
                  f: cls = ldf strsplit;
                  s: V = dyn f(<str "a b">);
                  return s;
                };
                g: cls = ldf sum;
                r: V = dyn g(p);
                """,
                fallback));
    assertEquals(List.of("strsplit"), fallback.asked);
  }

  /// The fallback's value isn't of the return type of the version (an integer vector).
  @Test
  void resultOfAnotherTypeIsUnsupported() {
    var fallback = new RecordingFallback(new Value.Sexp(SEXPs.string("a")));
    assertThrows(
        InternalInterpretUnsupportedException.class,
        () -> run("r: v(I) = `+`< v(I),v(I) --> v(I) >(<int 2147483647>, <int 1>);", fallback));
  }

  @Test
  void attachedFunctionAndVariableAreBound() {
    var fallback = new RecordingFallback(new Value.Sexp(SEXPs.integer(1)));
    assertEquals(SEXPs.integer(1), run("f: cls = ldf attachedFun; r: V = dyn f();", fallback));
    assertEquals(List.of("attachedFun"), fallback.asked);
    assertEquals(SEXPs.integer(7), run("r: V = ld attachedVar;", fallback));
    assertThrows(
        InternalInterpretUnsupportedException.class,
        () -> run("f: cls = ldf otherFun; r: V = dyn f();", fallback));
  }

  private static SEXP run(String body, Fallback fallback) {
    var module = ParseUtil.parseModule("fun main() {\n  () -+> V {\n" + body + "return r;\n}\n}");
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    interpreter.setFallback(fallback);
    return interpreter.call("main").box();
  }
}
