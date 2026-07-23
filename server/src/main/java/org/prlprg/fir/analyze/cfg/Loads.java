package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.AbstractListSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;

/// Computes a map of [NamedVariable] to the local [Load] statements that load said variable, or to
/// statements with symbol or language constant arguments that may load said variable when evaluated
/// (e.g. a GNU-R special evaluates its unevaluated symbol arguments in the caller's environment).
public final class Loads implements Analysis {
  private final Multimap<NamedVariable, Statement> loads = ArrayListMultimap.create();

  @AnalysisConstructor
  public Loads(Abstraction scope) {
    if (scope.cfg() != null) {
      run(scope.cfg());
    }
  }

  /// Get all local [Load] statements that load the given variable.
  public @UnmodifiableView Collection<Statement> get(NamedVariable variable) {
    return loads.get(variable);
  }

  private void run(CFG cfg) {
    for (var bb : cfg.bbs()) {
      for (var statement : bb.statements()) {
        switch (statement.expression()) {
          case Load(var loadType, var variable)
              when loadType == LoadType.LOCAL_VAR || loadType == LoadType.LOCAL_FUN ->
              loads.put(variable, statement);
          case Promise(_, _, var code, _) -> run(code);
          default -> {}
        }

        // A symbol or language constant is evaluated in the environment by whatever receives it
        // (e.g. a GNU-R special evaluates its unevaluated arguments in the caller's environment),
        // so it may load every named variable it mentions.
        if (!(statement.expression() instanceof Promise)) {
          for (var argument : statement.args()) {
            if (argument instanceof Constant(Value.Sexp(var sexp))) {
              addSymbolLoads(sexp, statement);
            }
          }
        }
      }
    }
  }

  private void addSymbolLoads(SEXP sexp, Statement position) {
    switch (sexp) {
      case RegSymSXP sym -> loads.put(Variable.named(sym.name()), position);
      case LangSXP lang -> {
        addSymbolLoads(lang.fun(), position);
        addSymbolLoads(lang.args(), position);
      }
      case AbstractListSXP list -> list.values().forEach(v -> addSymbolLoads(v, position));
      default -> {}
    }
  }
}
