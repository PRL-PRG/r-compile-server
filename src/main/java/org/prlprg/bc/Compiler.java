package org.prlprg.bc;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.Optional;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.sexp.*;
import org.prlprg.bc.BcInstr.*;

public class Compiler {
  private static final Set<String> MAYBE_NSE_SYMBOLS = Set.of("bquote");
  private static final Set<String> ALLOWED_INLINES =
      Set.of(
          "^",
          "~",
          "<",
          "<<-",
          "<=",
          "<-",
          "=",
          "==",
          ">",
          ">=",
          "|",
          "||",
          "-",
          ":",
          "!",
          "!=",
          "/",
          "(",
          "[",
          "[<-",
          "[[",
          "[[<-",
          "{",
          "@",
          "$",
          "$<-",
          "*",
          "&",
          "&&",
          "%/%",
          "%*%",
          "%%",
          "+",
          "::",
          ":::",
          "@<-",
          "break",
          "for",
          "function",
          "if",
          "next",
          "repeat",
          "while",
          "local",
          "return",
          "switch");

  private final Bc.Builder cb = new Bc.Builder();

  /*
   * 0 - No inlining
   * 1 - Functions in the base packages found through a namespace that are not shadowed by
   * function arguments or visible local assignments may be inlined.
   * 2 - In addition to the inlining permitted by Level 1, functions that are syntactically special
   * or are considered core language functions and are found via the global environment at compile
   * time may be inlined. Other functions in the base packages found via the global environment
   * may be inlined with a guard that ensures at runtime that the inlined function has not been
   * masked; if it has, then the call in handled by the AST interpreter.
   * 3 - Any function in the base packages found via the global environment may be inlined.
   */
  private final int optimizationLevel;

  public Compiler(int optimizationLevel) {
    this.optimizationLevel = optimizationLevel;
  }

  public Bc compileFun(CloSXP fun) {
    var ctx = Context.functionContext(fun);

    // TODO: if (mayCallBrowser(body(f), ncntxt)) return(f)
    // TODO: location
    // TODO: attributes - set after compilation
    // TODO: S4?

    // TODO: parameters
    return compile(fun.body(), ctx);
  }

  private Bc compile(SEXP expr, Context ctx) {
    compileExpr(expr, ctx);
    return cb.build();
  }

  private void compileExpr(SEXP expr, Context ctx) {
    // TODO: check we do not attempt to compile BCSXP or PROMSXP
    // TODO: constant fold
    switch (expr) {
      case LangSXP e -> compileCall(e, ctx, true);
      case SpecialSymSXP e -> throw new CompilerException("unhandled special symbol: " + e);
      case RegSymSXP e -> compileSym(e, ctx, false);
      default -> compileConst(expr, ctx);
    }
  }

  private void compileSym(RegSymSXP e, Context ctx, boolean missingOk) {
    if (e.isEllipsis()) {
      // TODO: notifyWrongDotsUse
      cb.addInstr(new DotsErr());
    } else if (e.isDdSym()) {
      // TODO: if (!findLocVar("...", ctx))
      //       notifyWrongDotsUse
      var idx = cb.addConst(e);
      cb.addInstr(missingOk ? new DdValMissOk(idx) : new DdVal(idx));
      checkTailCall(ctx);
    } else {
      // TODO: if (!findVar(sym, ctx))
      //       notifyUndefVar
      var idx = cb.addConst(e);
      cb.addInstr(missingOk ? new GetVarMissOk(idx) : new GetVar(idx));
      checkTailCall(ctx);
    }
  }

  @SuppressFBWarnings(
      value = "DLS_DEAD_LOCAL_STORE",
      justification = "False positive, probably because of ignored switch case")
  private void compileConst(SEXP expr, Context ctx) {
    if (expr.type() == SEXPType.PROM || expr.type() == SEXPType.BCODE) {
      throw new CompilerException("Unexpected type: " + expr.type());
    }

    switch (expr) {
      case NilSXP ignored -> cb.addInstr(new LdNull());
      case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new LdTrue());
      case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new LdFalse());
      default -> cb.addInstr(new LdConst(cb.addConst(expr)));
    }

    checkTailCall(ctx);
  }

  void compileCall(LangSXP call, Context ctx, boolean canInline) {
    var args = call.args();
    switch (call.fun()) {
      case RegSymSXP fun -> {
        if (!(canInline && tryInline(fun, call, ctx))) {
          // TODO: check call
          compileCallSymFun(fun, args, call, ctx);
        }
      }
      case SpecialSymSXP fun ->
          throw new IllegalStateException("Trying to call special symbol: " + fun);
      case LangSXP fun -> {
        // TODO: break / next
        compileCallExprFun(fun, args, call, ctx);
      }
    }
  }

  private boolean tryInline(RegSymSXP fun, LangSXP call, Context ctx) {
    if (optimizationLevel == 0) {
      return false;
    }

    // it seems that there is no way to pattern match on Optional
    var bindingOpt = ctx.resolve(fun.name());
    if (bindingOpt.isEmpty()) {
      return false;
    }
    var binding = bindingOpt.get();
    if (binding.first() instanceof BaseEnvSXP) {
      return tryInlineBase(fun.name(), call, ctx);
    } else {
      return false;
    }
  }

  private void compileCallSymFun(RegSymSXP fun, ListSXP args, LangSXP call, Context ctx) {
    cb.addInstr(new GetFun(cb.addConst(fun)));
    var nse = MAYBE_NSE_SYMBOLS.contains(fun.name());
    compileArgs(args, nse, ctx);
    cb.addInstr(new Call(cb.addConst(call)));
    checkTailCall(ctx);
  }

  private void compileCallExprFun(LangSXP fun, ListSXP args, LangSXP call, Context ctx) {
    compileExpr(fun, ctx.makeNonTailContext());
    cb.addInstr(new CheckFun());
    compileArgs(args, false, ctx);
    cb.addInstr(new Call(cb.addConst(call)));
    checkTailCall(ctx);
  }

  @SuppressFBWarnings(
      value = "DLS_DEAD_LOCAL_STORE",
      justification = "False positive, probably because of ignored switch case")
  private void compileArgs(ListSXP args, boolean nse, Context ctx) {
    for (var arg : args) {
      var tag = arg.tag();
      var val = arg.value();

      switch (val) {
        case SymSXP x when x.isMissing() -> {
          cb.addInstr(new DoMissing());
          compileTag(tag);
        }
        case SymSXP x when x.isEllipsis() ->
            // TODO: if (!findLocVar("...", ctx))
            //       notifyWrongDotsUse
            cb.addInstr(new DoDots());
        case SymSXP x -> {
          compileNormArg(x, nse, ctx);
          compileTag(tag);
        }
        case LangSXP x -> {
          compileNormArg(x, nse, ctx);
          compileTag(tag);
        }
        case PromSXP ignored ->
            throw new CompilerException("can't compile promises in code");
        case BCodeSXP ignored ->
            throw new CompilerException("can't compile byte code literals in code");
        default -> {
          compileConstArg(val);
          compileTag(tag);
        }
      }
    }
  }

  private void compileNormArg(SEXP arg, boolean nse, Context ctx) {
    cb.addInstr(
        new MakeProm(
            cb.addConst(nse ? arg : SEXPs.bcode(compile(arg, ctx.makePromiseContext())))));
  }

  @SuppressFBWarnings(
      value = "DLS_DEAD_LOCAL_STORE",
      justification = "False positive, probably because of ignored switch case")
  private void compileConstArg(SEXP arg) {
    switch (arg) {
      case NilSXP ignored -> cb.addInstr(new PushNullArg());
      case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new PushTrueArg());
      case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new PushFalseArg());
      default -> cb.addInstr(new PushConstArg(cb.addConst(arg)));
    }
  }

  private void compileTag(@Nullable String tag) {
    if (tag != null && !tag.isEmpty()) {
      cb.addInstr(new SetTag(cb.addConst(SEXPs.string(tag))));
    }
  }

  private void checkTailCall(Context ctx) {
    if (ctx.isTailCall()) {
      cb.addInstr(new Return());
    }
  }

  private boolean tryInlineBase(String name, LangSXP call, Context ctx) {
    if (optimizationLevel < 2) {
      return false;
    }
    if (optimizationLevel == 2 && !ALLOWED_INLINES.contains(name)) {
      return false;
    }

    switch (name) {
      case "{" -> inlineBlock(call, ctx);
      case "if" -> inlineCondition(call, ctx);
      case "function" -> inlineFunction(call, ctx);
      default -> {
        return false;
      }
    }
    return true;
  }

  /**
   * From the R documentation:
   *
   * <p><quote>
   * The inlining handler for `{` needs to consider that a pair of braces { and } can surround zero,
   * one, or more expressions. A set of empty braces is equivalent to the constant NULL. If there is
   * more than one expression, then all the values of all expressions other than the last are
   * ignored. These expressions are compiled in a no-value context (currently equivalent to a
   * non-tail-call context), and then code is generated to pop their values off the stack. The final
   * expression is then compiled according to the context in which the braces expression occurs.
   * </quote></p>
   *
   * @param call
   * @param ctx
   */
  private void inlineBlock(LangSXP call, Context ctx) {
    var n = call.args().size();
    if (n == 0) {
      compile(SEXPs.NULL, ctx);
      return;
    }

    if (n > 1) {
      call.args().values().subList(0, n - 1).forEach(x -> compileExpr(x, ctx.makeNonTailContext()));
    }

    compile(call.arg(n - 1).value(), ctx);
  }

  private void inlineCondition(LangSXP call, Context ctx) {
    var test = call.arg(0).value();
    var thenBranch = call.arg(1).value();
    var elseBranch = Optional.<SEXP>empty();
    if (call.args().size() == 3) {
      elseBranch = Optional.of(call.arg(2).value());
    }

    // TODO: constant fold

    var nctx = ctx.makeNonTailContext();
    compile(test, nctx);
    
    var elseLabel = cb.makeLabel();
    cb.addInstr(new BrIfNot(cb.addConst(call), elseLabel));
    
    compile(thenBranch, ctx);

    if (ctx.isTailCall()) {
      cb.patchLabel(elseLabel);
      elseBranch.ifPresentOrElse(
          branch -> compile(branch, ctx),
          () -> {
            cb.addInstr(new LdNull());
            cb.addInstr(new Invisible());
            cb.addInstr(new Return());
          });
    } else {
      var endLabel = cb.makeLabel();
      cb.addInstr(new Goto(endLabel));
      cb.patchLabel(elseLabel);
      elseBranch.ifPresentOrElse(
          branch -> compile(branch, ctx),
          () -> {
            cb.addInstr(new LdNull());
          });
      cb.patchLabel(endLabel);
    }
  }

  /**
   * From the R documentation:
   *
   * <p><quote>
   * Compiling of function expressions is somewhat similar to compiling promises for function arguments.
   * The body of a function is compiled into a separate byte code object and stored in the
   * constant pool together with the formals. Then code is emitted for creating a closure from the
   * formals, compiled body, and the current environment. For now, only the body of functions is
   * compiled, not the default argument expressions. This should be changed in future versions of the
   * compiler.
   * </quote></p>
   * @param call
   * @param ctx
   */
  private void inlineFunction(LangSXP call, Context ctx) {
    // TODO: sourcerefs
    // TODO: if (mayCallBrowser(body, cntxt)) return(FALSE)

    var formals = (ListSXP) call.arg(0).value();
    var body = call.arg(1).value();
    var nctx = ctx.makeFunctionContext(formals, body);

    var compiler = new Compiler(optimizationLevel);
    var cbody = compiler.compile(body, nctx);
    var cbodysxp = SEXPs.bcode(cbody);

    cb.addInstr(new MakeClosure(cb.addConst(SEXPs.vec(formals, cbodysxp))));

    checkTailCall(ctx);
  }
}
