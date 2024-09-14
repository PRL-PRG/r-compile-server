package org.prlprg.bc2c;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import org.prlprg.bc.*;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {
}

class ByteCodeStack {
    private int max = 0;
    private int top = -1;

    public String push() {
        top++;
        max = Math.max(max, top);
        return "&" + variable();
    }

    public String pop() {
        if (top < 0) {
            throw new IllegalArgumentException("Stack underflow: %d".formatted(top));
        }
        String v = variable();
        top--;
        return v;
    }

    private String variable() {
        if (top < 0 || top > max) {
            throw new IllegalStateException("Invalid stack state (top: %d, max: %d)".formatted(top, max));
        }

        return "_" + top;
    }

    public int max() {
        return max;
    }

    public boolean isEmpty() {
        return top == -1;
    }

    protected Optional<String> registerInitialization() {
        if (max == 0) {
            return Optional.empty();
        }

        var line =
                IntStream.range(0, max + 1)
                        .mapToObj("_%d"::formatted)
                        .collect(Collectors.joining(", ", "Value ", ";"));

        return Optional.of(line);
    }

    public int top() {
        return top;
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

    private static final String VAL_NULL = "Rsh_NilValue";
    private static final String VAL_TRUE = "VAL_TRUE";
    private static final String VAL_FALSE = "VAL_FALSE";

    private final Bc bc;
    private final ByteCodeStack stack = new ByteCodeStack();
    private final Map<Integer, Constant> constants = new LinkedHashMap<>();
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

        if (!stack.isEmpty()) {
            throw new IllegalStateException("Stack not empty: %d".formatted(stack.top()));
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
        bc.code().forEach(x -> x.label().ifPresent(l -> labels.add(l.target())));
    }

    public List<SEXP> constants() {
        return List.copyOf(constants.values().stream().map(Constant::value).toList());
    }

    private void compile(BcInstr instr, int pc) {
        if (labels.contains(pc)) {
            body.line("%s:".formatted(label(pc)));
        }

        var builder = new InstrBuilder(instr);
        var code = switch (instr) {
            case BcInstr.Return() -> "return %s;".formatted(builder.compile());
            case BcInstr.LdConst(var idx) -> builder.arg(0, constantVAL(idx)).compile() + ";";
            case BcInstr.PushConstArg(var idx) -> builder.arg(0, constantVAL(idx)).compile() + ";";
            default -> {
                var c = builder.compile();
                if (instr.label().orElse(null) instanceof BcLabel l) {
                    yield "if (%s) {\ngoto %s;\n}".formatted(c, label(l));
                } else {
                    yield c + ";";
                }
            }
        };

        body.line(code);
    }

    class InstrBuilder {
        private final BcInstr instr;
        private final List<String> args = new ArrayList<>();
        private boolean needsRho;
        private String fun;

        public InstrBuilder(BcInstr instr) {
            this.instr = instr;
            for (var x : instr.args()) {
                this.args.add(constantSXP(x));
            }
            if (instr.needsRho()) {
                this.needsRho = true;
            }
            this.fun = "Rsh_" + instr.getClass().getSimpleName();
        }

        public InstrBuilder args(String... args) {
            this.args.addAll(List.of(args));
            return this;
        }

        public InstrBuilder rho() {
            needsRho = true;
            return this;
        }

        public String compile() {
            var args = new ArrayList<String>(Math.max(instr.pop(), instr.push()) + this.args.size());

            // play the stack effects
            for (int i = 0; i < instr.pop(); i++) {
                args.add(0, stack.pop());
            }
            for (int i = 0; i < instr.push(); i++) {
                var e = stack.push();
                if (args.size() < i + 1) {
                    args.add(e);
                } else {
                    args.set(i, e);
                }
            }

            args.addAll(this.args);

            if (needsRho) {
                args.add(NAME_ENV);
            }

            return fun + "(" + String.join(", ", args) + ")";
        }

        public InstrBuilder arg(int i, String s) {
            args.set(i, s);
            return this;
        }

        public InstrBuilder fun(String name) {
            this.fun = name;
            return this;
        }
    }

//    private void compile(BcInstr instr, int instrIdx) {
//        body.comment("begin: " + instr);
//        if (labels.contains(instrIdx)) {
//            body.line("%s:".formatted(label(instrIdx)));
//        }
//
//        switch (instr) {
//            case BcInstr.SetVar(var idx) -> compileSetVar(idx);
//            case BcInstr.SetVar2(var idx) -> compileSetVar2(idx);
//            case BcInstr.LdConst(var idx) -> compileLd(constantVAL(idx));
//            case BcInstr.LdTrue() -> compileLd(VAL_TRUE);
//            case BcInstr.LdFalse() -> compileLd(VAL_FALSE);
//            case BcInstr.GetVar(var idx) -> compileGetVar(idx, false);
//            case BcInstr.GetVarMissOk(var idx) -> compileGetVar(idx, true);
//            case BcInstr.Add(var idx) -> compileArith(idx, "ADD_OP");
//            case BcInstr.Sub(var idx) -> compileArith(idx, "SUB_OP");
//            case BcInstr.Mul(var idx) -> compileArith(idx, "MUL_OP");
//            case BcInstr.Div(var idx) -> compileArith(idx, "DIV_OP");
//            case BcInstr.Expt(var idx) -> compileArith(idx, "POW_OP");
//            case BcInstr.Lt(var idx) -> compileRelop(idx, "LT_OP");
//            case BcInstr.Le(var idx) -> compileRelop(idx, "LE_OP");
//            case BcInstr.Gt(var idx) -> compileRelop(idx, "GT_OP");
//            case BcInstr.Ge(var idx) -> compileRelop(idx, "GE_OP");
//            case BcInstr.Eq(var idx) -> compileRelop(idx, "EQ_OP");
//            case BcInstr.Ne(var idx) -> compileRelop(idx, "NE_OP");
//            case BcInstr.Exp(var idx) -> compileMath1(idx, "EXP_OP");
//            case BcInstr.Sqrt(var idx) -> compileMath1(idx, "SQRT_OP");
//            case BcInstr.UPlus(var idx) -> compileUnary(idx, "UPLUS_OP");
//            case BcInstr.UMinus(var idx) -> compileUnary(idx, "UMINUS_OP");
//            case BcInstr.And(var idx) -> compileLogic(idx, "AND_OP");
//            case BcInstr.Or(var idx) -> compileLogic(idx, "OR_OP");
//            case BcInstr.Not(var idx) -> compileNot(idx);
//            case BcInstr.Return() -> compileReturn();
//            case BcInstr.Pop() -> pop(1);
//            case BcInstr.GetBuiltin(var idx) -> compileGetBuiltin(idx);
//            case BcInstr.CallBuiltin(var idx) -> compileCall(idx);
//            case BcInstr.Call(var idx) -> compileCall(idx);
//            case BcInstr.PushArg() -> compilePushArg();
//            case BcInstr.PushNullArg() -> compilePushConstArg(VAL_NULL.expr());
//            case BcInstr.PushTrueArg() -> compilePushConstArg(VAL_TRUE);
//            case BcInstr.PushFalseArg() -> compilePushConstArg(VAL_FALSE);
//            case BcInstr.PushConstArg(var idx) -> compilePushConstArg(constantVAL(idx));
//            case BcInstr.SetTag(var idx) -> compileSetTag(idx);
//            case BcInstr.BrIfNot(var call, var label) -> compileBrIfNot(call, label);
//            case BcInstr.Goto(var label) -> compileGoto(label);
//            case BcInstr.Invisible() -> compileInvisible();
//            case BcInstr.LdNull() -> compileLdNull();
//            case BcInstr.GetFun(var idx) -> compileGetFun(idx);
//            case BcInstr.MakeClosure(var idx) -> compileMakeClosure(idx);
//            case BcInstr.CheckFun() -> compileCheckFun();
//            case BcInstr.MakeProm(var idx) -> compileMakeProm(idx);
//            case BcInstr.Dollar(var call, var symbol) -> compilerDollar(call, symbol);
//            case BcInstr.StartSubsetN(var call, var after) -> compileStartDispatchN("[", call, after);
//            case BcInstr.StartSubset2N(var call, var after) -> compileStartDispatchN("[[", call, after);
//            case BcInstr.VecSubset(var call) -> compileVecSubset(call, false);
//            case BcInstr.VecSubset2(var call) -> compileVecSubset(call, true);
//            case BcInstr.StartAssign(var symbol) -> compileStartAssign(symbol);
//            case BcInstr.EndAssign(var symbol) -> compileEndAssign(symbol);
//            case BcInstr.StartSubassignN(var call, var after) -> compileStartAssignDispatchN("[<-", call, after);
//            case BcInstr.StartSubassign2N(var call, var after) -> compileStartAssignDispatchN("[[<-", call, after);
//            case BcInstr.VecSubassign(var call) -> compileVecSubassign(call, false);
//            case BcInstr.VecSubassign2(var call) -> compileVecSubassign(call, true);
//            default -> compileInstr(instr);
//        }
//        body.comment("end: " + instr);
//        body.nl();
//    }

//    private void compileVecSubassign(ConstPool.Idx<LangSXP> call, boolean sub2) {
//        popPush(3, "Rsh_vecsubassign(%s, %s, %s, %s, %s, %s)".formatted(stack.read(-2), stack.read(-1), stack.read(0), constantSXP(call), NAME_ENV, sub2 ? "TRUE" : "FALSE"), false);
//    }
//
//    private void compileStartAssignDispatchN(String generic, ConstPool.Idx<LangSXP> call, BcLabel after) {
//        body.line("if (Rsh_start_assign_dispatch_n(\"%s\", &%s, &%s, %s, %s, &%s)) {".formatted(generic, stack.read(-1), stack.read(0), constantSXP(call), NAME_ENV, stack.read(-1)));
//        compileGoto(after);
//        body.line("}");
//    }
//
//    private void compileEndAssign(ConstPool.Idx<RegSymSXP> symbol) {
//        body.line("Rsh_endassign(%s, %s, %s, %s, %s, &%s);".formatted(stack.read(-2), stack.read(-1), stack.read(0), constantSXP(symbol), NAME_ENV, cell(symbol)));
//        pop(2);
//    }
//
//    private void compileStartAssign(ConstPool.Idx<RegSymSXP> symbol) {
//        body.comment("");
//        push(VAL_NULL);
//        push(VAL_NULL);
//        push(VAL_NULL);
//        body.line("Rsh_startassign(%s, %s, &%s, &%s, &%s, &%s, &%s);".formatted(constantSXP(symbol), NAME_ENV, cell(symbol), stack.read(-3), stack.read(-2), stack.read(-1), stack.read(0)));
//    }
//
//    private void compileVecSubset(ConstPool.Idx<LangSXP> call, boolean sub2) {
//        popPush(2, "Rsh_vecsubset(%s, %s, %s, %s, %s)".formatted(stack.read(-1), stack.read(0), constantSXP(call), NAME_ENV, sub2 ? "TRUE" : "FALSE"), false);
//    }
//
//    private void compileStartDispatchN(String generic, ConstPool.Idx<LangSXP> call, BcLabel after) {
//        body.line("if (Rsh_start_dispatch_n(\"%s\", %s, %s, %s, &%s)) {".formatted(generic, stack.read(0), constantSXP(call), NAME_ENV, stack.read(0)));
//        compileGoto(after);
//        body.line("}");
//    }
//
//    private void compilerDollar(ConstPool.Idx<LangSXP> call, ConstPool.Idx<RegSymSXP> symbol) {
//        popPush(1, "Rsh_dollar(%s, %s, %s, %s)".formatted(stack.read(0), constantSXP(call), constantSXP(symbol), NAME_ENV), false);
//    }
//
//    private void compileMakeProm(ConstPool.Idx<SEXP> idx) {
//        body.line(
//                "Rsh_make_prom(%s, &%s, &%s, %s, %s);"
//                        .formatted(stack.read(-2), stack.read(-1), stack.read(0), constantSXP(idx), NAME_ENV));
//    }
//
//    private void compileCheckFun() {
//        body.line("Rsh_check_fun(%s);".formatted(stack.read(0)));
//        initCallFrame();
//    }
//
//    private void compileMakeClosure(ConstPool.Idx<VecSXP> idx) {
//        var cls = bc.consts().get(idx);
//
//        if (cls.get(1) instanceof BCodeSXP closureBody) {
//            var compiledClosure = module.compileClosure(closureBody.bc());
//            var cpConst = createExtraConstant(compiledClosure.constantPool());
//            push(
//                    "Rsh_native_closure(%s, &%s, %s, %s)"
//                            .formatted(constantSXP(idx), compiledClosure.name(), constantSXP(cpConst), NAME_ENV),
//                    false);
//        } else {
//            throw new UnsupportedOperationException("Unsupported body: " + body);
//        }
//    }
//
//    private void compileCall(ConstPool.Idx<LangSXP> idx) {
//        var call = constantSXP(idx);
//        var fun = stack.read(-2);
//        var args = stack.read(-1);
//
//        // FIXME: how do we signal back the whether the value needs protection?
//        var c = "Rsh_call(%s, %s, %s, %s)".formatted(call, fun, args, NAME_ENV);
//        // we are going to pop 4 elements from the stack - all the until the beginning of the call frame
//        popPush(3, c, false);
//    }
//
//    private void compileGetFun(ConstPool.Idx<RegSymSXP> idx) {
//        push("Rsh_getFun(%s, %s)".formatted(constantSXP(idx), NAME_ENV), false);
//        initCallFrame();
//    }
//
//    private void compileLdNull() {
//        visible(true);
//        push(VAL_NULL);
//    }
//
//    private void compileInvisible() {
//        visible(false);
//    }
//
//    private void compileGoto(BcLabel label) {
//        body.line("goto %s;".formatted(label(label.target())));
//    }
//
//    private void compileSetTag(ConstPool.Idx<StrOrRegSymSXP> idx) {
//        body.line(
//                """
//                        if (TYPEOF(VAL_SXP(%s)) != SPECIALSXP) {
//                          RSH_SET_TAG(%s, %s);
//                        }"""
//                        .formatted(stack.read(-2), stack.read(0), constantVAL(idx)));
//    }
//
//    private void compilePushArg() {
//        body.line(
//                "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.read(-2), stack.read(-1), stack.read(0)));
//    }
//
//    private void compilePushConstArg(String v) {
//        body.line(
//                "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.read(-1), stack.read(0), v));
//    }

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

//    private void compileGetBuiltin(ConstPool.Idx<RegSymSXP> idx) {
//        var name = bc.consts().get(idx).name();
//        push("Rsh_get_builtin(\"%s\")".formatted(name), false);
//        initCallFrame();
//    }
//
//    private void initCallFrame() {
//        push(VAL_NULL);
//        push(VAL_NULL);
//    }
//
//    private void compileGetVar(ConstPool.Idx<RegSymSXP> idx, boolean missOK) {
//        push(
//                "Rsh_get_var(%s, %s, FALSE, %s, &%s)".formatted(constantSXP(idx), NAME_ENV, missOK ? "TRUE" : "FALSE", cell(idx)),
//                false);
//    }
//
//    private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
//        body.line(
//                "Rsh_set_var(%s, %s, %s, &%s);"
//                        .formatted(constantSXP(idx), stack.read(0), NAME_ENV, cell(idx)));
//    }
//
//    private void compileSetVar2(ConstPool.Idx<RegSymSXP> idx) {
//        body.line("Rsh_set_var2(%s, %s, %s);".formatted(constantSXP(idx), stack.read(0), NAME_ENV));
//    }
//
//    // FIXME: refactor
//    private void compileMath1(ConstPool.Idx<LangSXP> idx, String op) {
//        var call = constantSXP(idx);
//        var arg = stack.read(0);
//        popPush(1, "Rsh_math1(%s, %s, %s, %s)".formatted(call, op, arg, NAME_ENV), false);
//    }
//
//    private void compileUnary(ConstPool.Idx<LangSXP> idx, String op) {
//        var call = constantSXP(idx);
//        var arg = stack.read(0);
//        popPush(1, "Rsh_unary(%s, %s, %s, %s)".formatted(call, op, arg, NAME_ENV), false);
//    }
//
//    private void compileNot(ConstPool.Idx<LangSXP> idx) {
//        var call = constantSXP(idx);
//        var arg = stack.read(0);
//        popPush(1, "Rsh_not(%s, %s, %s)".formatted(call, arg, NAME_ENV), false);
//    }
//
//    private void compileArith(ConstPool.Idx<LangSXP> idx, String op) {
//        var call = constantSXP(idx);
//        var lhs = stack.read(-1);
//        var rhs = stack.read(0);
//        popPush(2, "Rsh_arith(%s, %s, %s, %s, %s)".formatted(call, op, lhs, rhs, NAME_ENV), false);
//    }
//
//    private void compileLogic(ConstPool.Idx<LangSXP> idx, String op) {
//        var call = constantSXP(idx);
//        var lhs = stack.read(-1);
//        var rhs = stack.read(0);
//        popPush(2, "Rsh_logic(%s, %s, %s, %s, %s)".formatted(call, op, lhs, rhs, NAME_ENV), false);
//    }
//
//    private void compileRelop(ConstPool.Idx<LangSXP> idx, String op) {
//        var call = constantSXP(idx);
//        var lhs = stack.read(-1);
//        var rhs = stack.read(0);
//        popPush(2, "Rsh_relop(%s, %s, %s, %s, %s)".formatted(call, op, lhs, rhs, NAME_ENV), false);
//    }
//
//    private void compileLd(String constant) {
//        push(constant, false);
//    }

    // API

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

    private String label(BcLabel l) {
        return "L%d".formatted(l.target());
    }

    private String label(int target) {
        labels.add(target);
        return "L%d".formatted(target);
    }

    private String cell(ConstPool.Idx<? extends SEXP> idx) {
        var id = getConstant(idx).id();
        cells.add(id);
        return "C%d".formatted(id);
    }
}
