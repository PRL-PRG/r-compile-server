package org.prlprg.fir2c;

import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
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
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.sexp.SEXPs;

/**
 * Emits C for a single FIŘ abstraction (function version).
 *
 * <p>The implementation keeps the translation extremely simple for now:
 *
 * <ul>
 *   <li>Registers are represented as local {@code SEXP} variables initialised to {@code
 *       R_NilValue}.
 *   <li>Arguments arrive as {@code SEXP const *ARGS} with accompanying {@code int NARGS}.
 *   <li>Only a small subset of statements/jumps are lowered; the architecture is arranged so that
 *       support can grow instruction-by-instruction.
 * </ul>
 */
final class FirVersionEmitter {
  private final FirCompilationOptions options;
  private final FirConstantPool constantPool;
  private final Function function;
  private final int versionIndex;
  private final Abstraction abstraction;
  private final CModuleUnit.CFunctionUnit cFunction;
  private final IdentifierMangler mangler;

  private final Map<Register, String> registerNames = new LinkedHashMap<>();
  private final Map<BB, String> labels = new LinkedHashMap<>();

  FirVersionEmitter(
      FirCompilationOptions options,
      FirConstantPool constantPool,
      Function function,
      int versionIndex,
      Abstraction abstraction,
      CModuleUnit.CFunctionUnit cFunction,
      IdentifierMangler mangler) {
    this.options = options;
    this.constantPool = constantPool;
    this.function = function;
    this.versionIndex = versionIndex;
    this.abstraction = abstraction;
    this.cFunction = cFunction;
    this.mangler = mangler;
  }

  public void emit() {
    prepareRegisters();

    if (options.emitDebugComments()) {
      cFunction.comment(
          1,
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
    var expected = abstraction.parameters().size();
    if (!options.checkArity() || expected == 0) {
      return;
    }
    cFunction.line(1, "if (%s != %d) {".formatted(FirModuleCompiler.PARAM_ARG_COUNT, expected));
    cFunction.line(
        2,
        "Rf_error(\"FIŘ arity mismatch for %s/%d: expected %d, got %%d\", %s);"
            .formatted(
                sanitizeLiteral(function.name().name()),
                versionIndex,
                expected,
                FirModuleCompiler.PARAM_ARG_COUNT));
    cFunction.line(1, "}");
    cFunction.blankLine();
  }

  private void emitParameterBinding() {
    var parameters = abstraction.parameters();
    if (parameters.isEmpty()) {
      return;
    }

    if (options.emitDebugComments()) {
      cFunction.comment(1, "Bind parameters");
    }

    for (var i = 0; i < parameters.size(); i++) {
      var param = parameters.get(i);
      var name = registerName(param.variable());
      cFunction.line(1, "%s = %s[%d];".formatted(name, FirModuleCompiler.PARAM_ARGUMENTS, i));
    }
    cFunction.blankLine();
  }

  private void emitRegisterDeclarations() {
    if (registerNames.isEmpty()) {
      return;
    }

    if (options.emitDebugComments()) {
      cFunction.comment(1, "Registers");
    }

    for (var entry : registerNames.entrySet()) {
      cFunction.line(1, "SEXP %s = R_NilValue;".formatted(entry.getValue()));
    }
    cFunction.blankLine();
  }

  private void emitCfg() {
    var cfg = abstraction.cfg();
    if (cfg == null) {
      cFunction.line(
          1,
          "Rf_error(\"FIR version stub reached: %s/%d\");"
              .formatted(function.name(), versionIndex));
      cFunction.line(1, "return R_NilValue;");
      return;
    }

    for (var bb : cfg.bbs()) {
      cFunction.line(0, "%s:".formatted(labelName(bb)));

      for (var statement : bb.statements()) {
        emitStatement(statement);
      }

      emitJump(bb.jump());
      cFunction.blankLine();
    }
  }

  private void emitStatement(Statement statement) {
    var expression = statement.expression();
    if (expression == Expression.NOOP) {
      return;
    }

    if (expression instanceof Aea aea) {
      emitAea(statement.assignee(), aea);
    } else if (expression instanceof Load load) {
      emitLoad(statement.assignee(), load);
    } else if (expression instanceof Store store) {
      emitStore(statement.assignee(), store);
    } else {
      throw new UnsupportedOperationException(
          "Unsupported FIR expression: " + expression.getClass().getSimpleName());
    }
  }

  private void emitAea(Register assignee, Aea expression) {
    var value = emitArgument(expression.value());
    if (assignee == null) {
      if (options.emitDebugComments()) {
        cFunction.comment(1, "Value ignored: " + value);
      }
      return;
    }
    cFunction.line(1, "%s = %s;".formatted(registerName(assignee), value));
  }

  private void emitLoad(Register assignee, Load load) {
    if (assignee == null) {
      throw new UnsupportedOperationException("Load expression without assignee");
    }
    var symbol = SEXPs.symbol(load.variable().name());
    var cSymbol = constantRef(symbol);
    cFunction.line(
        1,
        "%s = Rf_findVar(%s, %s);"
            .formatted(registerName(assignee), cSymbol, FirModuleCompiler.PARAM_ENVIRONMENT));
  }

  private void emitStore(Register assignee, Store store) {
    var value = emitArgument(store.value());
    var symbol = SEXPs.symbol(store.variable().name());
    var cSymbol = constantRef(symbol);
    cFunction.line(
        1, "Rf_setVar(%s, %s, %s);".formatted(cSymbol, value, FirModuleCompiler.PARAM_ENVIRONMENT));
    if (assignee != null) {
      cFunction.line(1, "%s = %s;".formatted(registerName(assignee), value));
    }
  }

  private void emitJump(Jump jump) {
    if (jump instanceof Return ret) {
      cFunction.line(1, "return %s;".formatted(emitArgument(ret.value())));
      return;
    }
    if (jump instanceof Goto go) {
      emitPhiTransfers(go.target());
      cFunction.line(1, "goto %s;".formatted(labelName(go.target().bb())));
      return;
    }
    if (jump instanceof Unreachable) {
      cFunction.line(1, "Rf_error(\"FIŘ unreachable reached\");");
      cFunction.line(1, "return R_NilValue;");
      return;
    }

    throw new UnsupportedOperationException(
        "Unsupported FIR jump: " + jump.getClass().getSimpleName());
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
      var dest = registerName(parameters.get(i));
      var value = emitArgument(phiArgs.get(i));
      cFunction.line(1, "%s = %s;".formatted(dest, value));
    }
  }

  private String emitArgument(Argument argument) {
    return switch (argument) {
      case org.prlprg.fir.ir.argument.Constant constant -> constantRef(constant.sexp());
      case Read read -> registerName(read.variable());
      case Use use -> registerName(use.variable());
    };
  }

  private String constantRef(org.prlprg.sexp.SEXP sexp) {
    var idx = constantPool.intern(sexp);
    return "Rsh_const(%s, %d)".formatted(FirModuleCompiler.PARAM_CONSTANT_POOL, idx);
  }

  private void prepareRegisters() {
    var ordered = new LinkedHashSet<Register>();
    for (var param : abstraction.parameters()) {
      ordered.add(param.variable());
    }
    for (var local : abstraction.locals()) {
      ordered.add(local.variable());
    }
    var cfg = abstraction.cfg();
    if (cfg != null) {
      collectFromCfg(ordered, cfg);
    }
    for (var register : ordered) {
      registerNames.put(register, mangler.unique(register.name()));
    }
  }

  private void collectFromCfg(Set<Register> dest, CFG cfg) {
    for (var bb : cfg.bbs()) {
      dest.addAll(bb.phiParameters());
      for (var statement : bb.statements()) {
        if (statement.assignee() != null) {
          dest.add(statement.assignee());
        }
        addArguments(dest, statement.arguments());
      }
      addArguments(dest, bb.jump().arguments());
    }
  }

  private void addArguments(Set<Register> dest, Collection<Argument> arguments) {
    for (var argument : arguments) {
      var register = argument.variable();
      if (register != null) {
        dest.add(register);
      }
    }
  }

  private String registerName(Register register) {
    var name = registerNames.get(register);
    if (name == null) {
      throw new IllegalStateException("No C name for register: " + register);
    }
    return name;
  }

  private String labelName(BB bb) {
    return labels.computeIfAbsent(
        bb, ignored -> mangler.unique("BB_" + bb.label().replace('$', '_')));
  }

  private static String sanitizeLiteral(String value) {
    return value.replace("\"", "\\\"");
  }
}
