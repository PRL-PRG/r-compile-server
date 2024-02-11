package org.prlprg.bc;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;

import java.util.Optional;
import java.util.Set;
import java.util.function.Function;
import javax.annotation.Nullable;

import org.prlprg.RSession;
import org.prlprg.bc.BcInstr.*;
import org.prlprg.sexp.*;

// FIXME: use null instead of Optional (except for return types)
// FIXME: update the SEXP API based on the experience with this code
//   - especially the clumsy ListSXP
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

  private static final Set<String> FORBIDDEN_INLINES = Set.of("standardGeneric");

  private static final int MAX_CONST_SIZE = 10;

  // I also did not know:
  // > x <- function() TRUE
  // > .Internal(inspect(body(x)))
  // @5c0d69684e48 10 LGLSXP g0c1 [REF(2)] (len=1, tl=0) 1
  // > x <- function() T
  // > .Internal(inspect(body(x)))
  // @5c0d6769c910 01 SYMSXP g0c0 [MARK,REF(4),LCK,gp=0x4000] "T" (has value)
  private static final Set<String> ALLOWED_FOLDABLE_CONSTS = Set.of("pi", "T", "F");

  private static final Set<String> ALLOWED_FOLDABLE_FUNS = Set.of();

  private final Bc.Builder cb = new Bc.Builder();

  private final RSession rsession;

  /** The initial expression to compile. */
  private final SEXP expr;

  private Context ctx;

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
  private int optimizationLevel = 2;

  private Compiler(SEXP expr, Context ctx, RSession rsession, Loc loc) {
    this.expr = expr;
    this.ctx = ctx;
    this.rsession = rsession;

    if (loc.srcRef() == null) {
      // from R documentation:
      // when top-level srcref is null, we speculate there will be no
      // source references within the compiled expressions either,
      // disabling the tracking makes the resulting constant pool smaller
      cb.setTrackSrcRefs(false);
    }

    cb.setCurrentLoc(loc);
  }

  public Compiler(CloSXP fun, RSession rsession) {
    this(fun.body(), Context.functionContext(fun), rsession, functionLoc(fun));
  }

  private Compiler fork(SEXP expr, Context ctx, Loc loc) {
    var compiler = new Compiler(expr, ctx, rsession, loc);
    compiler.setOptimizationLevel(optimizationLevel);
    return compiler;
  }

  public void setOptimizationLevel(int level) {
    this.optimizationLevel = level;
  }

  public Bc compile() {
    cb.addConst(expr);
    compile(expr, false);
    return cb.build();
  }

  private static Loc functionLoc(CloSXP fun) {
    var body = fun.body();

    IntSXP srcRef;
    if (!(body instanceof LangSXP b
        && (b.fun() instanceof RegSymSXP sym && sym.name().equals("{")))) { // FIXME: ugly
      // try to get the srcRef from the function itself
      // normally, it would be attached to the `{`
      srcRef = fun.getSrcRef();
    } else {
      srcRef = extractSrcRef(body, 0);
    }

    return new Loc(body, srcRef);
  }

  private void compile(SEXP expr) {
    compile(expr, true);
  }

  private void compile(SEXP expr, boolean setLoc) {
    Loc loc = null;
    if (setLoc) {
      loc = cb.getCurrentLoc();
      cb.setCurrentLoc(new Loc(expr, extractSrcRef(expr, 0)));
    }

    constantFold(expr)
        .ifPresentOrElse(
            this::compileConst,
            () -> {
              switch (expr) {
                case LangSXP e -> compileCall(e, true);
                case RegSymSXP e -> compileSym(e, false);
                case SpecialSymSXP e ->
                    stop("unhandled special symbol: ");
                case PromSXP ignored ->
                    stop("cannot compile promise literals in code");
                case BCodeSXP ignored ->
                    stop("cannot compile byte code literals in code");
                default -> compileConst(expr);
              }
            });

    if (loc != null) {
      cb.setCurrentLoc(loc);
    }
  }

  private void compileSym(RegSymSXP e, boolean missingOk) {
    if (e.isEllipsis()) {
      // TODO: notifyWrongDotsUse
      cb.addInstr(new DotsErr());
    } else if (e.isDdSym()) {
      // TODO: if (!findLocVar("..."))
      //       notifyWrongDotsUse
      var idx = cb.addConst(e);
      cb.addInstr(missingOk ? new DdValMissOk(idx) : new DdVal(idx));
      checkTailCall();
    } else {
      // TODO: if (!findVar(sym))
      //       notifyUndefVar
      var idx = cb.addConst(e);
      cb.addInstr(missingOk ? new GetVarMissOk(idx) : new GetVar(idx));
      checkTailCall();
    }
  }

  @SuppressFBWarnings(
      value = "DLS_DEAD_LOCAL_STORE",
      justification = "False positive, probably because of ignored switch case")
  private void compileConst(SEXP expr) {
    switch (expr) {
      case NilSXP ignored -> cb.addInstr(new LdNull());
      case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new LdTrue());
      case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new LdFalse());
      default -> cb.addInstr(new LdConst(cb.addConst(expr)));
    }

    checkTailCall();
  }

  private void compileCall(LangSXP call, boolean canInline) {
    var loc = cb.getCurrentLoc();
    cb.setCurrentLoc(new Loc(call, extractSrcRef(call, 0)));

    var args = call.args();
    switch (call.fun()) {
      case RegSymSXP fun -> {
        if (!(canInline && tryInlineCall(fun, call))) {
          // TODO: check call
          compileCallSymFun(fun, args, call);
        }
      }
      case SpecialSymSXP fun ->
          throw new IllegalStateException("Trying to call special symbol: " + fun);
      case LangSXP fun -> {
        // TODO: break / next
        compileCallExprFun(fun, args, call);
      }
    }

    cb.setCurrentLoc(loc);
  }

  private void compileCallSymFun(RegSymSXP fun, ListSXP args, LangSXP call) {
    cb.addInstr(new GetFun(cb.addConst(fun)));
    var nse = MAYBE_NSE_SYMBOLS.contains(fun.name());
    compileArgs(args, nse);
    cb.addInstr(new Call(cb.addConst(call)));
    checkTailCall();
  }

  private void compileCallExprFun(LangSXP fun, ListSXP args, LangSXP call) {
    usingCtx(ctx.nonTailContext(), () -> compile(fun));
    cb.addInstr(new CheckFun());
    compileArgs(args, false);
    cb.addInstr(new Call(cb.addConst(call)));
    checkTailCall();
  }

  @SuppressFBWarnings(
      value = "DLS_DEAD_LOCAL_STORE",
      justification = "False positive, probably because of ignored switch case")
  private void compileArgs(ListSXP args, boolean nse) {
    for (var arg : args) {
      var tag = arg.tag();
      var val = arg.value();

      switch (val) {
        case SymSXP x when x.isMissing() -> {
          cb.addInstr(new DoMissing());
          compileTag(tag);
        }
        case SymSXP x when x.isEllipsis() ->
            // TODO: if (!findLocVar("..."))
            //       notifyWrongDotsUse
            cb.addInstr(new DoDots());
        case SymSXP x -> {
          compileNormArg(x, nse);
          compileTag(tag);
        }
        case LangSXP x -> {
          compileNormArg(x, nse);
          compileTag(tag);
        }
        case PromSXP ignored -> stop("can't compile promises in code");
        case BCodeSXP ignored -> stop("can't compile byte code literals in code");
        default -> {
          compileConstArg(val);
          compileTag(tag);
        }
      }
    }
  }

  private void compileNormArg(SEXP arg, boolean nse) {
    if (!nse) {
      var compiler = fork(arg, ctx.promiseContext(), cb.getCurrentLoc());
      var bc = compiler.compile();
      arg = SEXPs.bcode(bc);
    }
    cb.addInstr(new MakeProm(cb.addConst(arg)));
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

  private void checkTailCall() {
    if (ctx.isTailCall()) {
      cb.addInstr(new Return());
    }
  }

  private boolean tryInlineCall(RegSymSXP fun, LangSXP call) {
    if (optimizationLevel == 0) {
      return false;
    }

    // it seems that there is no way to pattern match on Optional
    var binding = ctx.resolve(fun.name()).orElse(null);
    if (binding == null) {
      return false;
    }
    if (binding.first() instanceof BaseEnvSXP) {
      return tryInlineBase(fun.name(), call, true);
    } else {
      return false;
    }
  }

  private @Nullable Function<LangSXP, Boolean> getBaseInlineHandler(String name) {
    // feels better this way than to pay the price to allocate the whole, big
    // inlining table at class construction
    return switch (name) {
      case "{" -> this::inlineBlock;
      case "if" -> this::inlineCondition;
      case "function" -> this::inlineFunction;
      case "(" -> this::inlineParentheses;
      case "local" -> this::inlineLocal;
      case "return" -> this::inlineReturn;
      default -> {
        if (rsession.isBuiltin(name)) {
          yield (c) -> inlineBuiltin(c, false);
        } else if (rsession.isSpecial(name)) {
          yield this::inlineSpecial;
        } else {
          yield null;
        }
      }
    };
  }

  /**
   * Tries to inline a function from the base package.
   *
   * @param name
   * @param call
   * @return true if the function was inlined, false otherwise
   */
  private boolean tryInlineBase(String name, LangSXP call, boolean allowWithGuard) {
    boolean guarded = false;

    if (FORBIDDEN_INLINES.contains(name)) {
      return false;
    }

    if (optimizationLevel < 1) {
      return false;
    }

    if (optimizationLevel == 2) {
      if (!ALLOWED_INLINES.contains(name)) {
        if (allowWithGuard) {
          guarded = true;
        } else {
          return false;
        }
      }
    }

    var inline = getBaseInlineHandler(name);
    if (inline == null) {
      return false;
    }

    if (guarded) {
          var end = cb.makeLabel();
          usingCtx(ctx.nonTailContext(), () -> {
            // The BASEGUARD checks the validity of the inline code, i.e. if what
            // was from base at compile time hasn't changed.
            // if the inlined code is not valid the guard instruction will evaluate the call in
            // the AST interpreter and jump over the inlined code.
            cb.addInstr(new BaseGuard(cb.addConst(call), end));
            if (!inline.apply(call)) {
              // At this point the guard is useless and the following code
              // should run.
              // I guess the likelihood that something changed is slim,
              // to care about removing it.
              compileCall(call, false);
            }
          });
          cb.patchLabel(end);
          checkTailCall();
          return true;
    } else {
      return inline.apply(call);
    }
  }

  /**
   * From the R documentation:
   *
   * <p><quote> The inlining handler for `{` needs to consider that a pair of braces { and } can
   * surround zero, one, or more expressions. A set of empty braces is equivalent to the constant
   * NULL. If there is more than one expression, then all the values of all expressions other than
   * the last are ignored. These expressions are compiled in a no-value context (currently
   * equivalent to a non-tail-call context), and then code is generated to pop their values off the
   * stack. The final expression is then compiled according to the context in which the braces
   * expression occurs. </quote>
   *
   * @param call
   */
  private boolean inlineBlock(LangSXP call) {
    var n = call.args().size();
    if (n == 0) {
      compile(SEXPs.NULL);
    } else {
      var loc = cb.getCurrentLoc();
      if (n > 0) {

        usingCtx(
            ctx.nonTailContext(),
            () -> {
              for (var i = 0; i < n - 1; i++) {
                var arg = call.arg(i).value();
                // i + 1 because the block srcref's first element is the opening brace
                cb.setCurrentLoc(new Loc(arg, extractSrcRef(call, i + 1)));
                compile(arg, false);
                cb.addInstr(new Pop());
              }
            });
      }

      var last = call.arg(n - 1).value();
      cb.setCurrentLoc(new Loc(last, extractSrcRef(call, n)));
      compile(last, false);
      cb.setCurrentLoc(loc);
    }

    return true;
  }

  private boolean inlineCondition(LangSXP call) {
    var test = call.arg(0).value();
    var thenBranch = call.arg(1).value();
    var elseBranch = Optional.ofNullable(call.args().size() == 3 ? call.arg(2).value() : null);

    // TODO: constant fold

    usingCtx(ctx.nonTailContext(), () -> compile(test));

    var elseLabel = cb.makeLabel();
    cb.addInstr(new BrIfNot(cb.addConst(call), elseLabel));

    compile(thenBranch);

    if (ctx.isTailCall()) {
      cb.patchLabel(elseLabel);
      elseBranch.ifPresentOrElse(
          this::compile,
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
          this::compile,
          () -> {
            cb.addInstr(new LdNull());
          });
      cb.patchLabel(endLabel);
    }

    return true;
  }

  /**
   * From the R documentation:
   *
   * <p><quote> Compiling of function expressions is somewhat similar to compiling promises for
   * function arguments. The body of a function is compiled into a separate byte code object and
   * stored in the constant pool together with the formals. Then code is emitted for creating a
   * closure from the formals, compiled body, and the current environment. For now, only the body of
   * functions is compiled, not the default argument expressions. This should be changed in future
   * versions of the compiler. </quote>
   *
   * @param call
   */
  private boolean inlineFunction(LangSXP call) {
    // TODO: sourcerefs
    // TODO: if (mayCallBrowser(body, cntxt)) return(FALSE)

    var formals = (ListSXP) call.arg(0).value();
    var body = call.arg(1).value();
    var sref = call.args().size() > 2 ? call.arg(2).value() : SEXPs.NULL;

    var compiler = fork(body, ctx.functionContext(formals, body), cb.getCurrentLoc());
    var cbody = compiler.compile();
    var cbodysxp = SEXPs.bcode(cbody);

    // FIXME: ugly
    var cnst = SEXPs.vec(formals, cbodysxp, sref);

    cb.addInstr(new MakeClosure(cb.addConst(cnst)));

    checkTailCall();

    return true;
  }

  /**
   * From the R documentation:
   *
   * <p><quote>
   *     In R an expression of the form (expr) is interpreted as a call to the function ( with the argument
   * expr. Parentheses are used to guide the parser, and for the most part (expr) is equivalent to expr.
   * There are two exceptions:
   * <ul>
   *     <li>Since ( is a function an expression of the form <code>(...)</code> is legal whereas
   *         just <code>...</code> may not be,
   *         depending on the context. A runtime error will occur unless the <code>...</code> argument expands to
   *         exactly one non-missing argument.</li>
   *     <li>In tail position a call to ( sets the visible flag to TRUE. So at top level for example the result
   *         of an assignment expression x <- 1 would not be printed, but the result of <code>(x <- 1<code/>
   *         would be printed. It is not clear that this feature really needs to be preserved within
   *         functions — it could be made a feature of the read-eval-print loop — but for now it is a
   *         feature of the interpreter that the compiler should preserve.</li>
   * </ul>
   *
   * The inlining handler for <code>(</code> calls handles a <code>...</code> argument case or a case with
   * fewer or more than one argument as a generic BUILTIN call. If the expression is in tail position
   * then the argument is compiled in a non-tail-call context, a VISIBLE instruction is emitted to set
   * the visible flag to TRUE, and a RETURN instruction is emitted. If the expression is in non-tail
   * position, then code for the argument is generated in the current context.
   * </quote></p>
   *
   * @param call
   */
  private boolean inlineParentheses(LangSXP call) {
    if (anyDots(call.args())) {
      return inlineBuiltin(call, false);
    } else if (call.args().size() != 1) {
      // TODO: notifyWrongArgCount("(", cntxt, loc = cb$savecurloc())
      return inlineBuiltin(call, false);
    } else if (ctx.isTailCall()) {
      usingCtx(ctx.nonTailContext(), () -> compile(call.arg(0).value()));
      cb.addInstr(new Visible());
      cb.addInstr(new Return());
      return true;
    } else {
      compile(call.arg(0).value());
      return true;
    }
  }

  private boolean inlineBuiltin(LangSXP call, boolean internal) {
    if (!(call.fun() instanceof RegSymSXP fun)) {
      return false;
    }

    var args = call.args();
    if (dotsOrMissing(args)) {
      return false;
    }

    // function
    if (internal) {
      cb.addInstr(new GetIntlBuiltin(cb.addConst(fun)));
    } else {
      cb.addInstr(new GetBuiltin(cb.addConst(fun)));
    }

    // args
    usingCtx(ctx.argContext(), () -> compileBuiltinArgs(args, false));

    // call
    cb.addInstr(new CallBuiltin(cb.addConst(call)));
    checkTailCall();

    return true;
  }

  private void compileBuiltinArgs(ListSXP args, boolean missingOK) {
    for (var arg : args) {
      if (missing(arg.value())) {
        if (missingOK) {
          cb.addInstr(new DoMissing());
          compileTag(arg.tag());
        } else {
          stop("missing arguments are not allowed");
        }
      } else if (arg.value() instanceof BCodeSXP) {
        stop("cannot compile byte code literals in code");
      } else if (arg.value() instanceof PromSXP) {
        stop("cannot compile promise literals in code");
      } else {
        switch (arg.value()) {
          case RegSymSXP sym ->
            constantFold(arg.value()).ifPresentOrElse(
                    this::compileConstArg,
                    () -> {
                      compileSym(sym, missingOK);
                      cb.addInstr(new PushArg());
                    }
            );
            case LangSXP call -> {
              // FIXME: GNUR does:
              //  cmp(a, cb, ncntxt)
              //  which is weird since it says in the doc:
              //  > ... Constant folding is needed here since it doesn’t go through cmp.
              //  a possible reason why to go through cmp is to set location...
              compileCall(call, true);
              cb.addInstr(new PushArg());
            }
            default -> compileConstArg(arg.value());
          }
          compileTag(arg.tag());
        }
      }
  }

  private boolean inlineSpecial(LangSXP call) {
    cb.addInstr(new CallSpecial(cb.addConst(call)));
    checkTailCall();

    return true;
  }

  private boolean inlineLocal(LangSXP call) {
    // From the R documentation:
    //
    // > While local is currently implemented as a closure, because of its importance relative to local
    // > variable determination it is a good idea to inline it as well. The current semantics are such that
    // > the interpreter treats
    // >   local(expr)
    // > essentially the same as
    // >   (function() expr)()

    if (call.args().size() != 1) {
        return false;
    }

    var closure = SEXPs.lang(
            SEXPs.lang(SEXPs.symbol("function"), SEXPs.list(SEXPs.NULL, call.arg(0).value())), SEXPs.list());
    compile(closure);
    return true;
  }

  private boolean inlineReturn(LangSXP call) {
    // From the R documentation:
    //
    // > A call to return causes a return from the associated function call, as determined by the lexical
    // > context in which the return expression is defined. If the return is captured in a closure and is
    // > executed within a callee then this requires a longjmp. A longjmp is also needed if the return call
    // > occurs within a loop that is compiled to a separate code object to support a setjmp for break or
    // > next calls. The RETURNJMP instruction is provided for this purpose. In all other cases an ordinary
    // > RETURN instruction can be used. return calls with ..., which may be legal if ... contains only one
    // > argument, or missing arguments or more than one argument, which will produce runtime errors,
    // > are compiled as generic SPECIAL calls.
    if (dotsOrMissing(call.args()) || call.args().size() > 1) {
      return inlineSpecial(call);
    }

    var v = call.args().isEmpty() ? SEXPs.NULL : call.arg(0).value();

    usingCtx(ctx.nonTailContext(), () -> compile(v));
    cb.addInstr(ctx.needReturnJump() ?new ReturnJmp() : new Return());

    return true;
  }

  private void usingCtx(Context ctx, Runnable thunk) {
    var old = this.ctx;
    this.ctx = ctx;
    thunk.run();
    this.ctx = old;
  }

  private Optional<SEXP> constantFold(SEXP expr) {
    return switch (expr) {
      case LangSXP l -> constantFoldCall(l);
      case RegSymSXP s -> constantFoldSym(s);
      case PromSXP ignored -> stop("cannot constant fold literal promises");
      case BCodeSXP ignored -> stop("cannot constant fold literal bytecode objects");
      default -> checkConst(expr);
    };
  }

  private Optional<SEXP> checkConst(SEXP e) {
    var r =
        switch (e) {
          case NilSXP ignored -> e;
          case ListOrVectorSXP<?> xs when xs.size() <= MAX_CONST_SIZE ->
              switch (xs.type()) {
                case INT, REAL, LGL, CPLX, STR -> e;
                default -> null;
              };
          default -> null;
        };

    return Optional.ofNullable(r);
  }

  private Optional<SEXP> constantFoldSym(RegSymSXP sym) {
    var name = sym.name();
    if (ALLOWED_FOLDABLE_CONSTS.contains(name)) {
      return ctx.resolve(name)
          .filter(x -> x.first() instanceof BaseEnvSXP)
          .flatMap(x -> checkConst(x.second()));
    } else {
      return Optional.empty();
    }
  }

  private Optional<SEXP> constantFoldCall(LangSXP call) {
    //        if (!(call.fun() instanceof RegSymSXP funSym && isFoldableFun(funSym))) {
    //            return Optional.empty();
    //        }

    // fold args -- check consts
    // do.call <- need a basic interpreter
    return Optional.empty();
  }

  private boolean isFoldableFun(RegSymSXP sym) {
    var name = sym.name();
    if (ALLOWED_FOLDABLE_FUNS.contains(name)) {
      return ctx.resolve(name)
          .filter(x -> x.first() instanceof BaseEnvSXP && x.second() instanceof CloSXP)
          .isPresent();
    } else {
      return false;
    }
  }

  private <R> R stop(String message) throws CompilerException {
    return stop(message, cb.getCurrentLoc());
  }

  private <R> R stop(String message, Loc loc) throws CompilerException {
    throw new CompilerException(message, loc);
  }

  private static boolean anyDots(ListSXP l) {
    return l.values().stream()
        .anyMatch(x -> !missing(x) && x instanceof SymSXP s && s.isEllipsis());
  }

  private static boolean dotsOrMissing(ListSXP l) {
    return l.values().stream().anyMatch(x -> missing(x) || x instanceof SymSXP s && s.isEllipsis());
  }

  private static boolean missing(SEXP x) {
    // FIXME: this is a great oversimplification from the do_missing in R
    if (x instanceof SymSXP s) {
      return s.isMissing();
    } else {
      return false;
    }
  }

  private static @Nullable IntSXP extractSrcRef(SEXP expr, int idx) {
    var attrs = expr.attributes();
    if (attrs == null) {
      return null;
    }

    var srcref = attrs.get("srcref");
    if (srcref == null) {
      return null;
    }

    if (srcref instanceof IntSXP i && i.size() >= 6) {
      return i;
    } else if (srcref instanceof VecSXP v
        && v.size() >= idx
        && v.get(idx) instanceof IntSXP i
        && i.size() >= 6) {
      return i;
    } else {
      return null;
    }
  }
}
