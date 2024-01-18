package org.prlprg.compile;

import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.sexp.*;
import org.prlprg.util.Left;
import org.prlprg.util.NotImplementedException;
import org.prlprg.util.Right;

import javax.annotation.Nullable;
import java.util.*;

public class Compiler implements SEXPConsts {
    private static final Set<String> MAYBE_NSE_SYMBOLS = Set.of("bquote");

    private final Bc.Builder cb = new Bc.Builder();

    public static Bc compileFun(CloSXP source) {
        var body = source.body();

        // FIXME: this is wrong -- need a special cmpFun to include the formals and others. EMPTY_ENV is also wrong
        return compile(body, SEXPConsts.EMPTY_ENV);
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
            case SymSXP e -> compileSym(e, ctx);
            default -> compileConst(expr, ctx);
        }
    }

    private void compileSym(SymSXP e, Context ctx) {
        throw new NotImplementedException();
    }

    private void compileConst(SEXP expr, Context ctx) {
        if (expr.type() == SEXPType.PROM || expr.type() == SEXPType.BCODE) {
            throw new CompilerException("Unexpected type: " + expr.type());
        }

        switch (expr) {
            case NilSXP x -> cb.addInstr(new BcInstr.LdNull());
            case LglSXP x when x == TRUE -> cb.addInstr(new BcInstr.LdTrue());
            case LglSXP x when x == FALSE -> cb.addInstr(new BcInstr.LdFalse());
            default -> cb.addInstr(new BcInstr.LdConst(cb.addConst(expr)));
        }

        checkTailCall(ctx);
    }

    void compileCall(LangSXP call, Context ctx) {
        var args = call.args();
        switch (call.fun()) {
            case SymSXP fun -> compileCallSymFun(fun, args, call, ctx);
            case LangSXP fun -> compileCallExprFun(fun, args, ctx);
        }
    }

    private void compileCallExprFun(LangSXP fun, ListSXP args, Context ctx) {
        throw new NotImplementedException();
    }

    private void compileCallSymFun(SymSXP fun, ListSXP args, LangSXP call, Context ctx) {
        cb.addInstr(new BcInstr.GetFun(cb.addConst(fun)));
        var nse = MAYBE_NSE_SYMBOLS.contains(fun.name());
        compileArgs(args, nse, ctx);
        cb.addInstr(new BcInstr.Call(cb.addConst(call)));
        checkTailCall(ctx);
    }

    private void compileArgs(ListSXP args, boolean nse, Context ctx) {
        for (var arg : args) {
            var tag = arg.tag();
            var val = arg.value();

            switch (val) {
                case SymSXP x when x == ELIPSIS -> throw new NotImplementedException();
                case SymSXP x when x == MISSING_ARG -> {
                    cb.addInstr(new BcInstr.DoMissing());
                    compileTag(tag, ctx);
                }
                case SymSXP x -> {
                    compileNormArg(x, nse, ctx);
                    compileTag(tag, ctx);
                }
                case LangSXP x -> {
                    compileNormArg(x, nse, ctx);
                    compileTag(tag, ctx);
                }
                default -> {
                    compileConstArg(val, ctx);
                    compileTag(tag, ctx);
                }
            }
        }
    }

    private void compileConstArg(SEXP arg, Context ctx) {
        switch (arg) {
            case NilSXP x -> cb.addInstr(new BcInstr.PushNullArg());
            case LglSXP x when x == TRUE -> cb.addInstr(new BcInstr.PushTrueArg());
            case LglSXP x when x == FALSE -> cb.addInstr(new BcInstr.PushFalseArg());
            default -> cb.addInstr(new BcInstr.PushConstArg(cb.addConst(arg)));
        }
    }

    private void compileNormArg(SEXP arg, boolean nse, Context ctx) {
        cb.addInstr(new BcInstr.MakeProm(cb.addConst(
                nse ? arg : new BCodeSXP(Compiler.compile(arg, makePromiseContext(ctx)))
        )));
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

    private void compileTag(@Nullable String tag, Context ctx) {
        throw new NotImplementedException();
    }

    private void checkTailCall(Context ctx) {
        if (ctx.tailCall()) {
            cb.addInstr(new BcInstr.Return());
        }
    }
}
