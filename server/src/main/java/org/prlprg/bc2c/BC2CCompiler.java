package org.prlprg.bc2c;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import org.prlprg.bc.*;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {
}

record Value(String expr, boolean protect) {
}

class ByteCodeStack {
    private static final String PROTECT_EXPR = "PROTECT(%s)";
    private static final String UNPROTECT_EXPR = "UNPROTECT(%d)";

    private int max = 0;
    private final Stack<Integer> protects = new Stack<>();

    public String push(String expr, boolean protect) {
        protects.push(0);
        int curr = protects.size();
        max = Math.max(max, curr);

        return set(curr - 1, expr, protect);
    }

    public String pop(int n) {
        var unprotect = 0;
        for (int i = 0; i < n; i++) {
            unprotect += protects.pop();
        }

        if (unprotect > 0) {
            return UNPROTECT_EXPR.formatted(unprotect);
        } else {
            return "";
        }
    }

    public String curr(int n) {
        return register(currIdx(n));
    }

    public int currIdx(int n) {
        int curr = protects.size() - 1;

        assert curr + n >= 0 && curr + n <= max
                : "Invalid offset: %d (curr: %d, max: %d)".formatted(n, curr, max);

        return curr + n;
    }

    public int max() {
        return max;
    }

    public boolean isEmpty() {
        return protects.isEmpty();
    }

    public String set(int i, String expr, boolean protect) {
        assert i >= 0 && i <= max : "Invalid index: %d (max: %d)".formatted(i, max);

        if (protect) {
            expr = protect(i, expr);
        }

        return "%s = %s;".formatted(register(i), expr);
    }

    private String protect(int i, String expr) {
        protects.set(i, protects.get(i) + 1);
        return PROTECT_EXPR.formatted(expr);
    }

    protected String register(int idx) {
        assert idx >= 0;
        return "_" + idx;
    }

    protected Optional<String> registerInitialization() {
        if (max == 0) {
            return Optional.empty();
        }

        var line =
                IntStream.range(0, max)
                        .mapToObj("_%d"::formatted)
                        .collect(Collectors.joining(", ", "Value ", ";"));

        return Optional.of(line);
    }
}

record CompiledClosure(String name, VectorSXP<SEXP> constantPool) {
}

class CModule {
    private final List<CFunction> funs = new ArrayList<>();

    CFunction createFun(String returnType, String name, String args) {
        var fun = new CFunction(returnType, name, args);
        funs.add(fun);
        return fun;
    }

    CompiledClosure compileClosure(Bc bc) {
        var bcHash = Math.abs(bc.hashCode());
        var randomSuffix = UUID.randomUUID().toString().substring(0, 8);
        var name = "f_" + bcHash + "_" + randomSuffix;

        var compiler = new ClosureCompiler(this, name, bc);
        var constants = compiler.compile();

        return new CompiledClosure(name, constants);
    }

    public Iterable<CFunction> funs() {
        return funs;
    }
}

public class BC2CCompiler {
    private final CModule module = new CModule();
    private final Bc bc;

    public BC2CCompiler(Bc bc) {
        this.bc = bc;
    }

    public CompiledModule finish() {
        var compiledClosure = module.compileClosure(bc);

        var file = new CFile();
        file.addInclude("runtime.h");
        module.funs().forEach(fun -> file.addFun(fun, true));

        return new CompiledModule(file, compiledClosure.name(), compiledClosure.constantPool());
    }
}

// TODO: extract labels and cells into its own classes
class ClosureCompiler {
    // FIXME: rename to VAR_RHO
    private static final String NAME_ENV = "ENV";
    // FIXME: rename to VAR_CCP
    private static final String NAME_CP = "CP";

    // FIXME: either all String or all Value
    private static final Value VAL_NULL = new Value("Rsh_NilValue", false);
    private static final String VAL_TRUE = "VAL_TRUE";
    private static final String VAL_FALSE = "VAL_FALSE";

    private final Bc bc;
    private final Map<Integer, Constant> constants = new LinkedHashMap<>();
    private final ByteCodeStack stack = new ByteCodeStack();
    private final Set<Integer> labels = new HashSet<>();
    private final Set<Integer> cells = new HashSet<>();
    private int extraConstPoolIdx;

    protected CModule module;
    protected CFunction fun;
    protected CCode body;

    public ClosureCompiler(CModule module, String name, Bc bc) {
        this.bc = bc;
        this.module = module;
        this.fun = module.createFun("SEXP", name, "SEXP %s, SEXP %s".formatted(NAME_ENV, NAME_CP));
        this.body = fun.add();
        this.extraConstPoolIdx = bc.consts().size() + 1;
    }

    public VectorSXP<SEXP> compile() {
        beforeCompile();

        var code = bc.code();
        for (int i = 0; i < code.size(); i++) {
            compile(code.get(i), i);
        }

        afterCompile();

        return SEXPs.vec(constants());
    }

    private void beforeCompile() {
        fillLabels();
    }

    private void afterCompile() {
        compileCells();
        compileRegisters();
    }

    private void fillLabels() {
        bc.code().forEach(x -> x.labels().forEach(l -> labels.add(l.target())));
    }

    public List<SEXP> constants() {
        return List.copyOf(constants.values().stream().map(Constant::value).toList());
    }

    private void compile(BcInstr instr, int instrIdx) {
        body.comment("begin: " + instr);
        if (labels.contains(instrIdx)) {
            body.line("%s:".formatted(label(instrIdx)));
        }

        switch (instr) {
            case BcInstr.SetVar(var idx) -> compileSetVar(idx);
            case BcInstr.SetVar2(var idx) -> compileSetVar2(idx);
            case BcInstr.LdConst(var idx) -> compileLd(constantVAL(idx));
            case BcInstr.LdTrue() -> compileLd(VAL_TRUE);
            case BcInstr.LdFalse() -> compileLd(VAL_FALSE);
            case BcInstr.GetVar(var idx) -> compileGetVar(idx);
            case BcInstr.Add(var idx) -> compileArith(idx, "ADD_OP");
            case BcInstr.Sub(var idx) -> compileArith(idx, "SUB_OP");
            case BcInstr.Mul(var idx) -> compileArith(idx, "MUL_OP");
            case BcInstr.Div(var idx) -> compileArith(idx, "DIV_OP");
            case BcInstr.Expt(var idx) -> compileArith(idx, "POW_OP");
            case BcInstr.Lt(var idx) -> compileRelop(idx, "LT_OP");
            case BcInstr.Le(var idx) -> compileRelop(idx, "LE_OP");
            case BcInstr.Gt(var idx) -> compileRelop(idx, "GT_OP");
            case BcInstr.Ge(var idx) -> compileRelop(idx, "GE_OP");
            case BcInstr.Eq(var idx) -> compileRelop(idx, "EQ_OP");
            case BcInstr.Ne(var idx) -> compileRelop(idx, "NE_OP");
            case BcInstr.Exp(var idx) -> compileMath1(idx, "EXP_OP");
            case BcInstr.Sqrt(var idx) -> compileMath1(idx, "SQRT_OP");
            case BcInstr.UPlus(var idx) -> compileUnary(idx, "UPLUS_OP");
            case BcInstr.UMinus(var idx) -> compileUnary(idx, "UMINUS_OP");
            case BcInstr.And(var idx) -> compileLogic(idx, "AND_OP");
            case BcInstr.Or(var idx) -> compileLogic(idx, "OR_OP");
            case BcInstr.Not(var idx) -> compileNot(idx);
            case BcInstr.Return() -> compileReturn();
            case BcInstr.Pop() -> pop(1);
            case BcInstr.GetBuiltin(var idx) -> compileGetBuiltin(idx);
            case BcInstr.CallBuiltin(var idx) -> compileCall(idx);
            case BcInstr.Call(var idx) -> compileCall(idx);
            case BcInstr.PushArg() -> compilePushArg();
            case BcInstr.PushNullArg() -> compilePushConstArg(VAL_NULL.expr());
            case BcInstr.PushTrueArg() -> compilePushConstArg(VAL_TRUE);
            case BcInstr.PushFalseArg() -> compilePushConstArg(VAL_FALSE);
            case BcInstr.PushConstArg(var idx) -> compilePushConstArg(constantVAL(idx));
            case BcInstr.SetTag(var idx) -> compileSetTag(idx);
            case BcInstr.BrIfNot(var call, var label) -> compileBrIfNot(call, label);
            case BcInstr.Goto(var label) -> compileGoto(label);
            case BcInstr.Invisible() -> compileInvisible();
            case BcInstr.LdNull() -> compileLdNull();
            case BcInstr.GetFun(var idx) -> compileGetFun(idx);
            case BcInstr.MakeClosure(var idx) -> compileMakeClosure(idx);
            case BcInstr.CheckFun() -> compileCheckFun();
            case BcInstr.MakeProm(var idx) -> compileMakeProm(idx);
            case BcInstr.Dollar(var call, var symbol) -> compilerDollar(call, symbol);

            default -> throw new UnsupportedOperationException(instr + ": not supported");
        }
        body.comment("end: " + instr);
        body.nl();
    }

    private void compilerDollar(ConstPool.Idx<LangSXP> call, ConstPool.Idx<RegSymSXP> symbol) {
        popPush(1, "Rsh_dollar(%s, %s, %s, %s)".formatted(stack.curr(0), constantSXP(call), constantSXP(symbol), NAME_ENV), false);
    }

    private void compileMakeProm(ConstPool.Idx<SEXP> idx) {
        body.line(
                "Rsh_make_prom(%s, &%s, &%s, %s, %s);"
                        .formatted(stack.curr(-2), stack.curr(-1), stack.curr(0), constantSXP(idx), NAME_ENV));
    }

    private void compileCheckFun() {
        body.line("Rsh_check_fun(%s);".formatted(stack.curr(0)));
        initCallFrame();
    }

    private void compileMakeClosure(ConstPool.Idx<VecSXP> idx) {
        var cls = bc.consts().get(idx);

        if (cls.get(1) instanceof BCodeSXP closureBody) {
            var compiledClosure = module.compileClosure(closureBody.bc());
            var cpConst = createExtraConstant(compiledClosure.constantPool());
            push(
                    "Rsh_native_closure(%s, &%s, %s, %s)"
                            .formatted(constantSXP(idx), compiledClosure.name(), constantSXP(cpConst), NAME_ENV),
                    false);
        } else {
            throw new UnsupportedOperationException("Unsupported body: " + body);
        }
    }

    private void compileCall(ConstPool.Idx<LangSXP> idx) {
        var call = constantSXP(idx);
        var fun = stack.curr(-2);
        var args = stack.curr(-1);

        // FIXME: how do we signal back the whether the value needs protection?
        var c = "Rsh_call(%s, %s, %s, %s)".formatted(call, fun, args, NAME_ENV);
        // we are going to pop 4 elements from the stack - all the until the beginning of the call frame
        popPush(3, c, false);
    }

    private void compileGetFun(ConstPool.Idx<RegSymSXP> idx) {
        push("Rsh_getFun(%s, %s)".formatted(constantSXP(idx), NAME_ENV), false);
        initCallFrame();
    }

    private void compileLdNull() {
        visible(true);
        push(VAL_NULL);
    }

    private void compileInvisible() {
        visible(false);
    }

    private void compileGoto(BcLabel label) {
        body.line("goto %s;".formatted(label(label.target())));
    }

    private void compileBrIfNot(ConstPool.Idx<LangSXP> call, BcLabel label) {
        var curr = stack.curr(0);
        var unprotect = stack.pop(1);
        body.line(
                "if (!Rsh_is_true(%s, %s, %s)) { %s; goto %s; }"
                        .formatted(curr, constantSXP(call), NAME_ENV, unprotect, label(label.target())));
        body.line(unprotect + ";");
    }

    private void compileSetTag(ConstPool.Idx<StrOrRegSymSXP> idx) {
        body.line(
                """
                        if (TYPEOF(VAL_SXP(%s)) != SPECIALSXP) {
                          RSH_SET_TAG(%s, %s);
                        }"""
                        .formatted(stack.curr(-2), stack.curr(0), constantVAL(idx)));
    }

    private void compilePushArg() {
        body.line(
                "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-2), stack.curr(-1), stack.curr(0)));
        pop(1);
    }

    private void compilePushConstArg(String v) {
        body.line(
                "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-1), stack.curr(0), v));
    }

    private void compileRegisters() {
        var code = stack.registerInitialization();
        if (code.isPresent()) {
            var sec = fun.insertAbove(body);
            sec.line(code.get());
        }
    }

    private void compileCells() {
        if (cells.isEmpty()) {
            return;
        }

        var sec = fun.insertAbove(body);
        var line =
                cells.stream()
                        .map("C%d = R_NilValue"::formatted)
                        .collect(Collectors.joining(", ", "BCell ", ";"));
        sec.line(line);
    }

    private void compileGetBuiltin(ConstPool.Idx<RegSymSXP> idx) {
        var name = bc.consts().get(idx).name();
        push("Rsh_get_builtin(\"%s\")".formatted(name), false);
        initCallFrame();
    }

    private void initCallFrame() {
        push(VAL_NULL);
        push(VAL_NULL);
    }

    private void compileGetVar(ConstPool.Idx<RegSymSXP> idx) {
        push(
                "Rsh_get_var(%s, %s, FALSE, FALSE, &%s)".formatted(constantSXP(idx), NAME_ENV, cell(idx)),
                false);
    }

    private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
        body.line(
                "Rsh_set_var(%s, %s, %s, &%s);"
                        .formatted(constantSXP(idx), stack.curr(0), NAME_ENV, cell(idx)));
    }

    private void compileSetVar2(ConstPool.Idx<RegSymSXP> idx) {
        body.line("Rsh_set_var2(%s, %s, %s);".formatted(constantSXP(idx), stack.curr(0), NAME_ENV));
    }

    private void compileReturn() {
        pop(1);
        assert stack.isEmpty() : "Stack not empty (%d)".formatted(stack.currIdx(0));
        body.line("return Rsh_return(%s);".formatted(stack.curr(1)));
    }

    // FIXME: refactor
    private void compileMath1(ConstPool.Idx<LangSXP> idx, String op) {
        var call = constantSXP(idx);
        var arg = stack.curr(0);
        popPush(1, "Rsh_math1(%s, %s, %s, %s)".formatted(call, op, arg, NAME_ENV), false);
    }

    private void compileUnary(ConstPool.Idx<LangSXP> idx, String op) {
        var call = constantSXP(idx);
        var arg = stack.curr(0);
        popPush(1, "Rsh_unary(%s, %s, %s, %s)".formatted(call, op, arg, NAME_ENV), false);
    }

    private void compileNot(ConstPool.Idx<LangSXP> idx) {
        var call = constantSXP(idx);
        var arg = stack.curr(0);
        popPush(1, "Rsh_not(%s, %s, %s)".formatted(call, arg, NAME_ENV), false);
    }

    private void compileArith(ConstPool.Idx<LangSXP> idx, String op) {
        var call = constantSXP(idx);
        var lhs = stack.curr(-1);
        var rhs = stack.curr(0);
        popPush(2, "Rsh_arith(%s, %s, %s, %s, %s)".formatted(call, op, lhs, rhs, NAME_ENV), false);
    }

    private void compileLogic(ConstPool.Idx<LangSXP> idx, String op) {
        var call = constantSXP(idx);
        var lhs = stack.curr(-1);
        var rhs = stack.curr(0);
        popPush(2, "Rsh_logic(%s, %s, %s, %s, %s)".formatted(call, op, lhs, rhs, NAME_ENV), false);
    }

    private void compileRelop(ConstPool.Idx<LangSXP> idx, String op) {
        var call = constantSXP(idx);
        var lhs = stack.curr(-1);
        var rhs = stack.curr(0);
        popPush(2, "Rsh_relop(%s, %s, %s, %s, %s)".formatted(call, op, lhs, rhs, NAME_ENV), false);
    }

    private void compileLd(String constant) {
        push(constant, false);
    }

    // API

    private void pop(int n) {
        var unprotect = stack.pop(n);
        if (!unprotect.isEmpty()) {
            body.line(unprotect + ";");
        }
    }

    private String push(String expr, boolean protect) {
        body.line(stack.push(expr, protect));
        return stack.curr(0);
    }

    private String push(String expr) {
        return push(expr, true);
    }

    private void push(Value value) {
        push(value.expr(), value.protect());
    }

    public void popPush(int n, String expr, boolean protect) {
        set(stack.currIdx(-n + 1), expr, false);
        pop(n);
        push(stack.curr(1), protect);
    }

    private void set(int i, String expr, boolean protect) {
        body.line(stack.set(i, expr, protect));
    }

    private String constantSXP(ConstPool.Idx<? extends SEXP> idx) {
        var c = getConstant(idx);
        return constantSXP(c);
    }

    private String constantSXP(Constant c) {
        return "Rsh_const(%s, %d)".formatted(NAME_CP, c.id());
    }

    private String constantVAL(ConstPool.Idx<? extends SEXP> idx) {
        var c = getConstant(idx);

        var f =
                switch (c.value()) {
                    case IntSXP v when v.size() == 1 -> "Rsh_const_int";
                    case RealSXP v when v.size() == 1 -> "Rsh_const_dbl";
                    case LglSXP v when v.size() == 1 -> "Rsh_const_lgl";
                    case SEXP _ -> "Rsh_const_sxp";
                };

        return "%s(%s, %d)".formatted(f, NAME_CP, c.id());
    }

    private Constant getConstant(ConstPool.Idx<? extends SEXP> idx) {
        return constants.computeIfAbsent(
                idx.idx(),
                ignored -> {
                    var next = constants.size();
                    return new Constant(next, bc.consts().get(idx));
                });
    }

    private Constant createExtraConstant(SEXP v) {
        var next = constants.size();
        var c = new Constant(next, v);
        constants.put(extraConstPoolIdx++, c);
        return c;
    }

    private String label(int instrIndex) {
        labels.add(instrIndex);
        return "L%d".formatted(instrIndex);
    }

    private String cell(ConstPool.Idx<? extends SEXP> idx) {
        var id = getConstant(idx).id();
        cells.add(id);
        return "C%d".formatted(id);
    }

    private void visible(boolean visible) {
        body.line("R_Visible = %s;".formatted(visible ? "TRUE" : "FALSE"));
    }
}
