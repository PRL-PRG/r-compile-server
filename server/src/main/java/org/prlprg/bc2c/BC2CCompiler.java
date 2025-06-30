package org.prlprg.bc2c;

import java.util.*;
import javax.annotation.Nullable;

import org.prlprg.bc.*;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {
}

class ByteCodeStack {
    private int max = 0;
    private int top = 0;

    public String push() {
        top++;
        max = Math.max(max, top);
        return get(top);
    }

    public String pop() {
        if (top < 0) {
            throw new IllegalArgumentException("Stack underflow: %d".formatted(top));
        }
        var s = get(top);
        --top;
        return s;
    }

    public String get(int i) {
        return "R" + i;
    }

    public int max() {
        return max;
    }

    public boolean isEmpty() {
        return top == 0;
    }

    public int top() {
        return top;
    }

    public void reset(int newTop) {
        if (newTop < -1) {
            throw new IllegalArgumentException("Invalid top: %d".formatted(newTop));
        }
        this.top = newTop;
    }
}

record CompiledClosure(String name, VectorSXP<SEXP> constantPool) {
}

class CModule {
    private final List<CFunction> funs = new ArrayList<>();
    private int funId = 0;

    CFunction createFun(String returnType, String name, String args) {
        var fun = new CFunction(returnType, name, args);
        funs.add(fun);
        return fun;
    }

    CompiledClosure compileClosure(Bc bc, String baseName) {
        var name = baseName + "_" + funId++;
        var compiler = new ClosureCompiler(this, name, bc);
        var constants = compiler.compile();

        return new CompiledClosure(name, constants);
    }

    public List<CFunction> funs() {
        return funs;
    }
}

public class BC2CCompiler {
    private final CModule module = new CModule();
    private final Bc bc;
    private final String name; // The name is chosen by the client

    public BC2CCompiler(Bc bc, String name) {
        this.bc = bc;
        // We can have other closures to compile in the same Bc
        // We will need to generate a unique name for each
        // This is the base name
        this.name = name;
    }

    public CompiledModule finish() {
        var compiledClosure = module.compileClosure(bc, name);

        var file = new CFile();
        file.addInclude("runtime.h");
        module.funs().forEach(fun -> file.addFun(fun, module.funs().size() > 1));

        return new CompiledModule(file, compiledClosure.name(), compiledClosure.constantPool());
    }
}

// TODO: extract labels and cells into its own classes
class ClosureCompiler {
    /**
     * The name of the variable representing the current environment
     */
    private static final String VAR_RHO = "RHO";

    /**
     * The name of the variable representing the C constant pool
     */
    private static final String VAR_CCP = "CCP";

    private static final String VAR_STACK_SAVE = "STACK_SAVE";
    private static final String VAR_RET = "RET";

    private final Bc bc;
    private final ByteCodeStack stack = new ByteCodeStack();
    private final Map<Integer, Constant> constants = new LinkedHashMap<>();
    private final Set<Integer> labels = new HashSet<>();
    private final Set<Integer> cells = new HashSet<>();
    private final Map<Integer, Integer> branchStackState = new HashMap<>();
    private int extraConstPoolIdx;
    private final String name;

    protected CModule module;
    protected CFunction fun;
    protected CCode prologue;
    protected CCode body;

    public ClosureCompiler(CModule module, String name, Bc bc) {
        this.bc = bc;
        this.name = name;
        this.module = module;
        this.fun = module.createFun("SEXP", name, "SEXP %s, SEXP %s".formatted(VAR_RHO, VAR_CCP));
        this.prologue = fun.add();
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
        prologue.line("R_bcstack_t *" + VAR_STACK_SAVE + " = R_BCNodeStackTop;");
        fillLabels();
    }

    private void afterCompile() {
        if (!cells.isEmpty() || !stack.isEmpty()) {
            prologue.line("CHECK_OVERFLOW(%d);".formatted(cells.size() + stack.max()));
        }

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
            Integer state = branchStackState.remove(pc);
            if (state != null) {
                stack.reset(state);
            }
        }


        var builder = new InstrBuilder(instr);
        checkSupported(instr);
        var code =
                switch (instr) {
                    case BcInstr.Return() -> """
                              do {
                                Value %s = *%s;
                                R_BCNodeStackTop = %s;
                                return Rsh_Return(%s);
                              } while(0);
                            """.formatted(VAR_RET, stack.pop(), VAR_STACK_SAVE, VAR_RET);
                    case BcInstr.Goto(var dest) -> "goto %s;".formatted(label(dest));
                    case BcInstr.LdConst(var idx) -> {
                        var c = getConstant(idx);
                        yield builder
                                .fun(
                                        switch (c.value()) {
                                            case IntSXP v when v.size() == 1 -> "Rsh_LdConstInt";
                                            case RealSXP v when v.size() == 1 -> "Rsh_LdConstDbl";
                                            case LglSXP v when v.size() == 1 -> "Rsh_LdConstLgl";
                                            case SEXP _ -> "Rsh_LdConst";
                                        })
                                .compileStmt();
                    }
                    case BcInstr.SetVar(var symbol) -> builder.addArgs(cell(symbol)).compileStmt();
                    case BcInstr.GetVar(var symbol) -> builder.addArgs(cell(symbol)).compileStmt();
                    case BcInstr.GetVarMissOk(var symbol) ->
                            builder.addArgs(constantSXP(symbol), cell(symbol)).compileStmt();
                    case BcInstr.StartAssign(var symbol) ->
                            builder.addArgs(constantSXP(symbol), cell(symbol)).compileStmt();
                    case BcInstr.EndAssign(var symbol) ->
                            builder.addArgs(constantSXP(symbol), cell(symbol)).compileStmt();
                    case BcInstr.MakeClosure(var idx) -> compileMakeClosure(builder, idx);
                    case BcInstr.MakeProm(var idx) -> {
                        var prom = bc.consts().get(idx);
                        if (prom instanceof BCodeSXP c) {
                            yield compileMakePromise(builder, c);
                        } else {
                            yield builder.compileStmt();
                        }
                    }

                    // FIXME: this can be all done using the default branch - except for the rank
                    //  the builder should be smarter and include also other types such as int
                    case BcInstr.SubsetN(var call, var rank) -> builder
                            .addArgs(String.valueOf(rank), constantSXP(call))
                            .pop(rank + 1)
                            .useStackAsArray()
                            .compileStmt();
                    case BcInstr.Subset2N(var call, var rank) -> builder
                            .addArgs(String.valueOf(rank), constantSXP(call))
                            .pop(rank + 1)
                            .useStackAsArray()
                            .compileStmt();
                    case BcInstr.SubassignN(var call, var rank) -> builder
                            .addArgs(String.valueOf(rank), constantSXP(call))
                            .pop(rank + 2)
                            .useStackAsArray()
                            .compileStmt();
                    case BcInstr.Subassign2N(var call, var rank) -> builder
                            .addArgs(String.valueOf(rank), constantSXP(call))
                            .pop(rank + 2)
                            .useStackAsArray()
                            .compileStmt();

                    case BcInstr.StartFor(var ast, var symbol, var label) -> {
                        var c = builder.addArgs(constantSXP(ast), constantSXP(symbol), cell(symbol)).compileStmt();
                        yield c + "\ngoto " + label(label) + ";";
                    }
                    case BcInstr.StepFor(var label) -> {
                        if (!(this.bc.instr(label.target() - 1)
                                instanceof BcInstr.StartFor(_, var symbol, _))) {
                            throw new IllegalStateException("Expected StartFor instruction");
                        }
                        yield "if (%s) {\n goto %s;\n}"
                                .formatted(builder.addArgs(cell(symbol)).compile(), label(label));
                    }
                    case BcInstr.Math1(var call, var op) ->
                            builder.addArgs(constantSXP(call), String.valueOf(op)).compileStmt();

                    default -> {
                        if (instr.label().orElse(null) instanceof BcLabel l) {
                            yield "if (%s) {\ngoto %s;\n}".formatted(builder.compile(), label(l));
                        } else {
                            yield builder.compileStmt();
                        }
                    }
                };


        instr.label().ifPresent(label -> branchStackState.put(label.target(), stack.top()));

        builder.beforeCompile().forEach(body::line);
        body.line(code);
        if (!(instr instanceof BcInstr.BrIfNot)) {
            // FIXME: temporary
            builder.afterCompile().forEach(body::line);
        }
    }

    private static final Set<BcOp> SUPPORTED_OPS =
            Set.of(
                    BcOp.AND,
                    BcOp.BRIFNOT,
                    BcOp.CALLBUILTIN,
                    BcOp.CALLSPECIAL,
                    BcOp.CALL,
                    BcOp.CHECKFUN,
                    BcOp.DIV,
                    BcOp.DOLLAR,
                    BcOp.EQ,
                    BcOp.EXPT,
                    BcOp.EXP,
                    BcOp.GETBUILTIN,
                    BcOp.GETFUN,
                    BcOp.GETVAR,
                    BcOp.GE,
                    BcOp.GOTO,
                    BcOp.GT,
                    BcOp.INVISIBLE,
                    BcOp.VISIBLE,
                    BcOp.LDCONST,
                    BcOp.LDFALSE,
                    BcOp.LDNULL,
                    BcOp.LDTRUE,
                    BcOp.LE,
                    BcOp.LT,
                    BcOp.MAKECLOSURE,
                    BcOp.MAKEPROM,
                    BcOp.MUL,
                    BcOp.NE,
                    BcOp.NOT,
                    BcOp.OR,
                    BcOp.POP,
                    BcOp.PUSHARG,
                    BcOp.PUSHCONSTARG,
                    BcOp.PUSHFALSEARG,
                    BcOp.PUSHNULLARG,
                    BcOp.PUSHTRUEARG,
                    BcOp.RETURN,
                    BcOp.SETTAG,
                    BcOp.SETVAR2,
                    BcOp.SETVAR,
                    BcOp.SUB,
                    BcOp.SQRT,
                    BcOp.UMINUS,
                    BcOp.UPLUS,
                    BcOp.ADD,
                    BcOp.GETINTLBUILTIN,
                    BcOp.GETVAR_MISSOK,
                    BcOp.STARTSUBSET,
                    BcOp.STARTSUBSET2,
                    BcOp.STARTSUBSET2_N,
                    BcOp.STARTSUBSET_N,
                    BcOp.VECSUBSET2,
                    BcOp.VECSUBSET,
                    BcOp.STARTASSIGN,
                    BcOp.STARTASSIGN2,
                    BcOp.ENDASSIGN,
                    BcOp.ENDASSIGN2,
                    BcOp.STARTSUBASSIGN,
                    BcOp.STARTSUBASSIGN2,
                    BcOp.STARTSUBASSIGN_N,
                    BcOp.STARTSUBASSIGN2_N,
                    BcOp.VECSUBASSIGN2,
                    BcOp.VECSUBASSIGN,
                    BcOp.SETTER_CALL,
                    BcOp.GETTER_CALL,
                    BcOp.SWAP,
                    BcOp.DOMISSING,
                    BcOp.DFLTSUBASSIGN,
                    BcOp.DFLTSUBASSIGN2,
                    BcOp.SUBASSIGN_N,
                    BcOp.SUBASSIGN2_N,
                    BcOp.DFLTSUBSET,
                    BcOp.DFLTSUBSET2,
                    BcOp.SUBSET_N,
                    BcOp.SUBSET2_N,
                    BcOp.MATSUBSET,
                    BcOp.MATSUBSET2,
                    BcOp.MATSUBASSIGN,
                    BcOp.MATSUBASSIGN2,
                    BcOp.STARTFOR,
                    BcOp.STEPFOR,
                    BcOp.ENDFOR,
                    BcOp.COLON,
                    BcOp.SEQALONG,
                    BcOp.SEQLEN,
                    BcOp.ISNULL,
                    BcOp.ISLOGICAL,
                    BcOp.ISCHARACTER,
                    BcOp.ISCOMPLEX,
                    BcOp.ISDOUBLE,
                    BcOp.ISINTEGER,
                    BcOp.ISNUMERIC,
                    BcOp.ISOBJECT,
                    BcOp.ISSYMBOL,
                    BcOp.DUP,
                    BcOp.DUP2ND,
                    BcOp.AND1ST,
                    BcOp.AND2ND,
                    BcOp.OR1ST,
                    BcOp.OR2ND,
                    BcOp.LOG,
                    BcOp.LOGBASE,
                    BcOp.MATH1,
                    BcOp.DODOTS);

    private void checkSupported(BcInstr instr) {
        if (!SUPPORTED_OPS.contains(instr.op())) {
            throw new UnsupportedOperationException("Unsupported instruction: " + instr);
        }
    }

    private String compileMakePromise(InstrBuilder builder, BCodeSXP bc) {
        var compiledClosure = module.compileClosure(bc.bc(), "p_" + name);
        var cpConst = createExtraConstant(compiledClosure.constantPool());
        return builder
                .fun("Rsh_MakeProm2")
                .args()
                .addArgs("&" + compiledClosure.name(), constantSXP(cpConst))
                .compileStmt();
    }

    private String compileMakeClosure(InstrBuilder builder, ConstPool.Idx<VecSXP> idx) {
        var cls = bc.consts().get(idx);

        if (cls.get(1) instanceof BCodeSXP closureBody) {
            var compiledClosure = module.compileClosure(closureBody.bc(), name);
            var ccp = createExtraConstant(compiledClosure.constantPool());
            return builder
                    .addArgs("&" + compiledClosure.name(), constantSXP(ccp))
                    .compileStmt();
        } else {
            throw new UnsupportedOperationException("Unsupported body: " + body);
        }
    }

    private void compileRegisters() {
        prologue.comment("REGISTERS");
        for (int i = 1; i <= stack.max(); i++) {
            prologue.line("DEFINE_VAL(%s);".formatted(stack.get(i)));
        }
    }

    private void compileCells() {
        if (cells.isEmpty()) {
            return;
        }

        prologue.comment("CELLS");
        for (var cell : cells) {
            prologue.line("DEFINE_BCELL(C%d);".formatted(cell));
        }
    }

    // API

    class InstrBuilder {
        private String fun;
        private List<String> args = new ArrayList<>();
        private boolean needsRho;
        private int push;
        private int pop;
        private boolean stackAsArray;

        public InstrBuilder(BcInstr instr) {
            this.fun = "Rsh_" + instr.getClass().getSimpleName();
            this.pop = instr.pop();
            this.push = instr.push();

            for (var x : instr.args()) {
                this.args.add(constantSXP(x));
            }

            if (instr.needsRho()) {
                this.needsRho = true;
            }
        }

        public InstrBuilder fun(String fun) {
            this.fun = fun;
            return this;
        }

        public InstrBuilder args(String... args) {
            this.args = new ArrayList<>(args.length);
            this.args.addAll(Arrays.asList(args));
            return this;
        }

        public InstrBuilder addArgs(String... args) {
            this.args.addAll(Arrays.asList(args));
            return this;
        }

        public InstrBuilder push(int push) {
            this.push = push;
            return this;
        }

        public InstrBuilder pop(int pop) {
            this.pop = pop;
            return this;
        }

        public String compile() {
            var args = new ArrayList<String>(pop + push + this.args.size());

//      if (stackAsArray) {
//        args.add("GET_VAL(0)");
//      } else {
//        args.addAll(replayStackEffect());
//      }

            replayStackEffect(args);

            args.addAll(this.args);

            if (needsRho) {
                args.add(VAR_RHO);
            }

            return fun + "(" + String.join(", ", args) + ")";
        }

        private void replayStackEffect(List<String> args) {
            var n = Math.max(pop, push);
            var xs = new String[n];

            for (int i = pop; i > 0; i--) {
                xs[i - 1] = stack.pop();
            }

            for (int i = 0; i < push; i++) {
                xs[i] = stack.push();
            }

            args.addAll(Arrays.asList(xs));
        }

        public String compileStmt() {
            return this.compile() + ";";
        }

        public InstrBuilder useStackAsArray() {
            this.stackAsArray = true;
            return this;
        }

        public List<String> beforeCompile() {
            return List.of();
        }

        public List<String> afterCompile() {
            return List.of();
        }
    }

    private String constantSXP(@Nullable ConstPool.Idx<? extends SEXP> idx) {
        if (idx == null) {
            return "R_NilValue";
        }

        var c = getConstant(idx);
        return constantSXP(c);
    }

    private String constantSXP(Constant c) {
        return "Rsh_const(%s, %d)".formatted(VAR_CCP, c.id());
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
