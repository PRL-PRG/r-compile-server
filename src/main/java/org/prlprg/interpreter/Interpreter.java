package org.prlprg.interpreter;

import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.NotImplementedException;

import javax.annotation.Nullable;
import java.util.Stack;

/** Runs abstract or concrete interpretation on bytecode, depending on the {@link Stepper} which is provided.
 * Evaluation is very similar to eval.c in GNU-R. */
public class Interpreter<S extends AbstractSEXP, C extends AbstractCtx<S>, Step extends Stepper<S, C>> {
    private final Step stepper;
    private final Bc bc;
    private final C ctx;
    private int pc = 0;
    private Stack<S> stack = new Stack<>();
    private @Nullable S retValue = null;

    /** Using the stepper, evaluates the bytecode (which is a closure body or promise) in the context,
     * and returns the evaluated output (closure return value or promise).
     * <p>
     * Be aware that this may mutate {@code Step} and will probably mutate {@code Ctx}.
     * <b>If you are evaluating a closure, make sure to create a local environment and add the arguments first.</b>
     */
    public static <S extends AbstractSEXP, C extends AbstractCtx<S>, Step extends Stepper<S, C>> @Nullable S
    eval(Step stepper, Bc bc, C ctx) throws EvalError {
        var interpreter = new Interpreter<>(stepper, bc, ctx);
        interpreter.run();
        return interpreter.retValue;
    }

    private Interpreter(Step stepper, Bc bc, C ctx) {
        this.stepper = stepper;
        this.bc = bc;
        this.ctx = ctx;
    }

    @SuppressWarnings("unused")
    private void run() throws EvalError {
        var code = bc.code();
        var constants = bc.consts();
        while (true) {
            var instr = code.get(pc++);
            var oldPc = pc; // Yes, this should be after `pc++`
            switch (instr) {
                case BcInstr.Return i -> {
                    retValue = stack.pop();
                    return;
                }
                case BcInstr.Goto i -> pc = i.label().target;
                case BcInstr.BrIfNot i -> stepper.test(constants.get(i.ast()), stack.pop(), () -> pc = i.label().target, () -> pc = oldPc);
                case BcInstr.Pop i -> stack.pop();
                case BcInstr.Dup i -> stack.push(stack.peek());
                case BcInstr.PrintValue i -> stepper.print(stack.pop());
                case BcInstr.LdConst i -> stack.push(stepper.lift(constants.get(i.constant())));
                case BcInstr.LdNull i -> stack.push(stepper.lift(SEXPs.NULL));
                case BcInstr.LdTrue i -> stack.push(stepper.lift(SEXPs.TRUE));
                case BcInstr.LdFalse i -> stack.push(stepper.lift(SEXPs.FALSE));
                default -> throw new NotImplementedException("instruction " + instr);
            }
        }
    }
}
