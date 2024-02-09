package org.prlprg.bc;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import org.prlprg.bc.BcInstr.*;
import org.prlprg.sexp.*;

import javax.annotation.Nullable;
import java.util.Optional;
import java.util.Set;
import java.util.Stack;

public class Compiler {
    record Loc(SEXP expr, Optional<IntSXP> srcRef) {}

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
        // TODO: attributes - set after compilation
        // TODO: S4?

        var body = fun.body();
        var srcRef = Optional.<IntSXP>empty();
        if (!(body instanceof LangSXP b && (b.fun() instanceof RegSymSXP sym && sym.name().equals("{")))) { // FIXME: ugly
            // try to get the srcRef from the function itself
            // normally, it would be attached to the `{`
            srcRef = fun.getSrcRef();
        } else {
            srcRef = extractSrcRef(body, 0);
        }

        if (srcRef.isEmpty()) {
            // from R documentation:
            // when top-level srcref is null, we speculate there will be no
            // source references within the compiled expressions either,
            // disabling the tracking makes the resulting constant pool smaller
            cb.setTrackSrcRefs(false);
        }

        // the bytecode compiler only compiles function body, not the default parameter expressions
        return compile(body, ctx, new Loc(body, srcRef));
    }

    private Bc compile(SEXP expr, Context ctx) {
        return compile(expr, ctx, new Loc(expr, extractSrcRef(expr, 0)));
    }

    private Bc compile(SEXP expr, Context ctx, Loc loc) {
        cb.pushLoc(loc.expr(), loc.srcRef());

        compileExpr(expr, ctx);
        cb.popLoc();
        return cb.build();
    }

    private void compileExpr(SEXP expr, Context ctx) {
        // TODO: constant fold
        switch (expr) {
            case LangSXP e -> compileCall(e, ctx, true);
            case SpecialSymSXP e -> throw new CompilerException("unhandled special symbol: " + e);
            case RegSymSXP e -> compileSym(e, ctx, false);
            case PromSXP ignored -> throw new CompilerException("cannot compile promise literals in code");
            case BCodeSXP ignored -> throw new CompilerException("cannot compile byte code literals in code");
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
        cb.pushLoc(call, extractSrcRef(call, 0));
        var args = call.args();
        switch (call.fun()) {
            case RegSymSXP fun -> {
                if (!(canInline && tryInline(fun, call, ctx))) {
                    // TODO: check call
                    compileCallSymFun(fun, args, call, ctx);
                }
            }
            case SpecialSymSXP fun -> throw new IllegalStateException("Trying to call special symbol: " + fun);
            case LangSXP fun -> {
                // TODO: break / next
                compileCallExprFun(fun, args, call, ctx);
            }
        }
        cb.popLoc();
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
                case PromSXP ignored -> throw new CompilerException("can't compile promises in code");
                case BCodeSXP ignored -> throw new CompilerException("can't compile byte code literals in code");
                default -> {
                    compileConstArg(val);
                    compileTag(tag);
                }
            }
        }
    }

    private void compileNormArg(SEXP arg, boolean nse, Context ctx) {
        if (!nse) {
            var compiler = new Compiler(optimizationLevel);
            var bc = compiler.compile(arg, ctx.makePromiseContext(), new Loc(cb.getCurrentExpr(), cb.getCurrentSrcRef()));
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

    private void checkTailCall(Context ctx) {
        if (ctx.isTailCall()) {
            cb.addInstr(new Return());
        }
    }

    /**
     * Tries to inline a function from the base package.
     *
     * @param name
     * @param call
     * @param ctx
     * @return true if the function was inlined, false otherwise
     */
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
            case "(" -> {
                return tryInlineParentheses(call, ctx);
            }
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
            var nctx = ctx.makeNonTailContext();
            call.args().values().subList(0, n - 1).forEach(x -> compileExpr(x, nctx));
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

        compile(test, ctx.makeNonTailContext());

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
     *
     * @param call
     * @param ctx
     */
    private void inlineFunction(LangSXP call, Context ctx) {
        // TODO: sourcerefs
        // TODO: if (mayCallBrowser(body, cntxt)) return(FALSE)

        var formals = (ListSXP) call.arg(0).value();
        var body = call.arg(1).value();

        var compiler = new Compiler(optimizationLevel);
        var cbody = compiler.compile(body, ctx.makeFunctionContext(formals, body));
        var cbodysxp = SEXPs.bcode(cbody);

        cb.addInstr(new MakeClosure(cb.addConst(SEXPs.vec(formals, cbodysxp))));

        checkTailCall(ctx);
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
     * @param ctx
     */
    private boolean tryInlineParentheses(LangSXP call, Context ctx) {
        if (anyDots(call.args())) {
            return tryCompileBuiltin(call, ctx);
        } else if (call.args().size() != 2) {
            // TODO: notifyWrongArgCount("(", cntxt, loc = cb$savecurloc())
            return tryCompileBuiltin(call, ctx);
        } else if (ctx.isTailCall()) {
            var nctx = ctx.makeNonTailContext();
            compileExpr(call.arg(0).value(), nctx);
            cb.addInstr(new Visible());
            cb.addInstr(new Return());
            return true;
        } else {
            compileExpr(call.arg(0).value(), ctx);
            return true;
        }
    }

    private boolean tryCompileBuiltin(LangSXP call, Context ctx) {
        return false;
    }

    private static boolean anyDots(ListSXP l) {
        return l.values().stream().anyMatch(x -> !missing(x) && x instanceof SymSXP s && s.isEllipsis());
    }

    private static boolean missing(SEXP x) {
        // FIXME: this is a great oversimplification from the do_missing in R
        if (x instanceof SymSXP s) {
            return s.isMissing();
        } else {
            return false;
        }
    }

    private static Optional<IntSXP> extractSrcRef(SEXP expr, int idx) {
        return Optional.ofNullable(expr.attributes())
                .flatMap(x -> Optional.ofNullable(x.get("srcref")))
                .flatMap(
                        x -> {
                            if (x instanceof IntSXP y && y.size() >= 6) {
                                return Optional.of(y);
                            } else if (x instanceof VecSXP y
                                    && y.size() >= idx
                                    && y.get(idx) instanceof IntSXP z
                                    && z.size() >= 6) {
                                return Optional.of(z);
                            }
                            return Optional.empty();
                        });
    }
}
