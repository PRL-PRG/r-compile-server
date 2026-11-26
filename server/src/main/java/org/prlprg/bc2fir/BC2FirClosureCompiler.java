package org.prlprg.bc2fir;

import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr.BaseGuard;
import org.prlprg.bc.BcInstr.CallSpecial;
import org.prlprg.bc.BcInstr.CheckFun;
import org.prlprg.bc.BcInstr.EndAssign;
import org.prlprg.bc.BcInstr.GetBuiltin;
import org.prlprg.bc.BcInstr.GetFun;
import org.prlprg.bc.BcInstr.GetGlobFun;
import org.prlprg.bc.BcInstr.GetIntlBuiltin;
import org.prlprg.bc.BcInstr.MakeClosure;
import org.prlprg.bc.BcInstr.MakeProm;
import org.prlprg.bc.BcInstr.SetVar;
import org.prlprg.bc.BcInstr.StartFor;
import org.prlprg.bc.BcLabel;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.session.RSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Streams;

/// Compiles {@linkplain CloSXP R closures} into {@linkplain Function FIŘ functions}.
public final class BC2FirClosureCompiler {
  /// Compile the closure, add it to the module, and return it.
  ///
  /// @throws IllegalArgumentException If `r` is `null` and `closure` has AST default arguments
  /// or an AST body.
  public static Function compile(@Nullable RSession r, Module module, String name, CloSXP closure) {
    return compile(r, module, name, closure, null);
  }

  /// Compile the closure, add it to the module, and return it.
  ///
  /// The function's baseline is unevaluated: the bytecode is only compiled into its body when the
  /// body is first accessed, which is also when the functions of the closure's inner closures are
  /// added to the module (and when an unsupported bytecode is reported, by
  /// [BC2FirCFGCompilerUnsupportedException]). It has no fallback, because what runs instead of an
  /// unevaluated baseline is the bytecode itself.
  ///
  /// The body isn't cleaned up ([org.prlprg.fir.opt.Cleanup]): the compiler leaves unreachable
  /// blocks and other things behind, which the optimizations remove anyway.
  ///
  /// If `bytecodes` is non-`null`, records the closure's GNU-R bytecode in it (and, when the
  /// baseline is evaluated, that of every inner closure, as well as the baseline's feedback
  /// registers).
  ///
  /// @throws IllegalArgumentException If `r` is `null` and `closure` has AST default arguments
  /// or an AST body.
  public static Function compile(
      @Nullable RSession r,
      Module module,
      String name,
      CloSXP closure,
      @Nullable ModuleBcOriginMap bytecodes) {
    var bc = bytecode(r, closure);
    return compile(r, module, name, closure, bytecodes, bc, unknownCallees(bc, closure, Set.of()));
  }

  /// [#compile] of a closure that the bytecode of a function whose [#unknownCallees] are
  /// `enclosingCallees` makes. `name` is a hash of the closure, and gets one of
  /// `enclosingCallees`, which the properties of the closure and its inner closures depend on. So a
  /// function with that name is one of an identical closure, and it's returned instead.
  static Function compileInner(
      @Nullable RSession r,
      Module module,
      String name,
      CloSXP closure,
      @Nullable ModuleBcOriginMap bytecodes,
      Set<String> enclosingCallees) {
    var fullName =
        enclosingCallees.isEmpty()
            ? name
            : "%s_%x".formatted(name, String.join(" ", new TreeSet<>(enclosingCallees)).hashCode());
    var existing = module.lookupFunction(Variable.named(fullName));
    if (existing != null) {
      return existing;
    }
    var bc = bytecode(r, closure);
    return compile(
        r, module, fullName, closure, bytecodes, bc, unknownCallees(bc, closure, enclosingCallees));
  }

  private static Bc bytecode(@Nullable RSession r, CloSXP closure) {
    if (closure.body() instanceof BCodeSXP bcSxp) {
      return bcSxp.bc();
    }
    if (r == null) {
      throw new BC2FirClosureCompilerUnsupportedException(
          "RSession is required to compile AST body", closure);
    }
    var bodyThunk = SEXPs.closure(SEXPs.list(), closure.body(), r.globalEnv());
    return new BCCompiler(bodyThunk, r)
        .compile()
        .orElseThrow(
            () ->
                new BC2FirClosureCompilerUnsupportedException(
                    "Failed to compile AST body", closure));
  }

  private static Function compile(
      @Nullable RSession r,
      Module module,
      String name,
      CloSXP closure,
      @Nullable ModuleBcOriginMap bytecodes,
      Bc bc,
      Set<String> unknownCallees) {
    var parameterNames =
        closure.parameters().stream()
            .gather(Streams.mapWithIndex((p, i) -> Variable.named(p.hasTag() ? p.tag() : "p" + i)))
            .toList();
    var origin = bytecodes == null ? null : bytecodes.record(name, bc, closure.parameters());

    // The baseline's signature doesn't depend on the bytecode, so only the body is lazy.
    var function =
        module.addFunction(
            Variable.named(name),
            parameterNames,
            body -> {
              var cfgCompiler =
                  new BC2FirCFGCompiler(
                      r, new CFGCursor(body), bc, bytecodes, origin, unknownCallees);

              cfgCompiler.compileClosureEntry(parameterNames, closure.parameters().values());
              cfgCompiler.compileBc();
            });
    function.setFormals(closure.parameters());
    var properties = function.userProperties();
    properties.setNeedsContext(needsContext(bc, closure, unknownCallees));
    properties.setNeedsPromises(
        calls(bc, closure, n -> n != null && GlobalModules.PROMISE_READERS.contains(n)));
    return function;
  }

  /// Whether a call of the closure must run in a context (`@needsContext`): code in its frame calls
  /// a context reader, or a function that may be one: one of `unknownCallees`, a computed function
  /// (`x$f(y)`, `pkg::f(y)`), a `..1`, or `do.call`, which calls its argument in this frame.
  ///
  /// A global alias of a reader (`fn <- on.exit` at the top level) and a function that calls one in
  /// its caller's frame (`do.call(on.exit, args, envir = parent.frame())`) aren't seen. The FIŘ→C
  /// runtime raises an error for some such calls (`Fir_call_dynamic_values`).
  private static boolean needsContext(Bc bc, CloSXP closure, Set<String> unknownCallees) {
    return calls(
        bc,
        closure,
        callee ->
            callee == null
                || GlobalModules.CONTEXT_READERS.contains(callee)
                || unknownCallees.contains(callee)
                || callee.equals("do.call")
                || callee.matches("\\.\\.[0-9]+"));
  }

  /// The names that code in the closure's frame calls without knowing the function: its formals,
  /// its locals, and `enclosingCallees` (those of the function the closure is defined in, which a
  /// store of the closure may not shadow on every path). A local is known if each of its stores
  /// binds a closure literal, whose function has its own properties. A local with a builtin's name
  /// is skipped: it's data, which a call of the name skips (`c <- 1; c(x)`).
  private static Set<String> unknownCallees(Bc bc, CloSXP closure, Set<String> enclosingCallees) {
    var code = bc.code();
    var consts = bc.consts();
    var jumpTargets =
        code.stream()
            .flatMap(instr -> instr.label().stream())
            .map(BcLabel::target)
            .collect(Collectors.toSet());
    var unknown = new LinkedHashSet<>(closure.parameters().names());
    unknown.addAll(enclosingCallees);
    for (var i = 0; i < code.size(); i++) {
      var local =
          switch (code.get(i)) {
            case SetVar(var name) -> consts.get(name).name();
            case EndAssign(var name) -> consts.get(name).name();
            case StartFor(var _, var name, var _) -> consts.get(name).name();
            default -> null;
          };
      if (local == null) {
        continue;
      }
      var storesLiteral =
          code.get(i) instanceof SetVar
              && i > 0
              && code.get(i - 1) instanceof MakeClosure
              && !jumpTargets.contains(i);
      if (!storesLiteral && GlobalModules.BUILTINS.localFunction(Variable.named(local)) == null) {
        unknown.add(local);
      }
    }
    return unknown;
  }

  /// Whether the closure's bytecode or default arguments call a function in its own frame whose
  /// name `callee` accepts. `callee` gets `null` for a computed function.
  private static boolean calls(Bc bc, CloSXP closure, Predicate<@Nullable String> callee) {
    return calls(bc, callee)
        || closure.parameters().values().stream().anyMatch(d -> calls(d, callee));
  }

  /// [#calls(Bc, CloSXP, Predicate)] of code: of its instructions, or of its promises. Inner
  /// closures aren't scanned, because they have their own frame (and get their own properties when
  /// compiled).
  private static boolean calls(Bc bc, Predicate<@Nullable String> callee) {
    var consts = bc.consts();
    return bc.code().stream()
        .anyMatch(
            instr ->
                switch (instr) {
                  case GetFun(var name) -> callee.test(name(consts.get(name)));
                  case GetGlobFun(var name) -> callee.test(name(consts.get(name)));
                  case GetBuiltin(var name) -> callee.test(name(consts.get(name)));
                  case GetIntlBuiltin(var name) -> callee.test(name(consts.get(name)));
                  case CheckFun() -> callee.test(null);
                  // A special evaluates some of its AST arguments (`substitute(a,
                  // parent.frame())`).
                  case CallSpecial(var ast) -> calls(consts.get(ast), callee);
                  case BaseGuard(var expr, var _) -> callee.test(name(consts.get(expr).fun()));
                  case MakeProm(var code) -> calls(consts.get(code), callee);
                  default -> false;
                });
  }

  /// [#calls(Bc, Predicate)] of promise code or a default argument, which is bytecode or an AST.
  private static boolean calls(SEXP code, Predicate<@Nullable String> callee) {
    return switch (code) {
      case BCodeSXP bcSxp -> calls(bcSxp.bc(), callee);
      case LangSXP call when call.funNameIs("function") -> false;
      case LangSXP call ->
          callee.test(name(call.fun()))
              || calls(call.fun(), callee)
              || call.args().values().stream().anyMatch(arg -> calls(arg, callee));
      default -> false;
    };
  }

  private static @Nullable String name(SEXP fun) {
    return fun instanceof RegSymSXP sym ? sym.name() : null;
  }
}
