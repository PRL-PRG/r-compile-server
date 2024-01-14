package nrc.bc;

import nrc.RPlatform;
import nrc.sexp.*;
import nrc.util.Left;
import nrc.util.Right;

import java.util.*;

class CodeBuffer {
    private final List<Integer> code = new ArrayList<>();
    private final Map<SEXP, Integer> consts = new HashMap<>();

    public int putConst(SEXP c) {
        return consts.computeIfAbsent(c, (ignored) -> consts.size());
    }

    public void putCode(int op) {
        code.add(op);
    }

    public void putCode(int op, int... args) {
        code.add(op);
        for (var arg : args) {
            code.add(arg);
        }
    }

    public BCodeSXP toBCSXP() {
        var codeCopy = new ArrayList<>(code);
        codeCopy.addFirst(RPlatform.BC_VERSION);

        var constsCopy = new ArrayList<SEXP>(consts.size());
        for (var e : consts.entrySet()) {
            constsCopy.set(e.getValue(), e.getKey());
        }

        return new BCodeSXP(codeCopy, constsCopy);
    }
}

record Envir(EnvSXP env) {

}

record Context(boolean topLevel, boolean tailCall, Envir cenv) {
    Context makePromisecContext() {
        var copy = new Context(false, true, cenv);
        return copy;
    }
}

public class Compiler implements OpCodes, SEXPConsts {
    private static final Set<String> MAYBE_NSE_SYMBOLS = Set.of("bquote");

    private static final CodeBuffer cb = new CodeBuffer();

    public SEXP compile(SEXP expr, EnvSXP env) {
        var ctx = new Context(true, true, new Envir(env));
        // TODO: add local variables into the environment
        compileExpr(expr, ctx);

        return cb.toBCSXP();
    }

    private void compileExpr(SEXP expr, Context ctx) {
        // TODO: check we do not attempt to compiler BCSXP or PROMSXP
        switch (expr) {
            case LangSXP e -> compileCall(e, ctx);
            case SymSXP e -> compileSym(e, ctx);
            default -> compileConst(expr, ctx);
        }
    }

    private Object compileSym(SymSXP e, Context ctx) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'compileSym'");
    }

    private void compileConst(SEXP expr, Context ctx) {
        if (expr.getType() == SEXPTypes.PROMSXP || expr.getType() == SEXPTypes.BCODESXP) {
            throw new CompilerException("Unexpected type: " + expr.getType());
        }

        switch (expr) {
            case NilSXP x -> cb.putCode(OP_LDNULL);
            case LglSXP x when x == TRUE -> cb.putCode(OP_LDTRUE);
            case LglSXP x when x == FALSE -> cb.putCode(OP_LDFALSE);
            default -> {
                var idx = cb.putConst(expr);
                cb.putCode(OP_LDCONST, idx);
            }
        }

        checkTailCall(ctx);
    }

    void compileCall(LangSXP call, Context ctx) {
        var args = call.getArgs();
        switch (call.getFun()) {
            case Left(var fun) -> compileCallSymFun(fun, args, call, ctx);
            case Right(var fun) -> compileCallExprFun(fun, args, ctx);
        }
    }

    private void compileCallExprFun(LangSXP fun, ListSXP args, Context ctx) {
    }

    private void compileCallSymFun(SymSXP fun, ListSXP args, LangSXP call, Context ctx) {
        var idx = cb.putConst(fun);
        cb.putCode(OP_GETFUN, idx);
        var nse = MAYBE_NSE_SYMBOLS.contains(fun.getName());
        compileArgs(args, nse, ctx);
        idx = cb.putConst(call);
        cb.putCode(OP_CALL, idx);
        checkTailCall(ctx);
    }

    private void compileArgs(ListSXP args, boolean nse, Context ctx) {
        for (var arg : args) {
            var tag = arg.a();
            var val = arg.b();

            switch (val) {
                case SymSXP x when x == ELIPSIS -> throw new UnsupportedOperationException();
                case SymSXP x when x == MISSING_ARG -> {
                    cb.putCode(OP_DOMISSING);
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
            case NilSXP x -> cb.putCode(OP_PUSHNULLARG);
            case LglSXP x when x == TRUE -> cb.putCode(OP_PUSHTRUEARG);
            case LglSXP x when x == FALSE -> cb.putCode(OP_PUSHFALSEARG);
            default -> {
                var idx = cb.putConst(arg);
                cb.putCode(OP_PUSHCONSTARG, idx);
            }
        }
    }

    private void compileNormArg(SEXP arg, boolean nse, Context ctx) {
        var idx = 0;
        if (nse) {
            idx = cb.putConst(arg);
        } else {
            var code = new Compiler().compile(arg, makePromiseContext(ctx));
            idx = cb.putConst(code);
        }
        cb.putCode(OP_MAKEPROM, idx);

    }

    private SEXP compile(SEXP expr, Context ctx) {
        compileExpr(expr, ctx);
        return cb.toBCSXP();
    }

    private Context makePromiseContext(Context ctx) {
        /*
         * cntxt$needRETURNJMP <- TRUE
         * if (! is.null(cntxt$loop))
         * cntxt$loop$gotoOK <- FALSE
         */
        return new Context(false, true, ctx.cenv());
    }

    private void compileTag(Optional<String> tag, Context ctx) {
    }

    private void checkTailCall(Context ctx) {
        if (ctx.tailCall()) {
            cb.putCode(OP_RETURN);
        }
    }

    public SEXP compileFun(CloSXP source) {
        var body = source.getBody();

        // FIXME: this is wrong -- need a special cmpFun to include the formals and others
        var bc = compile(body, new EnvSXP());
        return bc;
    }
}
