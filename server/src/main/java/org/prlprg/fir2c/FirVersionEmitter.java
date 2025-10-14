package org.prlprg.fir2c;

import com.google.common.collect.ImmutableSet;
import java.util.LinkedHashMap;
import java.util.Map;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir2c.CModule.CFunction;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.NotImplementedError;

/// Emits C for a single [Abstraction].
///
/// The implementation keeps the translation extremely simple for now:
/// - Registers are represented as local `SEXP` variables initialised to `R_NilValue`.
/// - Arguments arrive as `SEXP const *ARGS` with accompanying `int NARGS`.
/// - Only a small subset of statements/jumps are lowered; the architecture is arranged so that
///   support can grow instruction-by-instruction.
final class FirVersionEmitter {
  // Input
  private final ImmutableSet<Option> options;
  private final Function function;
  private final int versionIndex;
  private final Abstraction abstraction;
  private final CFG cfg;

  // Output
  private final CFunction cFunction;
  private final ConstantPool constantPool;

  // State
  private final IdentifierMangler mangler;
  private final Map<Register, String> registerNames = new LinkedHashMap<>();
  private final Map<BB, String> labelNames = new LinkedHashMap<>();

  FirVersionEmitter(
      ImmutableSet<Option> options,
      Function function,
      int versionIndex,
      Abstraction abstraction,
      CFunction cFunction,
      ConstantPool constantPool,
      IdentifierMangler mangler) {
    if (abstraction.cfg() == null) {
      throw new IllegalArgumentException("FirVersionEmitter doesn't handle stubs:\n" + abstraction);
    }

    this.options = options;
    this.function = function;
    this.versionIndex = versionIndex;
    this.abstraction = abstraction;
    this.cfg = abstraction.cfg();
    this.cFunction = cFunction;
    this.constantPool = constantPool;
    this.mangler = mangler;

    prepare();
    emit();
  }

  // region prepare
  private void prepare() {
    prepareRegisters();
    prepareLabels();
  }

  private void prepareRegisters() {
    abstraction
        .streamRegisterBindings()
        .forEach(
            binding -> {
              var register = (Register) binding.variable();
              registerNames.put(register, mangler.unique(register.name()));
            });
  }

  private void prepareLabels() {
    abstraction
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .forEach(
            bb -> {
              if (labelNames.containsKey(bb)) {
                throw new IllegalStateException("BB appears multiple times? " + bb);
              }
              labelNames.put(bb, mangler.unique("BB_%s".formatted(bb.label())));
            });
  }

  // endregion prepare

  // region emit
  private void emit() {
    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cFunction.comment(
          "FIR "
              + function.name().name()
              + " version "
              + versionIndex
              + " ("
              + abstraction.signature()
              + ")");
    }

    emitArityCheck();
    emitParameterBinding();
    emitRegisterDeclarations();
    emitCfg();
  }

  private void emitArityCheck() {
    if (!options.contains(Option.CHECK_ARITY)) {
      return;
    }

    var expected = abstraction.parameters().size();
    cFunction.stmt(
        "if (Rf_length(%s) != %d) {".formatted(Module2CCompiler.VAR_SEXP_PARAMS, expected));
    cFunction.stmt(
        2,
        "Rf_error(\"FIŘ arity mismatch for %s/%d: expected %d, got %%d\", Rf_length(%s));"
            .formatted(
                sanitizeString(function.name().name()),
                versionIndex,
                expected,
                Module2CCompiler.VAR_SEXP_PARAMS));
    cFunction.stmt("}");

    cFunction.blank();
  }

  private void emitParameterBinding() {
    var parameters = abstraction.parameters();
    if (parameters.isEmpty()) {
      return;
    }

    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cFunction.comment("Bind parameters");
    }

    for (var i = 0; i < parameters.size(); i++) {
      var param = parameters.get(i);
      var name = registerName(param.variable());
      cFunction.stmt("%s = %s[%d];".formatted(name, Module2CCompiler.VAR_SEXP_PARAMS, i));
    }

    cFunction.blank();
  }

  private void emitRegisterDeclarations() {
    if (registerNames.isEmpty()) {
      return;
    }

    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cFunction.comment("Registers");
    }

    for (var entry : registerNames.entrySet()) {
      cFunction.stmt("SEXP %s = R_NilValue;".formatted(entry.getValue()));
    }

    cFunction.blank();
  }

  private void emitCfg() {
    for (var bb : cfg.bbs()) {
      cFunction.label("%s:".formatted(labelName(bb)));
      for (var statement : bb.statements()) {
        emitStatement(statement);
      }
      emitJump(bb.jump());

      cFunction.blank();
    }
  }

  private void emitPhiTransfers(Target target) {
    var parameters = target.bb().phiParameters();
    if (parameters.isEmpty()) {
      return;
    }

    var phiArgs = target.phiArgs();
    if (parameters.size() != phiArgs.size()) {
      throw new IllegalStateException(
          "Phi parameter/argument count mismatch for " + target.bb().label());
    }

    for (var i = 0; i < parameters.size(); i++) {
      var phi = parameters.get(i);
      var arg = phiArgs.get(i);

      var dest = registerName(phi);
      var value = emitArgument(arg);

      cFunction.stmt("%s = %s;".formatted(dest, value));
    }
  }

  private void emitStatement(Statement statement) {
    var expression = statement.expression();
    if (expression == Expression.NOOP) {
      return;
    }

    var expr =
        switch (expression) {
          case Aea(var arg) -> emitArgument(arg);
          case Load(var variable) -> {
            var cSymbol = nvSymbolRef(variable);
            yield "Rf_findVar(%s, %s);".formatted(cSymbol, Module2CCompiler.VAR_ENV);
          }
          case Store(var variable, var value) -> {
            var value1 = emitArgument(value);
            var cSymbol = nvSymbolRef(variable);
            yield "Rf_setVar(%s, %s, %s);".formatted(cSymbol, value1, Module2CCompiler.VAR_ENV);
          }
          default -> throw new NotImplementedError(expression.getClass().getSimpleName());
        };

    if (statement.assignee() != null) {
      cFunction.stmt("%s = %s;".formatted(registerName(statement.assignee()), expr));
    }
  }

  private void emitJump(Jump jump) {
    switch (jump) {
      case Return(var value) -> cFunction.stmt("return %s;".formatted(emitArgument(value)));
      case Goto(var target) -> {
        emitPhiTransfers(target);
        cFunction.stmt("goto %s;".formatted(labelName(target.bb())));
      }
      case Unreachable() -> {
        cFunction.stmt("Rf_error(\"FIŘ unreachable reached\");");
        cFunction.stmt("return R_NilValue;");
      }
      default -> throw new NotImplementedError(jump.getClass().getSimpleName());
    }
  }

  private String emitArgument(Argument argument) {
    return switch (argument) {
      case Constant(var constant) -> constantRef(constant);
      case Read(var variable) -> registerName(variable);
      case Use(var variable) -> registerName(variable);
    };
  }

  // endregion emit

  // region interned
  private String nvSymbolRef(NamedVariable nv) {
    return constantRef(SEXPs.symbol(nv.name()));
  }

  private String constantRef(SEXP sexp) {
    var idx = constantPool.intern(sexp);
    return "Rsh_const(%s, %d)".formatted(Module2CCompiler.VAR_POOL, idx);
  }

  private String registerName(Register register) {
    var name = registerNames.get(register);
    if (name == null) {
      throw new IllegalArgumentException("Unknown (not declared) register: " + register);
    }
    return name;
  }

  private String labelName(BB bb) {
    var name = labelNames.get(bb);
    if (name == null) {
      throw new IllegalArgumentException("Unknown (not in CFG) BB: " + bb);
    }
    return name;
  }

  // endregion interned

  // region misc utils
  private static String sanitizeString(String value) {
    return value.replace("\"", "\\\"");
  }
  // endregion misc utils
}
