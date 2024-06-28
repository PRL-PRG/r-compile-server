package org.prlprg.bc;

import static org.prlprg.sexp.SEXPType.BCODE;
import static org.prlprg.sexp.SEXPType.CPLX;
import static org.prlprg.sexp.SEXPType.INT;
import static org.prlprg.sexp.SEXPType.LANG;
import static org.prlprg.sexp.SEXPType.LGL;
import static org.prlprg.sexp.SEXPType.PROM;
import static org.prlprg.sexp.SEXPType.REAL;
import static org.prlprg.sexp.SEXPType.STR;
import static org.prlprg.sexp.SEXPType.SYM;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import java.util.Set;
import java.util.function.BiFunction;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Supplier;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import org.prlprg.RSession;
import org.prlprg.bc.BcInstr.Add;
import org.prlprg.bc.BcInstr.And;
import org.prlprg.bc.BcInstr.And1st;
import org.prlprg.bc.BcInstr.And2nd;
import org.prlprg.bc.BcInstr.BaseGuard;
import org.prlprg.bc.BcInstr.BrIfNot;
import org.prlprg.bc.BcInstr.Call;
import org.prlprg.bc.BcInstr.CallBuiltin;
import org.prlprg.bc.BcInstr.CallSpecial;
import org.prlprg.bc.BcInstr.CheckFun;
import org.prlprg.bc.BcInstr.Colon;
import org.prlprg.bc.BcInstr.DdVal;
import org.prlprg.bc.BcInstr.DdValMissOk;
import org.prlprg.bc.BcInstr.DecLnkStk;
import org.prlprg.bc.BcInstr.DfltSubassign;
import org.prlprg.bc.BcInstr.DfltSubassign2;
import org.prlprg.bc.BcInstr.DfltSubset;
import org.prlprg.bc.BcInstr.DfltSubset2;
import org.prlprg.bc.BcInstr.Div;
import org.prlprg.bc.BcInstr.DoDots;
import org.prlprg.bc.BcInstr.DoMissing;
import org.prlprg.bc.BcInstr.Dollar;
import org.prlprg.bc.BcInstr.DollarGets;
import org.prlprg.bc.BcInstr.DotCall;
import org.prlprg.bc.BcInstr.DotsErr;
import org.prlprg.bc.BcInstr.Dup2nd;
import org.prlprg.bc.BcInstr.EndAssign;
import org.prlprg.bc.BcInstr.EndAssign2;
import org.prlprg.bc.BcInstr.EndFor;
import org.prlprg.bc.BcInstr.EndLoopCntxt;
import org.prlprg.bc.BcInstr.Eq;
import org.prlprg.bc.BcInstr.Exp;
import org.prlprg.bc.BcInstr.Expt;
import org.prlprg.bc.BcInstr.Ge;
import org.prlprg.bc.BcInstr.GetBuiltin;
import org.prlprg.bc.BcInstr.GetFun;
import org.prlprg.bc.BcInstr.GetIntlBuiltin;
import org.prlprg.bc.BcInstr.GetVar;
import org.prlprg.bc.BcInstr.GetVarMissOk;
import org.prlprg.bc.BcInstr.GetterCall;
import org.prlprg.bc.BcInstr.Goto;
import org.prlprg.bc.BcInstr.Gt;
import org.prlprg.bc.BcInstr.IncLnkStk;
import org.prlprg.bc.BcInstr.Invisible;
import org.prlprg.bc.BcInstr.IsCharacter;
import org.prlprg.bc.BcInstr.IsComplex;
import org.prlprg.bc.BcInstr.IsDouble;
import org.prlprg.bc.BcInstr.IsInteger;
import org.prlprg.bc.BcInstr.IsLogical;
import org.prlprg.bc.BcInstr.IsNull;
import org.prlprg.bc.BcInstr.IsObject;
import org.prlprg.bc.BcInstr.IsSymbol;
import org.prlprg.bc.BcInstr.LdConst;
import org.prlprg.bc.BcInstr.LdFalse;
import org.prlprg.bc.BcInstr.LdNull;
import org.prlprg.bc.BcInstr.LdTrue;
import org.prlprg.bc.BcInstr.Le;
import org.prlprg.bc.BcInstr.Log;
import org.prlprg.bc.BcInstr.LogBase;
import org.prlprg.bc.BcInstr.Lt;
import org.prlprg.bc.BcInstr.MakeClosure;
import org.prlprg.bc.BcInstr.MakeProm;
import org.prlprg.bc.BcInstr.MatSubassign;
import org.prlprg.bc.BcInstr.MatSubassign2;
import org.prlprg.bc.BcInstr.MatSubset;
import org.prlprg.bc.BcInstr.MatSubset2;
import org.prlprg.bc.BcInstr.Math1;
import org.prlprg.bc.BcInstr.Mul;
import org.prlprg.bc.BcInstr.Ne;
import org.prlprg.bc.BcInstr.Not;
import org.prlprg.bc.BcInstr.Or;
import org.prlprg.bc.BcInstr.Or1st;
import org.prlprg.bc.BcInstr.Or2nd;
import org.prlprg.bc.BcInstr.Pop;
import org.prlprg.bc.BcInstr.PushArg;
import org.prlprg.bc.BcInstr.PushConstArg;
import org.prlprg.bc.BcInstr.PushFalseArg;
import org.prlprg.bc.BcInstr.PushNullArg;
import org.prlprg.bc.BcInstr.PushTrueArg;
import org.prlprg.bc.BcInstr.Return;
import org.prlprg.bc.BcInstr.ReturnJmp;
import org.prlprg.bc.BcInstr.SeqAlong;
import org.prlprg.bc.BcInstr.SeqLen;
import org.prlprg.bc.BcInstr.SetTag;
import org.prlprg.bc.BcInstr.SetVar;
import org.prlprg.bc.BcInstr.SetVar2;
import org.prlprg.bc.BcInstr.SetterCall;
import org.prlprg.bc.BcInstr.SpecialSwap;
import org.prlprg.bc.BcInstr.Sqrt;
import org.prlprg.bc.BcInstr.StartAssign;
import org.prlprg.bc.BcInstr.StartAssign2;
import org.prlprg.bc.BcInstr.StartFor;
import org.prlprg.bc.BcInstr.StartLoopCntxt;
import org.prlprg.bc.BcInstr.StartSubassign;
import org.prlprg.bc.BcInstr.StartSubassign2;
import org.prlprg.bc.BcInstr.StartSubassign2N;
import org.prlprg.bc.BcInstr.StartSubassignN;
import org.prlprg.bc.BcInstr.StartSubset;
import org.prlprg.bc.BcInstr.StartSubset2;
import org.prlprg.bc.BcInstr.StartSubset2N;
import org.prlprg.bc.BcInstr.StartSubsetN;
import org.prlprg.bc.BcInstr.StepFor;
import org.prlprg.bc.BcInstr.Sub;
import org.prlprg.bc.BcInstr.Subassign2N;
import org.prlprg.bc.BcInstr.SubassignN;
import org.prlprg.bc.BcInstr.Subset2N;
import org.prlprg.bc.BcInstr.SubsetN;
import org.prlprg.bc.BcInstr.Switch;
import org.prlprg.bc.BcInstr.UMinus;
import org.prlprg.bc.BcInstr.UPlus;
import org.prlprg.bc.BcInstr.VecSubassign;
import org.prlprg.bc.BcInstr.VecSubassign2;
import org.prlprg.bc.BcInstr.VecSubset;
import org.prlprg.bc.BcInstr.VecSubset2;
import org.prlprg.bc.BcInstr.Visible;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NamespaceEnvSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SpecialSymSXP;
import org.prlprg.sexp.StrOrRegSymSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;
import org.prlprg.sexp.VectorSXP;

/**
 * The R bytecode compiler that aims to be byte-to-byte compatible with GNU-R's bytecode compiler.
 *
 * <p>The compiler follows the implementation of the GNU-R bytecode compiler as described in the R
 * compiler package documentation [1]. It uses the Method Object pattern, i.e., in the constructor
 * it is set what shall be compiled and the {@link #compile()} method is called to perform the
 * compilation.
 *
 * <p>In the comments below the {@code >> } indicates comments takes directly form [1].
 *
 * <p>[1] A Byte Code Compiler for R by Luke Tierney, University of Iowa, accessed on August 23,
 * 2023 from <a href="https://homepage.cs.uiowa.edu/~luke/R/compiler/compiler.pdf">
 * https://homepage.cs.uiowa.edu/~luke/R/compiler/compiler.pdf</a>
 */
public class Compiler {
  /** The default optimization level in GNU-R's {@code compiler::cmpfun} and here. */
  public static final int DEFAULT_OPTIMIZATION_LEVEL = 2;

  /** SEXP types that can participate in constan folding. */
  private static final Set<SEXPType> ALLOWED_FOLDABLE_MODES = Set.of(LGL, INT, REAL, CPLX, STR);

  private static final Set<String> MAYBE_NSE_SYMBOLS = Set.of("bquote");

  /**
   * List of functions that gets special treatment when considering inlining (cf. {@link
   * #getInlineInfo(String, boolean)}).
   */
  private static final Set<String> LANGUAGE_FUNS =
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

  /**
   * The list of one-parameter functions evaluated by the math1 function in arithmetic.c
   *
   * <p>NOTE that the order is important (and has to be the same as in R)! The MATH1_OP takes an
   * index into an array of math functions.
   */
  private static final List<String> MATH1_FUNS =
      List.of(
          "floor",
          "ceiling",
          "sign",
          "expm1",
          "log1p",
          "cos",
          "sin",
          "tan",
          "acos",
          "asin",
          "atan",
          "cosh",
          "sinh",
          "tanh",
          "acosh",
          "asinh",
          "atanh",
          "lgamma",
          "gamma",
          "digamma",
          "trigamma",
          "cospi",
          "sinpi",
          "tanpi");

  private static final Set<String> SAFE_BASE_INTERNALS =
      Set.of(
          "atan2",
          "besselY",
          "beta",
          "choose",
          "drop",
          "inherits",
          "is.vector",
          "lbeta",
          "lchoose",
          "nchar",
          "polyroot",
          "typeof",
          "vector",
          "which.max",
          "which.min",
          "is.loaded",
          "identical",
          "match",
          "rep.int",
          "rep_len");

  /** Black list of functions that should not be inlined. */
  private static final Set<String> FORBIDDEN_INLINES = Set.of("standardGeneric");

  /** should match DOTCALL_MAX in eval.c */
  private static final int DOTCALL_MAX = 16;

  /** R limit for the max vector size to participate in constant folding */
  private static final int MAX_CONST_SIZE = 10;

  /**
   * The set of constants that can be folded.
   *
   * <p>Note (I also did not know):
   *
   * <pre><code>
   * > x <- function() TRUE
   * > .Internal(inspect(body(x)))
   * &#064;5c0d69684e48  10 LGLSXP g0c1 [REF(2)] (len=1, tl=0) 1
   * > x <- function() T
   * > .Internal(inspect(body(x)))
   * &#064;5c0d6769c910  01 SYMSXP g0c0 [MARK,REF(4),LCK,gp=0x4000] "T" (has value)
   * </code></pre>
   */
  private static final Set<String> ALLOWED_FOLDABLE_CONSTS = Set.of("pi", "T", "F");

  /** The set of functions that can be folded. */
  private static final Set<String> ALLOWED_FOLDABLE_FUNS =
      Set.of("c", "+", "*", "/", ":", "-", "^", "(", "log2", "log", "sqrt", "rep", "seq.int");

  /**
   * The set of functions that if encounted in loop body allow us to stop the search whether loop
   * context can be avoided (cf. {@link #canSkipLoopContext(SEXP, boolean)})
   */
  private static final Set<String> LOOP_STOP_FUNS = Set.of("function", "for", "while", "repeat");

  /**
   * The set of functions that has to be handled recursively in the search for loop context (cf.
   * {@link #canSkipLoopContext(SEXP, boolean)})
   */
  private static final Set<String> LOOP_TOP_FUNS = Set.of("(", "{", "if");

  /**
   * The set of functions that indicates the need for loop context (cf. {@link
   * #canSkipLoopContext(SEXP, boolean)})
   */
  private static final Set<String> LOOP_BREAK_FUNS = Set.of("break", "next");

  /**
   * The set of functions that indicates the need for loop context (cf. {@link
   * #canSkipLoopContext(SEXP, boolean)})
   */
  private static final Set<String> EVAL_FUNS = Set.of("eval", "evalq", "source");

  /** The target for the byte code of this compiler. */
  private final Bc.Builder cb = new Bc.Builder();

  /** Corresponding R session used to lookup symbols. */
  private final RSession rsession;

  /** The initial expression to compile. */
  private final SEXP expr;

  /** The current compilation context. */
  private Context ctx;

  /**
   * The optimization level:
   *
   * <table>
   *     <tr>
   *         <td>Level</td><td>Description (from compiler.R)</td>
   *     </tr>
   *     <tr>
   *         <td>0</td>
   *         <td>No inlining</td>
   *     </tr>
   *     <tr>
   *         <td>1</td>
   *         <td>Functions in the base packages found through a namespace that are not
   *             shadowed by function arguments or visible local assignments may be inlined</td>
   *     </tr>
   *     <tr>
   *         <td>2</td>
   *         <td>In addition to the inlining permitted by Level 1, functions that are
   *             syntactically special or are considered core language functions and are found via the global
   *             environment at compile time may be inlined. Other functions in the base packages found via the
   *             global environment may be inlined with a guard that ensures at runtime that the inlined function
   *             has not been masked; if it has, then the call in handled by the AST interpreter.</td>
   *     </tr>
   *     <tr>
   *         <td>3</td>
   *         <td>Any function in the base packages found via the global environment may be inlined.</td>
   *     </tr>
   * </table>
   */
  private int optimizationLevel = DEFAULT_OPTIMIZATION_LEVEL;

  /**
   * Creates a compiler for the given expression, context, session, and location.
   *
   * @param expr the expression to be compiled
   * @param ctx the context used for the compilation
   * @param rsession the session used for symbol resolution
   * @param loc the source code location of the expression
   */
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

  /**
   * Creates a compiler for the given function.
   *
   * @param fun the function to be compiled
   * @param rsession the session used for symbol resolution
   */
  public Compiler(CloSXP fun, RSession rsession) {
    this(fun.bodyAST(), Context.functionContext(fun), rsession, functionLoc(fun));
  }

  /**
   * Creates a clone of the current state of the compiler except for the expression and context.
   *
   * @param expr the new expression to compile
   * @param ctx the new context for the compilation
   * @param loc the source code location of the expression
   */
  private Compiler fork(SEXP expr, Context ctx, Loc loc) {
    var compiler = new Compiler(expr, ctx, rsession, loc);
    compiler.setOptimizationLevel(optimizationLevel);
    return compiler;
  }

  public void setOptimizationLevel(int level) {
    this.optimizationLevel = level;
  }

  /**
   * Executes the compilation and returns the compiled code if the expression does not contain any
   * calls to the browser function.
   *
   * @return the compiled code or empty if the expression contains a call to the browser function
   */
  public Optional<Bc> compile() {
    if (mayCallBrowser(expr)) {
      return Optional.empty();
    }

    return Optional.of(genCode());
  }

  private Bc genCode() {
    cb.addConst(expr);
    compile(expr, false, false);
    return cb.build();
  }

  private void compile(SEXP expr) {
    compile(expr, false, true);
  }

  /**
   * Compiles an expression. This is the entry point for the recursive compilation process.
   *
   * @param expr the expression to compile
   * @param missingOK passing this flag to {@code compileSym}
   * @param setLoc whether to set the current location from {@code expr}
   */
  private void compile(SEXP expr, boolean missingOK, boolean setLoc) {
    Loc loc = null;
    if (setLoc) {
      loc = cb.getCurrentLoc();
      cb.setCurrentLoc(new Loc(expr, extractSrcRef(expr, 0).orElse(null)));
    }

    constantFold(expr).ifPresentOrElse(this::compileConst, () -> compileNonConst(expr, missingOK));

    if (loc != null) {
      cb.setCurrentLoc(loc);
    }
  }

  private void compileConst(SEXP val) {
    switch (val) {
      case NilSXP _ -> cb.addInstr(new LdNull());
      case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new LdTrue());
      case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new LdFalse());
      default -> cb.addInstr(new LdConst(cb.addConst(val)));
    }

    tailCallReturn();
  }

  private void compileNonConst(SEXP expr, boolean missingOK) {
    switch (expr) {
      case LangSXP e -> compileCall(e, true);
      case RegSymSXP e -> compileSym(e, missingOK);
      case SpecialSymSXP e -> stop("unhandled special symbol: " + e);
      case PromSXP _ -> stop("cannot compile promise literals in code");
      case BCodeSXP _ -> stop("cannot compile byte code literals in code");
      default -> compileConst(expr);
    }
  }

  /**
   * Compiles a symbol.
   *
   * @param sym the symbol to compile
   * @param missingOK specifies whether to use DDLVAL_MISSOK or DDLVAL instruction
   */
  private void compileSym(RegSymSXP sym, boolean missingOK) {
    if (sym.isEllipsis()) {
      // TODO: notifyWrongDotsUse
      cb.addInstr(new DotsErr());
    } else if (sym.isDdSym()) {
      // TODO: notifyWrongDotsUse
      var idx = cb.addConst(sym);
      cb.addInstr(missingOK ? new DdValMissOk(idx) : new DdVal(idx));
      tailCallReturn();
    } else {
      // TODO: notifyUndefVar
      var idx = cb.addConst(sym);
      cb.addInstr(missingOK ? new GetVarMissOk(idx) : new GetVar(idx));
      tailCallReturn();
    }
  }

  private void compileCall(LangSXP call, boolean canInline) {
    var loc = cb.getCurrentLoc();
    cb.setCurrentLoc(new Loc(call, extractSrcRef(call, 0).orElse(null)));

    var args = call.args();
    switch (call.fun()) {
      case RegSymSXP fun -> {
        if (!(canInline && tryInlineCall(fun, call))) {
          // TODO: notifyBadCall
          compileCallSymFun(call, fun, args);
        }
      }
      case SpecialSymSXP fun ->
          throw new IllegalStateException("Trying to call special symbol: " + fun);
      case LangSXP fun ->
          fun.funName()
              .filter(LOOP_BREAK_FUNS::contains)
              .ifPresentOrElse(
                  ignored ->
                      // >> ## **** this hack is needed for now because of the way the
                      // >> ## **** parser handles break() and next() calls
                      // >> Consequently, the RDSReader returns a LangSXP(LangSXP(break/next, NULL),
                      // NULL) for
                      // >> break() and next() calls
                      compile(fun),
                  () -> compileCallExprFun(call, fun, args));
    }

    cb.setCurrentLoc(loc);
  }

  private void compileCallSymFun(LangSXP call, RegSymSXP fun, ListSXP args) {
    cb.addInstr(new GetFun(cb.addConst(fun)));
    var nse = MAYBE_NSE_SYMBOLS.contains(fun.name());
    compileArgs(args, nse);
    cb.addInstr(new Call(cb.addConst(call)));
    tailCallReturn();
  }

  private void compileCallExprFun(LangSXP call, LangSXP fun, ListSXP args) {
    usingCtx(ctx.nonTailContext(), () -> compile(fun));
    cb.addInstr(new CheckFun());
    compileArgs(args, false);
    cb.addInstr(new Call(cb.addConst(call)));
    tailCallReturn();
  }

  /**
   * Compiles the arguments of a function call.
   *
   * @param args the arguments to compile
   * @param nse whether to compile the arguments in non-standard evaluation mode
   */
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
            // TODO: notifyWrongDotsUse
            cb.addInstr(new DoDots());
        case SymSXP x -> {
          compileNormArg(x, nse);
          compileTag(tag);
        }
        case LangSXP x -> {
          compileNormArg(x, nse);
          compileTag(tag);
        }
        case PromSXP _ -> stop("can't compile promises in code");
        case BCodeSXP _ -> stop("can't compile byte code literals in code");
        default -> {
          compileConstArg(val);
          compileTag(tag);
        }
      }
    }
  }

  private void compileNormArg(SEXP arg, boolean nse) {
    ConstPool.Idx<SEXP> idx;

    if (nse) {
      idx = cb.addConst(arg);
    } else {
      var compiler = fork(arg, ctx.promiseContext(), cb.getCurrentLoc());
      idx = cb.addConst(SEXPs.bcode(compiler.genCode()));
    }

    cb.addInstr(new MakeProm(idx));
  }

  private void compileConstArg(SEXP arg) {
    switch (arg) {
      case NilSXP _ -> cb.addInstr(new PushNullArg());
      case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new PushTrueArg());
      case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new PushFalseArg());
      default -> cb.addInstr(new PushConstArg(cb.addConst(arg)));
    }
  }

  private void compileTag(@Nullable String tag) {
    if (tag != null && !tag.isEmpty()) {
      cb.addInstr(new SetTag(cb.addConst(SEXPs.symbol(tag))));
    }
  }

  /** A helper to add a return when the context is in tail position. */
  @SuppressWarnings("UnusedReturnValue")
  private boolean tailCallReturn() {
    if (ctx.isTailCall()) {
      cb.addInstr(new Return());
      return true;
    } else {
      return false;
    }
  }

  /** A helper to add an invisible return when the context is in tail position. */
  private boolean tailCallInvisibleReturn() {
    if (ctx.isTailCall()) {
      cb.addInstr(new Invisible());
      cb.addInstr(new Return());
      return true;
    } else {
      return false;
    }
  }

  /**
   * The entry point for the inlining process. It will either inline the given call or return false.
   *
   * @param fun the function to inline
   * @param call the entire call
   * @return true if the function was inlined, false otherwise
   */
  private boolean tryInlineCall(RegSymSXP fun, LangSXP call) {
    if (optimizationLevel == 0) {
      return false;
    }

    return getInlineInfo(fun.name(), true)
        .filter(info -> info.env().isBase())
        .map(info -> tryInlineBase(call, info))
        .orElse(false);
  }

  private Optional<Function<LangSXP, Boolean>> getBaseInlineHandler(String name) {
    // feels better this way than to pay the price to allocate the whole, big
    // inlining table at class construction
    Function<LangSXP, Boolean> fun =
        switch (name) {
          case "{" -> this::inlineBlock;
          case "if" -> this::inlineCondition;
          case "function" -> this::inlineFunction;
          case "(" -> this::inlineParentheses;
          case "local" -> this::inlineLocal;
          case "return" -> this::inlineReturn;
          case ".Internal" -> this::inlineDotInternalCall;
          case "&&" -> (c) -> inlineLogicalAndOr(c, true);
          case "||" -> (c) -> inlineLogicalAndOr(c, false);
          case "repeat" -> this::inlineRepeat;
          case "break" -> (c) -> inlineBreakNext(c, true);
          case "next" -> (c) -> inlineBreakNext(c, false);
          case "while" -> this::inlineWhile;
          case "for" -> this::inlineFor;
          case "+" -> (c) -> inlineAddSub(c, true);
          case "-" -> (c) -> inlineAddSub(c, false);
          case "*" -> (c) -> inlinePrim2(c, Mul::new);
          case "/" -> (c) -> inlinePrim2(c, Div::new);
          case "^" -> (c) -> inlinePrim2(c, Expt::new);
          case "exp" -> (c) -> inlinePrim1(c, Exp::new);
          case "sqrt" -> (c) -> inlinePrim1(c, Sqrt::new);
          case "log" -> this::inlineLog;
          case "==" -> (c) -> inlinePrim2(c, Eq::new);
          case "!=" -> (c) -> inlinePrim2(c, Ne::new);
          case "<" -> (c) -> inlinePrim2(c, Lt::new);
          case "<=" -> (c) -> inlinePrim2(c, Le::new);
          case ">" -> (c) -> inlinePrim2(c, Gt::new);
          case ">=" -> (c) -> inlinePrim2(c, Ge::new);
          case "&" -> (c) -> inlinePrim2(c, And::new);
          case "|" -> (c) -> inlinePrim2(c, Or::new);
          case "!" -> (c) -> inlinePrim1(c, Not::new);
          case "$" -> this::inlineDollar;
          case "is.character" -> (c) -> inlineIsXyz(c, IsCharacter::new);
          case "is.complex" -> (c) -> inlineIsXyz(c, IsComplex::new);
          case "is.double" -> (c) -> inlineIsXyz(c, IsDouble::new);
          case "is.integer" -> (c) -> inlineIsXyz(c, IsInteger::new);
          case "is.logical" -> (c) -> inlineIsXyz(c, IsLogical::new);
          case "is.name" -> (c) -> inlineIsXyz(c, IsSymbol::new);
          case "is.null" -> (c) -> inlineIsXyz(c, IsNull::new);
          case "is.object" -> (c) -> inlineIsXyz(c, IsObject::new);
          case "is.symbol" -> (c) -> inlineIsXyz(c, IsSymbol::new);
          case ".Call" -> this::inlineDotCall;
          case ":" -> (c) -> inlinePrim2(c, Colon::new);
          case "seq_along" -> (c) -> inlinePrim1(c, SeqAlong::new);
          case "seq_len" -> (c) -> inlinePrim1(c, SeqLen::new);
          case "::", ":::" -> this::inlineMultiColon;
          case "with", "require" -> this::compileSuppressingUndefined;
          case "switch" -> this::inlineSwitch;
          case "<-", "=", "<<-" -> this::inlineAssign;
          case "[" -> (call) -> inlineSubset(false, call);
          case "[[" -> (call) -> inlineSubset(true, call);
          case String s when MATH1_FUNS.contains(s) -> (c) -> inlineMath1(c, MATH1_FUNS.indexOf(s));
          case String s when rsession.isBuiltin(s) -> (c) -> inlineBuiltin(c, false);
          case String s when rsession.isSpecial(s) -> this::inlineSpecial;
          case String s when SAFE_BASE_INTERNALS.contains(s) -> this::inlineSimpleInternal;
          default -> null;
        };

    return Optional.ofNullable(fun);
  }

  private Optional<BiFunction<FlattenLHS, LangSXP, Boolean>> getSetterInlineHandler(
      InlineInfo info) {
    if (!(info.env().isBase())) {
      return Optional.empty();
    }

    BiFunction<FlattenLHS, LangSXP, Boolean> fun =
        switch (info.name) {
          case "$<-" -> this::inlineDollarAssign;
          case "[<-" -> (flhs, call) -> inlineSquareBracketAssign(false, flhs, call);
          case "[[<-" -> (flhs, call) -> inlineSquareBracketAssign(true, flhs, call);
          case "@<-" -> this::inlineSlotAssign;
          default -> null;
        };

    return Optional.ofNullable(fun);
  }

  private Optional<Function<LangSXP, Boolean>> getGetterInlineHandler(InlineInfo info) {
    if (!info.env().isBase()) {
      return Optional.empty();
    }

    Function<LangSXP, Boolean> fun =
        switch (info.name) {
          case "$" -> this::inlineDollarSubset;
          case "[" -> (call) -> inlineSquareBracketSubSet(false, call);
          case "[[" -> (call) -> inlineSquareBracketSubSet(true, call);
          default -> null;
        };

    return Optional.ofNullable(fun);
  }

  /**
   * Returns inline information for the given function name or empty if the function is not
   * inlinable.
   *
   * <p>It tries to resolve the function name in the current context {@link #ctx} and then based on
   * the given rules from R compiler figure out whether the function should be inlinable or not.
   *
   * @param name the name of the function to inline
   * @param guardOK whether to allow inlining with a guard
   * @return the inline information or empty if the function is not inlinable
   */
  private Optional<InlineInfo> getInlineInfo(String name, boolean guardOK) {
    if (FORBIDDEN_INLINES.contains(name) || optimizationLevel < 1) {
      return Optional.empty();
    }

    // FIXME: this considers everything else "global" which is not true, but cannot be
    //  fixed until we have a proper environment chain supported in the Rsession
    return ctx.resolve(name)
        .map(
            res -> {
              if (res.first() instanceof NamespaceEnvSXP) {
                // if is in a namespace we do not have to worry about
                // shadowing
                return new InlineInfo(name, res.first(), res.second(), false);
              } else if (optimizationLevel >= 3
                  || (optimizationLevel == 2 && LANGUAGE_FUNS.contains(name))) {
                return new InlineInfo(name, res.first(), res.second(), false);
              } else if (guardOK && res.first().isBase()) {
                // this is the case when the function comes from baseenv()
                // therefore it could be shadowed by some other function
                // and thus needs to be guarded
                return new InlineInfo(name, res.first(), res.second(), true);
              } else {
                return null;
              }
            });
  }

  /**
   * Tries to inline a function from the base package.
   *
   * @param call the call to inline
   * @param info the inline information
   * @return true if the function was inlined, false otherwise
   */
  private boolean tryInlineBase(LangSXP call, InlineInfo info) {
    assert (info.env().isBase());

    return getBaseInlineHandler(info.name)
        .map(
            inline -> {
              if (info.guard()) {
                var end = cb.makeLabel();

                usingCtx(
                    ctx.nonTailContext(),
                    () -> {
                      // >> The BASEGUARD checks the validity of the inline code, i.e. if what
                      // >> was from base at compile time hasn't changed. If the inlined code is
                      // >> not valid the guard instruction will evaluate the call in the AST
                      // >> interpreter and jump over the inlined code.
                      cb.addInstr(new BaseGuard(cb.addConst(call), end));
                      if (!inline.apply(call)) {
                        // if the inlining failed, we need to compile the call
                        compileCall(call, false);
                      }
                    });
                cb.patchLabel(end);
                tailCallReturn();
                return true;
              } else {
                return inline.apply(call);
              }
            })
        .orElse(false);
  }

  private boolean trySetterInline(RegSymSXP funSym, FlattenLHS flhs, LangSXP call) {
    return getInlineInfo(funSym.name(), false)
        .flatMap(this::getSetterInlineHandler)
        .map(handler -> handler.apply(flhs, call))
        .orElse(false);
  }

  private boolean tryGetterInline(RegSymSXP funSym, LangSXP call) {
    return getInlineInfo(funSym.name(), false)
        .flatMap(this::getGetterInlineHandler)
        .map(handler -> handler.apply(call))
        .orElse(false);
  }

  //    >> The inlining handler for `{` needs to consider that a pair of braces { and } can
  //    >> surround zero, one, or more expressions. A set of empty braces is equivalent to the
  // constant
  //    >> NULL. If there is more than one expression, then all the values of all expressions other
  // than
  //    >> the last are ignored. These expressions are compiled in a no-value context (currently
  //    >> equivalent to a non-tail-call context), and then code is generated to pop their values
  // off the
  //    >> stack. The final expression is then compiled according to the context in which the braces
  //    >> expression occurs.
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
                var arg = call.arg(i);
                // i + 1 because the block srcref's first element is the opening brace
                cb.setCurrentLoc(new Loc(arg, extractSrcRef(call, i + 1).orElse(null)));
                compile(arg, false, false);
                cb.addInstr(new Pop());
              }
            });
      }

      var last = call.arg(n - 1);
      cb.setCurrentLoc(new Loc(last, extractSrcRef(call, n).orElse(null)));
      compile(last, false, false);
      cb.setCurrentLoc(loc);
    }

    return true;
  }

  // all inline functions have the same signature
  // (it is then easier to reference the method in the getInlineHandler)
  @SuppressWarnings("SameReturnValue")
  private boolean inlineCondition(LangSXP call) {
    var test = call.arg(0);
    var thenBranch = call.arg(1);
    var elseBranch = Optional.ofNullable(call.args().size() == 3 ? call.arg(2) : null);

    var ct = constantFold(test).orElse(null);

    if (ct instanceof LglSXP lgl && lgl.isScalar()) {
      if (lgl == SEXPs.TRUE) {
        compile(thenBranch);
      } else if (elseBranch.isPresent()) {
        compile(elseBranch.get());
      } else if (ctx.isTailCall()) {
        cb.addInstr(new LdNull());
        tailCallInvisibleReturn();
      } else {
        cb.addInstr(new LdNull());
      }
      return true;
    }

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
            tailCallInvisibleReturn();
          });
    } else {
      var endLabel = cb.makeLabel();
      cb.addInstr(new Goto(endLabel));
      cb.patchLabel(elseLabel);
      elseBranch.ifPresentOrElse(this::compile, () -> cb.addInstr(new LdNull()));
      cb.patchLabel(endLabel);
    }

    return true;
  }

  private boolean inlineFunction(LangSXP call) {
    var formals = (ListSXP) call.arg(0);
    var body = call.arg(1);
    if (mayCallBrowser(body)) {
      return false;
    }
    var sref = call.args().size() > 2 ? call.arg(2) : SEXPs.NULL;

    var compiler = fork(body, ctx.functionContext(formals, body), cb.getCurrentLoc());
    var cbody = compiler.compile().<SEXP>map(SEXPs::bcode).orElse(body);

    // this is not CLOSXP, but vector of these elements as
    // required by the bytecode op
    var cfun = SEXPs.vec(formals, cbody, sref);

    cb.addInstr(new MakeClosure(cb.addConst(cfun)));

    tailCallReturn();

    return true;
  }

  private boolean inlineParentheses(LangSXP call) {
    if (anyDots(call.args())) {
      return inlineBuiltin(call, false);
    } else if (call.args().size() != 1) {
      // TODO: notifyWrongArgCount
      return inlineBuiltin(call, false);
    } else if (ctx.isTailCall()) {
      usingCtx(ctx.nonTailContext(), () -> compile(call.arg(0)));
      cb.addInstr(new Visible());
      cb.addInstr(new Return());
      return true;
    } else {
      compile(call.arg(0));
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
    tailCallReturn();

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
              constantFold(arg.value())
                  .ifPresentOrElse(
                      this::compileConstArg,
                      () -> {
                        usingCtx(ctx.argContext(), () -> compileSym(sym, missingOK));
                        cb.addInstr(new PushArg());
                      });
          case LangSXP call -> {
            usingCtx(ctx.argContext(), () -> compile(call));
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
    tailCallReturn();

    return true;
  }

  private boolean inlineLocal(LangSXP call) {
    // >> the interpreter treats
    // >> local(expr)
    // >> essentially the same as
    // >> (function() expr)()

    if (call.args().size() != 1) {
      return false;
    }

    var closure =
        SEXPs.lang(
            SEXPs.lang(SEXPs.symbol("function"), SEXPs.list(SEXPs.NULL, call.arg(0), SEXPs.NULL)),
            SEXPs.list());
    compile(closure);
    return true;
  }

  private boolean inlineReturn(LangSXP call) {
    ListSXP args = call.args();
    if (dotsOrMissing(args) || args.size() > 1) {
      return inlineSpecial(call);
    }

    var v = args.isEmpty() ? SEXPs.NULL : args.value(0);

    usingCtx(ctx.nonTailContext(), () -> compile(v));
    cb.addInstr(ctx.isReturnJump() ? new ReturnJmp() : new Return());

    return true;
  }

  private boolean inlineDotInternalCall(LangSXP call) {
    if (!(call.arg(0) instanceof LangSXP subCall)) {
      return false;
    }

    if (!(subCall.fun() instanceof RegSymSXP sym)) {
      return false;
    }

    if (rsession.isBuiltinInternal(sym.name())) {
      return inlineBuiltin(subCall, true);
    } else {
      return inlineSpecial(call);
    }
  }

  private boolean isSimpleFormals(CloSXP def) {
    var formals = def.parameters();
    var names = formals.names();

    if (names.contains("...")) {
      return false;
    }

    for (var x : formals.values()) {
      if (!missing(x) && x.typeOneOf(SYM, LANG, PROM, BCODE)) {
        return false;
      }
    }

    return true;
  }

  private boolean hasSimpleArgs(LangSXP call, List<String> formals) {
    for (var arg : call.args().values()) {
      if (missing(arg)) {
        return false;
      } else if (arg instanceof RegSymSXP sym) {
        if (!formals.contains(sym.name())) {
          return false;
        }
      } else if (arg.typeOneOf(LANG, PROM, BCODE)) {
        return false;
      }
    }

    return true;
  }

  private Optional<LangSXP> extractSimpleInternal(CloSXP def) {
    if (!isSimpleFormals(def)) {
      return Optional.empty();
    }

    var b = def.bodyAST();

    if (b instanceof LangSXP lb && lb.funNameIs("{") && lb.args().size() == 1) {
      // unwrap the { call if it has just one argument
      b = lb.arg(0);
    }

    return b.asLang()
        .filter(call -> call.funNameIs(".Internal"))
        .flatMap(call -> call.arg(0).asLang())
        .filter(
            internalCall -> internalCall.funName().map(rsession::isBuiltinInternal).orElse(false))
        .filter(internalCall -> hasSimpleArgs(internalCall, def.parameters().names()));
  }

  private Optional<LangSXP> tryConvertToDotInternalCall(LangSXP call) {
    return Optional.of(call)
        .filter(c -> !dotsOrMissing(c.args()))
        .flatMap(LangSXP::funName)
        .flatMap(ctx::findFunDef)
        .flatMap(
            def ->
                extractSimpleInternal(def)
                    .map(
                        internalCall -> {
                          var cenv = new HashMap<String, SEXP>();

                          def.parameters().forEach((x) -> cenv.put(x.tag(), x.value()));
                          matchCall(def, call).args().forEach((x) -> cenv.put(x.tag(), x.value()));

                          var args =
                              internalCall.args().stream()
                                  .map(
                                      (x) ->
                                          (x.value() instanceof RegSymSXP sym)
                                              ? cenv.get(sym.name())
                                              : x.value())
                                  .toList();

                          return SEXPs.lang(
                              SEXPs.symbol(".Internal"),
                              SEXPs.list(SEXPs.lang(internalCall.fun(), SEXPs.list1(args))));
                        }));
  }

  private boolean inlineSimpleInternal(LangSXP call) {
    if (anyDots(call.args())) {
      return false;
    }

    return tryConvertToDotInternalCall(call).map(this::inlineDotInternalCall).orElse(false);
  }

  // Because of the possibility of NA values, R cannot reduce && and || to a simple rewriting
  // into if / else.
  private boolean inlineLogicalAndOr(LangSXP call, boolean isAnd) {
    var callIdx = cb.addConst(call);
    var label = cb.makeLabel();

    usingCtx(
        ctx.argContext(),
        () -> {
          compile(call.arg(0));
          cb.addInstr(isAnd ? new And1st(callIdx, label) : new Or1st(callIdx, label));
          compile(call.arg(1));
          cb.addInstr(isAnd ? new And2nd(callIdx) : new Or2nd(callIdx));
        });

    cb.patchLabel(label);
    tailCallReturn();

    return true;
  }

  private boolean inlineRepeat(LangSXP call) {
    var body = call.arg(0);
    return inlineSimpleLoop(body, this::compileRepeatBody);
  }

  private boolean inlineSimpleLoop(SEXP body, Consumer<SEXP> cmpBody) {
    if (canSkipLoopContext(body, true)) {
      cmpBody.accept(body);
    } else {
      usingCtx(
          ctx.returnJumpContext(),
          () -> {
            var endLabel = cb.makeLabel();
            cb.addInstr(new StartLoopCntxt(false, endLabel));
            cmpBody.accept(body);
            cb.patchLabel(endLabel);
            cb.addInstr(new EndLoopCntxt(false));
          });
    }

    cb.addInstr(new LdNull());
    tailCallInvisibleReturn();

    return true;
  }

  private boolean canSkipLoopContextList(ListSXP list, boolean breakOK) {
    return list.values().stream().noneMatch(x -> !missing(x) && !canSkipLoopContext(x, breakOK));
  }

  private boolean canSkipLoopContext(SEXP body, boolean breakOK) {
    if (body instanceof LangSXP l) {
      if (l.fun() instanceof RegSymSXP s) {
        var name = s.name();
        if (!breakOK && LOOP_BREAK_FUNS.contains(name)) {
          // FIXME: why don't we need to check if it is a base version?
          // GNUR does not do that, but:
          // > `break` <- function() print("b")
          // > i <- 0
          // > repeat({ i <<- i + 1; if (i == 10) break; })
          // I mean all of this is very much unsound, just why in this case do we care
          // less?
          return false;
        } else if (LOOP_STOP_FUNS.contains(name) && ctx.isBaseVersion(name)) {
          return true;
        } else if (LOOP_TOP_FUNS.contains(name) && ctx.isBaseVersion(name)) {
          // recursively check the rest of the body
          // this branch keeps the breakOK!
          return canSkipLoopContextList(l.args(), breakOK);
        } else if (EVAL_FUNS.contains(name)) {
          // FIXME: again no check if it is a base version

          // From R documentation:
          // > Loops that include a call to eval (or evalq, source) are compiled with
          // > context to support a programming pattern present e.g. in package Rmpi: a
          // server
          // application is
          // > implemented using an infinite loop, which evaluates de-serialized code
          // received from
          // the client; the
          // > server shuts down when it receives a serialized version of break.
          return false;
        } else {
          // recursively check the rest of the body
          return canSkipLoopContextList(l.args(), false);
        }
      } else {
        return canSkipLoopContextList(l.asList(), false);
      }
    }
    return true;
  }

  private void compileRepeatBody(SEXP body) {
    var startLabel = cb.makeLabel();
    var endLabel = cb.makeLabel();
    cb.patchLabel(startLabel);
    usingCtx(ctx.loopContext(startLabel, endLabel), () -> compile(body));
    cb.addInstr(new Pop());
    cb.addInstr(new Goto(startLabel));
    cb.patchLabel(endLabel);
  }

  private boolean inlineBreakNext(LangSXP call, boolean isBreak) {
    var loop = ctx.loop();
    if (loop != null) {
      if (loop.gotoOK()) {
        cb.addInstr(new Goto(isBreak ? loop.end() : loop.start()));
        return true;
      } else {
        return inlineSpecial(call);
      }
    } else {
      // TODO: notifyWrongBreakNext or notifyWrongBreakNext
      return inlineSpecial(call);
    }
  }

  private boolean inlineWhile(LangSXP call) {
    var test = call.arg(0);
    var body = call.arg(1);

    return inlineSimpleLoop(body, (b) -> compileWhileBody(call, test, b));
  }

  private void compileWhileBody(LangSXP call, SEXP test, SEXP body) {
    var startLabel = cb.makeLabel();
    var endLabel = cb.makeLabel();
    cb.patchLabel(startLabel);
    usingCtx(
        ctx.loopContext(startLabel, endLabel),
        () -> {
          compile(test);
          cb.addInstr(new BrIfNot(cb.addConst(call), endLabel));
          compile(body);
          cb.addInstr(new Pop());
          cb.addInstr(new Goto(startLabel));
        });
    cb.patchLabel(endLabel);
  }

  private boolean inlineFor(LangSXP call) {
    var loopVar = call.arg(0);
    var seq = call.arg(1);
    var body = call.arg(2);

    if (!(loopVar instanceof RegSymSXP loopSym)) {
      // >> not worth warning here since the parser should not allow this
      return false;
    }

    usingCtx(ctx.nonTailContext(), () -> compile(seq));

    var ci = cb.addConst(loopSym);
    var callIdx = cb.addConst(call);

    if (canSkipLoopContext(body, true)) {
      compileForBody(call, body, loopSym);
    } else {
      usingCtx(
          ctx.returnJumpContext(),
          () -> {
            var startLabel = cb.makeLabel();
            var endLabel = cb.makeLabel();
            cb.addInstr(new StartFor(callIdx, ci, startLabel));
            cb.patchLabel(startLabel);
            cb.addInstr(new StartLoopCntxt(true, endLabel));
            compileForBody(call, body, null);
            cb.patchLabel(endLabel);
            cb.addInstr(new EndLoopCntxt(true));
          });
    }

    cb.addInstr(new EndFor());
    tailCallInvisibleReturn();

    return true;
  }

  private void compileForBody(LangSXP call, SEXP body, @Nullable RegSymSXP loopSym) {
    var bodyLabel = cb.makeLabel();
    var loopLabel = cb.makeLabel();
    var endLabel = cb.makeLabel();

    if (loopSym == null) {
      cb.addInstr(new Goto(loopLabel));
    } else {
      cb.addInstr(new StartFor(cb.addConst(call), cb.addConst(loopSym), loopLabel));
    }

    cb.patchLabel(bodyLabel);
    usingCtx(ctx.loopContext(loopLabel, endLabel), () -> compile(body));
    cb.addInstr(new Pop());
    cb.patchLabel(loopLabel);
    cb.addInstr(new StepFor(bodyLabel));
    cb.patchLabel(endLabel);
  }

  private boolean inlineAddSub(LangSXP call, boolean isAdd) {
    if (call.args().size() == 2) {
      return inlinePrim2(call, (idx) -> isAdd ? new Add(idx) : new Sub(idx));
    } else {
      return inlinePrim1(call, (idx) -> isAdd ? new UPlus(idx) : new UMinus(idx));
    }
  }

  private boolean inlinePrim1(LangSXP call, Function<ConstPool.Idx<LangSXP>, BcInstr> makeOp) {
    if (dotsOrMissing(call.args())) {
      return inlineBuiltin(call, false);
    }

    if (call.args().size() != 1) {
      // TODO: notifyWrongArgCount
      return inlineBuiltin(call, false);
    }

    usingCtx(ctx.nonTailContext(), () -> compile(call.arg(0)));
    cb.addInstr(makeOp.apply(cb.addConst(call)));
    tailCallReturn();
    return true;
  }

  private boolean inlinePrim2(LangSXP call, Function<ConstPool.Idx<LangSXP>, BcInstr> makeOp) {
    if (dotsOrMissing(call.args())) {
      return inlineBuiltin(call, false);
    }

    if (call.args().size() != 2) {
      // TODO: notifyWrongArgCount
      return inlineBuiltin(call, false);
    }

    usingCtx(
        ctx.nonTailContext(),
        () -> {
          compile(call.arg(0));

          // >> the second argument has to be compiled with an argument context
          // >> since the stack already has the value of the first argument
          // >> on it and that would need to be popped before a jump.
          usingCtx(ctx.argContext(), () -> compile(call.arg(1)));
        });

    cb.addInstr(makeOp.apply(cb.addConst(call)));
    tailCallReturn();

    return true;
  }

  private boolean inlineLog(LangSXP call) {
    ListSXP args = call.args();

    if (dotsOrMissing(args) || args.hasTags() || args.isEmpty() || args.size() > 2) {
      return inlineSpecial(call);
    }

    var idx = cb.addConst(call);
    usingCtx(ctx.nonTailContext(), () -> compile(args.value(0)));
    if (args.size() == 1) {
      cb.addInstr(new Log(idx));
    } else {
      usingCtx(ctx.argContext(), () -> compile(args.value(1)));
      cb.addInstr(new LogBase(idx));
    }

    tailCallReturn();
    return true;
  }

  private boolean inlineMath1(LangSXP call, int idx) {
    ListSXP args = call.args();

    if (dotsOrMissing(args)) {
      return inlineBuiltin(call, false);
    }
    if (args.size() != 1) {
      // TODO: notifyWrongArgCount
      return inlineBuiltin(call, false);
    }

    usingCtx(ctx.nonTailContext(), () -> compile(args.value(0)));
    cb.addInstr(new Math1(cb.addConst(call), idx));

    tailCallReturn();
    return true;
  }

  private boolean inlineDollar(LangSXP call) {
    if (anyDots(call.args()) || call.args().size() != 2) {
      return inlineSpecial(call);
    }

    SEXP sym;
    if (call.arg(1) instanceof StrSXP s && s.size() == 1 && !s.get(0).isEmpty()) {
      // > list(a=1)$"a"
      sym = SEXPs.symbol(s.get(0));
    } else {
      sym = call.arg(1);
    }

    if (sym instanceof RegSymSXP s) {
      usingCtx(ctx.argContext(), () -> compile(call.arg(0)));
      var callIdx = cb.addConst(call);
      var symIdx = cb.addConst(s);
      cb.addInstr(new Dollar(callIdx, symIdx));
      tailCallReturn();
      return true;
    } else {
      return inlineSpecial(call);
    }
  }

  private boolean inlineIsXyz(LangSXP c, Supplier<BcInstr> makeOp) {
    if (anyDots(c.args()) || c.args().size() != 1) {
      return inlineBuiltin(c, false);
    }

    usingCtx(ctx.argContext(), () -> compile(c.arg(0)));
    cb.addInstr(makeOp.get());
    tailCallReturn();
    return true;
  }

  private boolean inlineDotCall(LangSXP call) {
    ListSXP args = call.args();
    if (dotsOrMissing(args) || args.hasTags() || args.isEmpty() || args.size() > DOTCALL_MAX) {
      return inlineBuiltin(call, false);
    }

    usingCtx(ctx.nonTailContext(), () -> compile(args.value(0)));
    usingCtx(ctx.argContext(), () -> args.values(1).forEach(this::compile));
    cb.addInstr(new DotCall(cb.addConst(call), args.size() - 1));

    tailCallReturn();
    return true;
  }

  private boolean inlineMultiColon(LangSXP call) {
    ListSXP args = call.args();

    if (!dotsOrMissing(args) && args.size() == 2) {
      Function<SEXP, String> extractName =
          (x) ->
              switch (x) {
                case StrSXP s when s.size() == 1 -> s.get(0);
                case RegSymSXP s -> s.name();
                default -> null;
              };

      String s1 = extractName.apply(args.value(0));
      String s2 = extractName.apply(args.value(1));

      if (s1 == null || s2 == null) {
        return false;
      }

      var newArgs = SEXPs.list(SEXPs.string(s1), SEXPs.string(s2));
      compileCallSymFun(call, (RegSymSXP) call.fun(), newArgs);
      return true;
    }

    return false;
  }

  private boolean inlineSwitch(LangSXP call) {
    ListSXP args = call.args();

    if (args.isEmpty() || anyDots(args)) {
      return inlineSpecial(call);
    }

    // before reading on a taste of switch in R:
    //
    // > switch("b", a=1,b=,c=,e=2,b=3,b=4,c=,d=5,6)
    //
    // so you can appreciate the complexity of the
    // code bellow

    // 1. extract the switch expression components
    var expr = args.value(0);
    var cases = args.values(1);

    // TODO: notifyNoSwitchcases

    var names = args.names(1);
    // allow for corner cases like switch(x, 1) which always
    // returns 1 if x is a character scalar.
    if (cases.size() == 1 && names.getFirst() == null) {
      names = List.of("");
    }

    // 2. figure out which type of switch (numeric / character) we are compiling

    // number of default cases
    boolean haveNames;
    boolean haveCharDefault;

    var numberOfDefaults = names.stream().filter(String::isEmpty).count();
    if (numberOfDefaults == cases.size()) {
      // none of the case is named -- this might be the first case when the expr is
      // numeric
      haveNames = false;
      haveCharDefault = false;
    } else if (numberOfDefaults == 1) {
      // one default
      haveNames = true;
      haveCharDefault = true;
    } else if (numberOfDefaults == 0) {
      // no default case
      haveNames = true;
      haveCharDefault = false;
    } else {
      // more than one default (which confuses the fuck out of me)
      // TODO: notifyMultipleSwitchDefaults
      return inlineSpecial(call);
    }

    // a boolean vector indicating which (if any) arguments are missing
    var miss = cases.stream().map(this::missing).toList();

    // 3. build labels for cases

    // the label for code that signals an error if
    // a numerical selector expression chooses a case with an empty argument
    var missLabel = miss.contains(true) ? cb.makeLabel() : null;

    // will be for code that invisibly procures the value NULL, which is the default
    // case for a
    // numerical selector argument and also for a character selector when no unnamed
    // default case is provided.
    var defaultLabel = cb.makeLabel();
    var labels = new ArrayList<BcLabel>(miss.size() + 1);
    miss.stream().map(x -> x ? missLabel : cb.makeLabel()).forEach(labels::add);
    labels.add(defaultLabel);

    // needed as the GOTO target for a switch expression that is not in tail
    // position
    var endLabel = ctx.isTailCall() ? null : cb.makeLabel();

    var nLabels = new ArrayList<BcLabel>();
    var uniqueNames = new ArrayList<String>();

    if (haveNames) {
      names.stream().distinct().filter(x -> !x.isEmpty()).forEachOrdered(uniqueNames::add);
      if (haveCharDefault) {
        uniqueNames.add("");
      }

      // the following acrobacy is, so we compile, quite unexpectedly IMHO,
      // switch("b", a=1,b=,c=,e=2,b=3,b=4,c=,d=5,6)
      // a code that returns 2 (matching e label on b input)
      var aidxBuilder = ImmutableIntArray.builder();
      IntStream.range(0, miss.size()).filter(x -> !miss.get(x)).forEach(aidxBuilder::add);
      aidxBuilder.add(names.size());
      var aidx = aidxBuilder.build();

      for (var n : uniqueNames) {
        var start = names.indexOf(n);
        var idx = aidx.stream().filter(x -> x >= start).min().orElseThrow();
        nLabels.add(labels.get(idx));
      }

      if (!haveCharDefault) {
        uniqueNames.add("");
        nLabels.add(defaultLabel);
      }
    }

    // 4. compile the expression on which we dispatch to the cases
    usingCtx(ctx.nonTailContext(), () -> compile(expr));
    var callIdx = cb.addConst(call);

    // 5. emit the switch instruction

    // this is more complicated than it should be, but there is no easy way around the restrictions
    // how
    // the BC representation is set:
    // - instructions are records thus immutable with non-null fields
    // - we want the BC to be the same as GNU-R one
    //
    // In R: the labels for the individual cases are represented by
    // lists which are directly placed in the bytecode itself.
    // At the end, when R is closing the code buffer, it calls cb$patchLabels()
    // which in turns all "chars" and "lists" pushes into const pool.
    // The effect is that the label vectors will be pushed last, and so we need to
    // follow the same logic and path the instruction at the end.
    //
    // So we cannot really add any meaningful args to switch at this point, we need to patch it
    // later.
    var switchIdx = 0;

    if (haveNames) {
      var cni = cb.addConst(SEXPs.string(uniqueNames));
      switchIdx = cb.addInstr(new Switch(callIdx, cni, null, null));
    } else {
      // even though we use null to represent NilSXP
      // we still need to add it into the const pool here so the order is kept
      cb.addConst(SEXPs.NULL);
      switchIdx = cb.addInstr(new Switch(callIdx, null, null, null));
    }

    cb.addInstrPatch(
        switchIdx,
        (instr) -> {
          var oldSwitch = (Switch) instr;
          var numLabelsIdx = SEXPs.integer(labels.stream().map(BcLabel::target).toList());
          Switch newSwitch;

          if (haveNames) {
            var chrLabelsIdx = SEXPs.integer(nLabels.stream().map(BcLabel::target).toList());
            newSwitch =
                new Switch(
                    oldSwitch.ast(),
                    oldSwitch.names(),
                    cb.addConst(chrLabelsIdx),
                    cb.addConst(numLabelsIdx));
          } else {
            newSwitch =
                new Switch(oldSwitch.ast(), oldSwitch.names(), null, cb.addConst(numLabelsIdx));
          }

          return newSwitch;
        });

    // 6. compile the cases

    // > emit code to signal an error if a numeric switch hist an
    // > empty alternative (fall through, as for character, might
    // > make more sense but that isn't the way switch() works)
    if (miss.contains(true)) {
      cb.patchLabel(Objects.requireNonNull(missLabel));
      compile(
          SEXPs.lang(
              SEXPs.symbol("stop"),
              SEXPs.list(SEXPs.string("empty alternative in numeric switch"))));
    }

    // code for the default case
    cb.patchLabel(defaultLabel);
    cb.addInstr(new LdNull());
    if (!tailCallInvisibleReturn()) {
      cb.addInstr(new Goto(Objects.requireNonNull(endLabel)));
    }

    // code for the non-empty cases

    // > Finally the labels and code for the non-empty alternatives are written to
    // the code buffer. In
    // > non-tail position the code is followed by a GOTO instruction that jumps to
    // endLabel. The final case
    // > does not need this GOTO.
    for (int i = 0; i < cases.size(); i++) {
      if (miss.get(i)) {
        continue;
      }
      cb.patchLabel(labels.get(i));
      compile(cases.get(i));
      if (!ctx.isTailCall()) {
        cb.addInstr(new Goto(Objects.requireNonNull(endLabel)));
      }
    }

    if (!ctx.isTailCall()) {
      cb.patchLabel(Objects.requireNonNull(endLabel));
    }

    return true;
  }

  private boolean inlineAssign(LangSXP call) {
    if (!checkAssign(call)) {
      return inlineSpecial(call);
    }

    var superAssign = call.fun().equals(SEXPs.SUPER_ASSIGN);
    var lhs = call.arg(0);
    var value = call.arg(1);
    var symbolOpt = Context.getAssignVar(call);

    if (symbolOpt.isPresent() && lhs instanceof StrOrRegSymSXP) {
      compileSymbolAssign(symbolOpt.get(), value, superAssign);
      return true;
    } else if (symbolOpt.isPresent() && lhs instanceof LangSXP left) {
      compileComplexAssign(symbolOpt.get(), left, value, superAssign);
      return true;
    } else {
      return inlineSpecial(call);
    }
  }

  private void compileSymbolAssign(String name, SEXP value, boolean superAssign) {
    usingCtx(ctx.nonTailContext(), () -> compile(value));
    var ci = cb.addConst(SEXPs.symbol(name));
    cb.addInstr(superAssign ? new SetVar2(ci) : new SetVar(ci));

    tailCallInvisibleReturn();
  }

  /*
   * >> Assignments for complex LVAL specifications. This is the stuff that
   * >> nightmares are made of ...
   */
  private void compileComplexAssign(String name, LangSXP lhs, SEXP value, boolean superAssign) {

    // > The stack invariant maintained by the assignment process is
    // > that the current right hand side value is on the top, followed by the evaluated left hand
    // side values,
    // > the binding cell, and the original right hand side value. Thus the start instruction leaves
    // the right
    // > hand side value on the top, then the value of the left hand side variable, the binding
    // cell, and again
    // > the right hand side value on the stack.

    if (!ctx.isTopLevel()) {
      cb.addInstr(new IncLnkStk());
    }
    usingCtx(ctx.nonTailContext(), () -> compile(value));
    var csi = cb.addConst(SEXPs.symbol(name));
    cb.addInstr(superAssign ? new StartAssign2(csi) : new StartAssign(csi));

    var flat = flattenPlace(lhs, cb.getCurrentLoc());

    usingCtx(
        ctx.argContext(),
        () -> {
          for (int i = flat.size() - 1; i >= 1; i--) {
            compileGetterCall(flat.get(i));
          }
          compileSetterCall(flat.getFirst(), value);
          for (int i = 1; i < flat.size(); i++) {
            compileSetterCall(flat.get(i), SEXPs.ASSIGN_VTMP);
          }
        });

    cb.addInstr(superAssign ? new EndAssign2(csi) : new EndAssign(csi));
    if (!ctx.isTopLevel()) {
      cb.addInstr(new DecLnkStk());
    }

    tailCallInvisibleReturn();
  }

  private void compileSetterCall(FlattenLHS flhs, SEXP value) {
    var afun =
        Context.getAssignFun(flhs.temp().fun())
            .orElseThrow(() -> new CompilerException("invalid function in complex assignment"));
    var aargs = flhs.temp().args().set(0, null, SEXPs.ASSIGN_TMP).appended("value", value);
    var acall = SEXPs.lang(afun, aargs);

    var sloc = cb.getCurrentLoc();

    var cargs = flhs.original().args().appended("value", value);
    var cexpr = SEXPs.lang(afun, cargs);
    cb.setCurrentLoc(new Loc(cexpr, null));

    if (afun instanceof RegSymSXP afunSym) {
      if (!trySetterInline(afunSym, flhs, acall)) {
        var ci = cb.addConst(afunSym);
        cb.addInstr(new GetFun(ci));
        cb.addInstr(new PushNullArg());
        compileArgs(flhs.temp().args().subList(1), false);
        var cci = cb.addConst(acall);
        var cvi = cb.addConst(value);
        cb.addInstr(new SetterCall(cci, cvi));
      }
    } else {
      compile(afun);
      cb.addInstr(new CheckFun());
      cb.addInstr(new PushNullArg());
      compileArgs(flhs.temp().args().subList(1), false);
      var cci = cb.addConst(acall);
      var cvi = cb.addConst(value);
      cb.addInstr(new SetterCall(cci, cvi));
    }

    cb.setCurrentLoc(sloc);
  }

  private void compileGetterCall(FlattenLHS flhs) {
    var place = flhs.temp();
    var sloc = cb.getCurrentLoc();

    cb.setCurrentLoc(new Loc(flhs.original(), null));

    var fun = place.fun();
    if (fun instanceof RegSymSXP funSym) {
      if (!tryGetterInline(funSym, place)) {
        var ci = cb.addConst(funSym);
        cb.addInstr(new GetFun(ci));
        cb.addInstr(new PushNullArg());
        compileArgs(place.args().subList(1), false);
        var cci = cb.addConst(place);
        cb.addInstr(new GetterCall(cci));
        cb.addInstr(new SpecialSwap());
      }
    } else {
      compile(fun);
      cb.addInstr(new CheckFun());
      cb.addInstr(new PushNullArg());
      compileArgs(place.args().subList(1), false);
      var cci = cb.addConst(place);
      cb.addInstr(new GetterCall(cci));
      cb.addInstr(new SpecialSwap());
    }

    cb.setCurrentLoc(sloc);
  }

  private List<FlattenLHS> flattenPlace(SEXP lhs, Loc loc) {
    var places = new ArrayList<FlattenLHS>();

    while (lhs instanceof LangSXP orig) {
      if (orig.args().isEmpty()) {
        stop("bad assignment 1", loc);
      }

      var temp = SEXPs.lang(orig.fun(), orig.args().set(0, null, SEXPs.ASSIGN_TMP));
      places.add(new FlattenLHS(orig, temp));
      lhs = orig.arg(0);
    }

    if (!(lhs instanceof RegSymSXP)) {
      stop("bad assignment 2", loc);
    }

    return places;
  }

  private boolean checkAssign(LangSXP call) {
    if (call.args().size() != 2) {
      return false;
    }

    var lhs = call.arg(0);
    return switch (lhs) {
      case RegSymSXP _ -> true;
      case StrSXP s -> s.size() == 1;
      case LangSXP _ -> {
        while (lhs instanceof LangSXP l) {
          var fun = l.fun();
          var args = l.args();

          // >> A valid left hand side call must have a function that is either a symbol or is of
          // >> the form foo::bar or foo:::bar, and the first argument must be a symbol or
          // >> another valid left hand side call.
          if (!(fun instanceof RegSymSXP)
              && !(fun instanceof LangSXP && args.size() == 2)
              && args.value(0) instanceof RegSymSXP innerFun
              && (innerFun.name().equals("::") || innerFun.name().equals(":::"))) {
            // TODO: notifyBadAssignFun
            yield false;
          }
          lhs = l.arg(0);
        }
        yield lhs instanceof RegSymSXP;
      }
      default -> false;
    };
  }

  private boolean inlineDollarSubset(LangSXP call) {
    if (anyDots(call.args()) || call.args().size() != 2) {
      return false;
    }

    var what = call.arg(1);
    if (what instanceof StrSXP str) {
      what = SEXPs.symbol(str.get(0));
    }
    if (what instanceof RegSymSXP sym) {
      var ci = cb.addConst(call);
      var csi = cb.addConst(sym);

      cb.addInstr(new Dup2nd());
      cb.addInstr(new Dollar(ci, csi));
      cb.addInstr(new SpecialSwap());

      return true;
    } else {
      return false;
    }
  }

  private boolean inlineSquareBracketSubSet(boolean doubleBracket, LangSXP call) {
    if (dotsOrMissing(call.args()) || call.args().hasTags() || call.args().size() < 2) {
      // inline cmpGetterDispatch from the R compiler

      if (anyDots(call.args())) {
        return false;
      }

      var ci = cb.addConst(call);
      var label = cb.makeLabel();
      cb.addInstr(new Dup2nd());
      cb.addInstr(doubleBracket ? new StartSubset2(ci, label) : new StartSubset(ci, label));

      var args = call.args().subList(1);
      compileBuiltinArgs(args, true);

      cb.addInstr(doubleBracket ? new DfltSubset2() : new DfltSubset());
      cb.patchLabel(label);
      cb.addInstr(new SpecialSwap());

      return true;
    }

    var ci = cb.addConst(call);
    var label = cb.makeLabel();
    cb.addInstr(new Dup2nd());
    cb.addInstr(doubleBracket ? new StartSubset2N(ci, label) : new StartSubsetN(ci, label));
    var indices = call.args().subList(1);
    compileIndices(indices);

    switch (indices.size()) {
      case 1:
        cb.addInstr(doubleBracket ? new VecSubset2(ci) : new VecSubset(ci));
        break;
      case 2:
        cb.addInstr(doubleBracket ? new MatSubset2(ci) : new MatSubset(ci));
        break;
      default:
        cb.addInstr(
            doubleBracket ? new Subset2N(ci, indices.size()) : new SubsetN(ci, indices.size()));
    }

    cb.patchLabel(label);
    cb.addInstr(new SpecialSwap());

    return true;
  }

  private boolean inlineDollarAssign(FlattenLHS flhs, LangSXP call) {
    var place = flhs.temp();
    if (anyDots(place.args()) || place.args().size() != 2) {
      return false;
    } else {
      SEXP sym = place.arg(1);
      if (sym instanceof StrSXP s) {
        sym = SEXPs.symbol(s.get(0));
      }
      if (sym instanceof RegSymSXP s) {
        var ci = cb.addConst(call);
        var csi = cb.addConst(s);
        cb.addInstr(new DollarGets(ci, csi));
        return true;
      } else {
        return false;
      }
    }
  }

  private boolean inlineSquareBracketAssign(boolean doubleSquare, FlattenLHS flhs, LangSXP call) {
    var place = flhs.temp();

    if (dotsOrMissing(place.args()) || place.args().hasTags() || place.args().size() < 2) {
      // inlined cmpSetterDispatch
      if (anyDots(place.args())) {
        return false;
      }

      var ci = cb.addConst(call);
      var endLabel = cb.makeLabel();
      cb.addInstr(
          doubleSquare ? new StartSubassign2(ci, endLabel) : new StartSubassign(ci, endLabel));
      var args = place.args().subList(1);
      compileBuiltinArgs(args, true);
      cb.addInstr(doubleSquare ? new DfltSubassign2() : new DfltSubassign());
      cb.patchLabel(endLabel);
      return true;
    }

    var ci = cb.addConst(call);
    var label = cb.makeLabel();
    cb.addInstr(doubleSquare ? new StartSubassign2N(ci, label) : new StartSubassignN(ci, label));
    var indices = place.args().subList(1);
    compileIndices(indices);

    switch (indices.size()) {
      case 1:
        cb.addInstr(doubleSquare ? new VecSubassign2(ci) : new VecSubassign(ci));
        break;
      case 2:
        cb.addInstr(doubleSquare ? new MatSubassign2(ci) : new MatSubassign(ci));
        break;
      default:
        cb.addInstr(
            doubleSquare
                ? new Subassign2N(ci, indices.size())
                : new SubassignN(ci, indices.size()));
    }

    cb.patchLabel(label);

    return true;
  }

  private void compileIndices(ListSXP indices) {
    for (var idx : indices.values()) {
      compile(idx, true, true);
    }
  }

  private boolean inlineSubset(boolean doubleSquare, LangSXP call) {
    if (dotsOrMissing(call.args()) || call.args().hasTags() || call.args().size() < 2) {
      if (anyDots(call.args()) || call.args().isEmpty()) {
        return inlineSpecial(call);
      }

      var oe = call.arg(0);
      if (missing(oe)) {
        return inlineSpecial(call);
      }
      usingCtx(ctx.argContext(), () -> compile(oe));
      var ci = cb.addConst(call);
      var endLabel = cb.makeLabel();
      cb.addInstr(doubleSquare ? new StartSubset2(ci, endLabel) : new StartSubset(ci, endLabel));
      var args = call.args().subList(1);
      compileBuiltinArgs(args, true);
      cb.addInstr(doubleSquare ? new DfltSubset2() : new DfltSubset());
      cb.patchLabel(endLabel);

      tailCallReturn();
      return true;
    }

    var oe = call.arg(0);
    if (missing(oe)) {
      stop("cannot compile this expression");
    }

    var ci = cb.addConst(call);
    var endLabel = cb.makeLabel();
    usingCtx(ctx.argContext(), () -> compile(oe));
    cb.addInstr(doubleSquare ? new StartSubset2N(ci, endLabel) : new StartSubsetN(ci, endLabel));
    var indices = call.args().subList(1);
    usingCtx(ctx.argContext(), () -> compileIndices(indices));

    switch (indices.size()) {
      case 1:
        cb.addInstr(doubleSquare ? new VecSubset2(ci) : new VecSubset(ci));
        break;
      case 2:
        cb.addInstr(doubleSquare ? new MatSubset2(ci) : new MatSubset(ci));
        break;
      default:
        cb.addInstr(
            doubleSquare ? new Subset2N(ci, indices.size()) : new SubsetN(ci, indices.size()));
    }

    cb.patchLabel(endLabel);
    tailCallReturn();

    return true;
  }

  private boolean inlineSlotAssign(FlattenLHS flhs, LangSXP call) {
    var place = flhs.temp();

    if (!dotsOrMissing(place.args())
        && place.args().size() == 2
        && place.arg(1) instanceof RegSymSXP s) {
      var newPlace = SEXPs.lang(place.fun(), place.args().set(1, null, SEXPs.string(s.name())));
      var vexpr = call.args().values().getLast();
      compileSetterCall(new FlattenLHS(flhs.original(), newPlace), vexpr);
      return true;
    } else {
      return false;
    }
  }

  private boolean compileSuppressingUndefined(LangSXP call) {
    // TODO: cntxt$suppressUndefined <- TRUE (related to notification)
    compileCallSymFun(call, (RegSymSXP) call.fun(), call.args());
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
      case PromSXP _ -> stop("cannot constant fold literal promises");
      case BCodeSXP _ -> stop("cannot constant fold literal bytecode objects");
      default -> checkConst(expr);
    };
  }

  private Optional<SEXP> checkConst(SEXP e) {
    var r =
        switch (e) {
          case NilSXP _ -> e;
          case VectorSXP<?> xs when xs.size() <= MAX_CONST_SIZE -> e;
          default -> null;
        };

    return Optional.ofNullable(r);
  }

  private Optional<SEXP> constantFoldSym(RegSymSXP sym) {
    var name = sym.name();

    if (ALLOWED_FOLDABLE_CONSTS.contains(name)) {
      return ctx.resolve(name).filter(x -> x.first().isBase()).flatMap(x -> checkConst(x.second()));
    } else {
      return Optional.empty();
    }
  }

  /**
   * Try to constant fold a call. The supported functions are defined in {@link
   * #ALLOWED_FOLDABLE_FUNS}. It is a subset of the functions that are supported by the constant
   * folding in GNU-R. This implementation is done on the best-effort basis and more are added as
   * needed.
   *
   * @param call to be constant folded
   * @return the constant folded value or empty if it cannot be constant folded
   */
  private Optional<SEXP> constantFoldCall(LangSXP call) {
    return call.funName()
        .filter(this::isFoldableFun)
        .flatMap(name -> buildArgs(call).flatMap(args -> doConstantFoldCall(name, args)))
        .flatMap(this::checkConst);
  }

  private Optional<List<SEXP>> buildArgs(LangSXP call) {
    var argsBuilder = new ImmutableList.Builder<SEXP>();

    for (var arg : call.args()) {
      if (missing(arg.value())) {
        return Optional.empty();
      }

      var namedArg = arg.value().attributes() != null ? arg.namedValue() : arg.value();
      var val = constantFold(namedArg);

      if (val.isPresent()) {
        var v = val.get();
        if (!ALLOWED_FOLDABLE_MODES.contains(v.type())) {
          return Optional.empty();
        }

        argsBuilder.add(v);
      } else {
        return Optional.empty();
      }
    }

    return Optional.of(argsBuilder.build());
  }

  private Optional<SEXP> doConstantFoldCall(String funName, List<SEXP> args) {
    return switch (funName) {
      case "(" -> constantFoldParen(args);
      case "c" -> ConstantFolding.c(args);
      case "+" -> {
        if (args.size() == 1) {
          yield ConstantFolding.plus(args);
        } else {
          yield ConstantFolding.add(args);
        }
      }
      case "*" -> ConstantFolding.mul(args);
      case "/" -> ConstantFolding.div(args);
      case "-" -> {
        if (args.size() == 1) {
          yield ConstantFolding.minus(args);
        } else {
          yield ConstantFolding.sub(args);
        }
      }
      case ":" -> ConstantFolding.colon(args);
      case "^" -> ConstantFolding.pow(args);
      case "log" -> ConstantFolding.log(args);
      case "log2" -> ConstantFolding.log2(args);
      case "sqrt" -> ConstantFolding.sqrt(args);
      case "rep" -> ConstantFolding.rep(args);
      case "seq.int" -> ConstantFolding.seqInt(args);
      default -> Optional.empty();
    };
  }

  private boolean isFoldableFun(String name) {
    return Optional.of(name)
        .filter(ALLOWED_FOLDABLE_FUNS::contains)
        .flatMap(n -> getInlineInfo(n, false))
        .map(x -> x.env.isBase() && x.value != null && x.value.isFunction())
        .orElse(false);
  }

  private Optional<SEXP> constantFoldParen(List<SEXP> args) {
    if (args.size() != 1) {
      return Optional.empty();
    }
    return constantFold(args.getFirst());
  }

  private <R> R stop(String message) throws CompilerException {
    return stop(message, cb.getCurrentLoc());
  }

  private <R> R stop(String message, Loc loc) throws CompilerException {
    throw new CompilerException(message, loc);
  }

  private boolean anyDots(ListSXP l) {
    return l.values().stream()
        .anyMatch(x -> !missing(x) && x instanceof SymSXP s && s.isEllipsis());
  }

  private boolean dotsOrMissing(ListSXP l) {
    return l.values().stream().anyMatch(x -> missing(x) || x instanceof SymSXP s && s.isEllipsis());
  }

  private boolean missing(SEXP x) {
    // FIXME: this is a great oversimplification from the do_missing in R
    if (x instanceof SymSXP s) {
      return s.isMissing();
    } else {
      return false;
    }
  }

  private boolean mayCallBrowser(SEXP body) {
    if (body instanceof LangSXP call && call.fun() instanceof RegSymSXP s) {
      var name = s.name();
      if (name.equals("browser")) {
        return true;
      } else if (name.equals("function") && ctx.isBaseVersion(name)) {
        return false;
      } else {
        return call.args().values().stream().anyMatch(this::mayCallBrowser);
      }
    }

    return false;
  }

  // This is a very primitive implementation of the {@code match.call}
  // it simply tries to match the named arguments to parameters
  // followed by the rest of the arguments.
  static LangSXP matchCall(CloSXP definition, LangSXP call) {
    var matched = ImmutableList.<TaggedElem>builder();
    var remaining = new ArrayList<SEXP>();
    var formals = definition.parameters();

    if (formals.size() < call.args().size()) {
      throw new IllegalArgumentException("Too many arguments and we do not support ... yet");
    }

    for (var actual : call.args()) {
      if (actual.tag() != null) {
        matched.add(actual);
        formals = formals.remove(actual.tag());
      } else {
        remaining.add(actual.value());
      }
    }

    for (int i = 0; i < remaining.size(); i++) {
      matched.add(new TaggedElem(formals.get(i).tag(), remaining.get(i)));
    }

    return SEXPs.lang(call.fun(), SEXPs.list(matched.build()));
  }

  // extracts the source reference from the function
  // using either the body, if the body is wrapped in a block
  // or from function itself
  private static Loc functionLoc(CloSXP fun) {
    var body = fun.bodyAST();

    Optional<IntSXP> srcRef;

    if (body instanceof LangSXP b && b.funNameIs("{")) {
      srcRef = extractSrcRef(body, 0);
    } else {
      // try to get the srcRef from the function itself
      // normally, it would be attached to the `{`
      srcRef = fun.getSrcRef();
    }

    return new Loc(body, srcRef.orElse(null));
  }

  /**
   * Extracts source reference from the given expression. It uses the {@code srcref} attribute of
   * the expression. If the expression is a block, then the {@code srcref} will be a vector of
   * srcrefs in which case it will use the given index.
   *
   * @param expr the expression to get the source reference from
   * @param idx the index of the source reference in the vector in the case the expression is a
   *     block
   * @return source code reference or empty if not found
   */
  private static Optional<IntSXP> extractSrcRef(SEXP expr, int idx) {
    var attrs = expr.attributes();
    if (attrs == null) {
      return Optional.empty();
    }

    var srcref = attrs.get("srcref");
    return switch (srcref) {
      case IntSXP i when i.size() >= 6 -> Optional.of(i);
      case VecSXP v when v.size() >= idx && v.get(idx) instanceof IntSXP i && i.size() >= 6 ->
          Optional.of(i);
      case null, default -> Optional.empty();
    };
  }

  /**
   * Information inlining for an R symbol.
   *
   * @param name the symbol name
   * @param env the environment where the symbol was found
   * @param value the value of the symbol or null if no value was found
   * @param guard whether the inlining should be guarded which depends on the environment, {@link
   *     #optimizationLevel} and target.
   */
  record InlineInfo(String name, EnvSXP env, @Nullable SEXP value, boolean guard) {}

  /**
   * Helper struct for inlining `[[` and the like. Essentially links the `*tmp*` with the
   * corresponding code.
   */
  record FlattenLHS(LangSXP original, LangSXP temp) {}
}
