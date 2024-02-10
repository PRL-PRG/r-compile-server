package org.prlprg.bc;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import org.prlprg.bc.BcInstr.*;
import org.prlprg.sexp.*;

import javax.annotation.Nullable;
import java.util.Optional;
import java.util.Set;

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

    /**
     * The initial expression to compile.
     */
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

    private Compiler(SEXP expr, Context ctx, Loc loc) {
        this.expr = expr;
        this.ctx = ctx;
        cb.pushLoc(loc);
    }

    public Compiler(CloSXP fun) {
        this(fun.body(), Context.functionContext(fun), functionLoc(fun));

        if (cb.getCurrentLoc().srcRef() == null) {
            // from R documentation:
            // when top-level srcref is null, we speculate there will be no
            // source references within the compiled expressions either,
            // disabling the tracking makes the resulting constant pool smaller
            cb.setTrackSrcRefs(false);
        }
    }

    private Compiler fork(SEXP expr, Context ctx, Loc loc) {
        var compiler = new Compiler(expr, ctx, loc);
        compiler.setOptimizationLevel(optimizationLevel);
        return compiler;
    }

    public void setOptimizationLevel(int level) {
        this.optimizationLevel = level;
    }

    public Bc compile() {
        cb.addConst(expr);
        compile(expr);
        return cb.build();
    }

    private static Loc functionLoc(CloSXP fun) {
        var body = fun.body();

        IntSXP srcRef;
        if (!(body instanceof LangSXP b && (b.fun() instanceof RegSymSXP sym && sym.name().equals("{")))) { // FIXME: ugly
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

    private void compile(SEXP expr, boolean pushloc) {
        if (pushloc) {
            cb.pushLoc(new Loc(expr, extractSrcRef(expr, 0)));
        }

        // TODO: constant fold
        switch (expr) {
            case LangSXP e -> compileCall(e, true);
            case SpecialSymSXP e -> throw new CompilerException("unhandled special symbol: " + e);
            case RegSymSXP e -> compileSym(e, false);
            case PromSXP ignored -> throw new CompilerException("cannot compile promise literals in code");
            case BCodeSXP ignored -> throw new CompilerException("cannot compile byte code literals in code");
            default -> compileConst(expr);
        }

        if (pushloc) {
            cb.popLoc();
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
            checkTailCall(ctx);
        } else {
            // TODO: if (!findVar(sym))
            //       notifyUndefVar
            var idx = cb.addConst(e);
            cb.addInstr(missingOk ? new GetVarMissOk(idx) : new GetVar(idx));
            checkTailCall(ctx);
        }
    }

    @SuppressFBWarnings(
            value = "DLS_DEAD_LOCAL_STORE",
            justification = "False positive, probably because of ignored switch case")
    private void compileConst(SEXP expr) {
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

    void compileCall(LangSXP call, boolean canInline) {
        cb.pushLoc(new Loc(call, extractSrcRef(call, 0)));
        var args = call.args();
        switch (call.fun()) {
            case RegSymSXP fun -> {
                if (!(canInline && tryInline(fun, call))) {
                    // TODO: check call
                    compileCallSymFun(fun, args, call);
                }
            }
            case SpecialSymSXP fun -> throw new IllegalStateException("Trying to call special symbol: " + fun);
            case LangSXP fun -> {
                // TODO: break / next
                compileCallExprFun(fun, args, call);
            }
        }
        cb.popLoc();
    }

    private boolean tryInline(RegSymSXP fun, LangSXP call) {
        if (optimizationLevel == 0) {
            return false;
        }

        // it seems that there is no way to pattern match on Optional
        // FIXME: use null instead
        var bindingOpt = ctx.resolve(fun.name());
        if (bindingOpt.isEmpty()) {
            return false;
        }
        var binding = bindingOpt.get();
        if (binding.first() instanceof BaseEnvSXP) {
            return tryInlineBase(fun.name(), call);
        } else {
            return false;
        }
    }

    private void compileCallSymFun(RegSymSXP fun, ListSXP args, LangSXP call) {
        cb.addInstr(new GetFun(cb.addConst(fun)));
        var nse = MAYBE_NSE_SYMBOLS.contains(fun.name());
        compileArgs(args, nse);
        cb.addInstr(new Call(cb.addConst(call)));
        checkTailCall(ctx);
    }

    private void compileCallExprFun(LangSXP fun, ListSXP args, LangSXP call) {
        with(ctx.nonTailContext(), () -> compile(fun));
        cb.addInstr(new CheckFun());
        compileArgs(args, false);
        cb.addInstr(new Call(cb.addConst(call)));
        checkTailCall(ctx);
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
                case PromSXP ignored -> throw new CompilerException("can't compile promises in code");
                case BCodeSXP ignored -> throw new CompilerException("can't compile byte code literals in code");
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
     * @return true if the function was inlined, false otherwise
     */
    private boolean tryInlineBase(String name, LangSXP call) {
        if (optimizationLevel < 2) {
            return false;
        }
        if (optimizationLevel == 2 && !ALLOWED_INLINES.contains(name)) {
            return false;
        }

        switch (name) {
            case "{" -> inlineBlock(call);
            case "if" -> inlineCondition(call);
            case "function" -> inlineFunction(call);
            case "(" -> {
                return tryInlineParentheses(call);
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
     */
    private void inlineBlock(LangSXP call) {
        var n = call.args().size();
        if (n == 0) {
            compile(SEXPs.NULL);
            return;
        }

        if (n > 0) {
            with(ctx.nonTailContext(), () -> {
                for (var i = 0; i < n - 1; i++) {
                    var arg = call.arg(i).value();
                    // i + 1 because the block srcref's first element is the opening brace
                    cb.pushLoc(new Loc(arg, extractSrcRef(call, i + 1)));
                    compile(arg, false);
                    cb.addInstr(new Pop());
                    cb.popLoc();
                }
            });
        }

        var last = call.arg(n - 1).value();
        cb.pushLoc(new Loc(last, extractSrcRef(call, n)));
        compile(last, false);
        cb.popLoc();
    }

    private void inlineCondition(LangSXP call) {
        var test = call.arg(0).value();
        var thenBranch = call.arg(1).value();
        var elseBranch = Optional.<SEXP>empty();
        if (call.args().size() == 3) {
            elseBranch = Optional.of(call.arg(2).value());
        }

        // TODO: constant fold

        with(ctx.nonTailContext(), () -> compile(test));

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
     */
    private void inlineFunction(LangSXP call) {
        // TODO: sourcerefs
        // TODO: if (mayCallBrowser(body, cntxt)) return(FALSE)

        var formals = (ListSXP) call.arg(0).value();
        var body = call.arg(1).value();

        var compiler = fork(body, ctx.functionContext(formals, body), cb.getCurrentLoc());
        var cbody = compiler.compile();
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
     */
    private boolean tryInlineParentheses(LangSXP call) {
        if (anyDots(call.args())) {
            return tryCompileBuiltin(call);
        } else if (call.args().size() != 2) {
            // TODO: notifyWrongArgCount("(", cntxt, loc = cb$savecurloc())
            return tryCompileBuiltin(call);
        } else if (ctx.isTailCall()) {
            with(ctx.nonTailContext(), () -> compile(call.arg(0).value()));
            cb.addInstr(new Visible());
            cb.addInstr(new Return());
            return true;
        } else {
            compile(call.arg(0).value());
            return true;
        }
    }

    private boolean tryCompileBuiltin(LangSXP call) {
        return false;
    }

    private void with(Context ctx, Runnable r) {
        var old = this.ctx;
        this.ctx = ctx;
        r.run();
        this.ctx = old;
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
        } else if (srcref instanceof VecSXP v && v.size() >= idx && v.get(idx) instanceof IntSXP i && i.size() >= 6) {
            return i;
        } else {
            return null;
        }
    }
}
