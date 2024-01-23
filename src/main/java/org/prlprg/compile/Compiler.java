package org.prlprg.compile;

import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.sexp.*;

import javax.annotation.Nullable;
import java.util.*;

public class Compiler {
    private static final Set<String> MAYBE_NSE_SYMBOLS = Set.of("bquote");

    private final Bc.Builder cb = new Bc.Builder();

    public static Bc compileFun(CloSXP source) {
        var body = source.body();

        // FIXME: this is wrong -- need a special cmpFun to include the formals and others. EMPTY_ENV is also wrong
        return compile(body, SEXPs.EMPTY_ENV);
    }

    public static Bc compile(SEXP expr, EnvSXP env) {
        // TODO: add local variables into the context environment?
        return compile(expr, new Context(true, true, env));
    }

    private static Bc compile(SEXP expr, Context ctx) {
        var compiler = new Compiler();
        compiler.compileExpr(expr, ctx);
        return compiler.cb.build();
    }

    private void compileExpr(SEXP expr, Context ctx) {
        // TODO: check we do not attempt to compile BCSXP or PROMSXP
        switch (expr) {
            case LangSXP e -> compileCall(e, ctx);
            case SpecialSymSXP e -> throw new CompilerException("unhandled special symbol: " + e);
            case RegSymSXP e -> compileRegSym(e, ctx);
            default -> compileConst(expr, ctx);
        }
    }

    private void compileRegSym(RegSymSXP e, Context ctx) {
        compileRegSym(e, ctx, false);
    }

    private void compileRegSym(RegSymSXP e, Context ctx, boolean missingOk) {
        if (e.isEllipsis()) {
            // notifyWrongDotsUse
            cb.addInstr(new BcInstr.DotsErr());
        } else if (e.isDdSym()) {
            // if (!findLocVar("...", ctx))
            //     notifyWrongDotsUse
            var idx = cb.addConst(e);
            cb.addInstr(missingOk ? new BcInstr.DdValMissOk(idx) : new BcInstr.DdVal(idx));
            checkTailCall(ctx);
        } else {
            // if (!findVar(sym, ctx))
            //     notifyUndefVar
            var idx = cb.addConst(e);
            cb.addInstr(missingOk ? new BcInstr.GetVarMissOk(idx) : new BcInstr.GetVar(idx));
            checkTailCall(ctx);
        }
    }

    private void compileConst(SEXP expr, Context ctx) {
        if (expr.type() == SEXPType.PROM || expr.type() == SEXPType.BCODE) {
            throw new CompilerException("Unexpected type: " + expr.type());
        }

        switch (expr) {
            case NilSXP x -> cb.addInstr(new BcInstr.LdNull());
            case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new BcInstr.LdTrue());
            case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new BcInstr.LdFalse());
            default -> cb.addInstr(new BcInstr.LdConst(cb.addConst(expr)));
        }

        checkTailCall(ctx);
    }

    void compileCall(LangSXP call, Context ctx) {
        var args = call.args();
        switch (call.fun()) {
            case RegSymSXP fun -> compileCallSymFun(fun, args, call, ctx);
            case SpecialSymSXP fun -> throw new IllegalStateException("Trying to call special symbol: " + fun);
            case LangSXP fun -> compileCallExprFun(fun, args, call, ctx);
        }
    }

    private void compileCallSymFun(RegSymSXP fun, ListSXP args, LangSXP call, Context ctx) {
        cb.addInstr(new BcInstr.GetFun(cb.addConst(fun)));
        var nse = MAYBE_NSE_SYMBOLS.contains(fun.name());
        compileArgs(args, nse, ctx);
        cb.addInstr(new BcInstr.Call(cb.addConst(call)));
        checkTailCall(ctx);
    }

    private void compileCallExprFun(LangSXP fun, ListSXP args, LangSXP call, Context ctx) {
        var ncntxt = ctx.makeNonTailContext();
        compileExpr(fun, ncntxt);
        cb.addInstr(new BcInstr.CheckFun());
        compileArgs(args, false, ctx);
        cb.addInstr(new BcInstr.Call(cb.addConst(call)));
        checkTailCall(ctx);
    }

    private void compileArgs(ListSXP args, boolean nse, Context ctx) {
        for (var arg : args) {
            var tag = arg.tag();
            var val = arg.value();

            switch (val) {
                case SymSXP x when x.isMissing() -> {
                    cb.addInstr(new BcInstr.DoMissing());
                    compileTag(tag);
                }
                case SymSXP x when x.isEllipsis() ->
                    // if (!findLocVar("...", ctx))
                    //     notifyWrongDotsUse
                    cb.addInstr(new BcInstr.DoDots());
                case SymSXP x -> {
                    compileNormArg(x, nse, ctx);
                    compileTag(tag);
                }
                case LangSXP x -> {
                    compileNormArg(x, nse, ctx);
                    compileTag(tag);
                }
                case BCodeSXP ignored -> throw new CompilerException("can't compile byte code literals in code");
                default -> {
                    compileConstArg(val);
                    compileTag(tag);
                }
            }
        }
    }

    private void compileNormArg(SEXP arg, boolean nse, Context ctx) {
        cb.addInstr(new BcInstr.MakeProm(cb.addConst(
                nse ? arg : SEXPs.bcode(Compiler.compile(arg, makePromiseContext(ctx)))
        )));
    }

    private void compileConstArg(SEXP arg) {
        switch (arg) {
            case NilSXP ignored -> cb.addInstr(new BcInstr.PushNullArg());
            case LglSXP x when x == SEXPs.TRUE -> cb.addInstr(new BcInstr.PushTrueArg());
            case LglSXP x when x == SEXPs.FALSE -> cb.addInstr(new BcInstr.PushFalseArg());
            default -> cb.addInstr(new BcInstr.PushConstArg(cb.addConst(arg)));
        }
    }

    private Context makePromiseContext(Context ctx) {
        /*
         * cntxt$needRETURNJMP <- TRUE
         * if (! is.null(cntxt$loop))
         * cntxt$loop$gotoOK <- FALSE
         */
        // TODO?
        return new Context(false, true, ctx.cenv());
    }

    private void compileTag(@Nullable String tag) {
        if (tag != null && !tag.isEmpty()) {
            cb.addInstr(new BcInstr.SetTag(cb.addConst(SEXPs.string(tag))));
        }
    }

    private void checkTailCall(Context ctx) {
        if (ctx.tailCall()) {
            cb.addInstr(new BcInstr.Return());
        }
    }
}
