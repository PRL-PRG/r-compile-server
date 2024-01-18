package org.prlprg.bc;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.prlprg.sexp.IntSXP;

import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

public class BcTests {
    @Test
    @DisplayName("Create bytecode array")
    void createBcArray() {
        var bcBuilder = new Bc.Builder();
        bcBuilder.addAllInstrs(List.of(
                new BcInstr.LdConst(bcBuilder.addConst(new IntSXP(1))),
                new BcInstr.LdConst(bcBuilder.addConst(new IntSXP(2))),
                new BcInstr.Add(),
                new BcInstr.Return()
        ));
        var bc = bcBuilder.build();
        assertEquals(4, bc.code().size());
        assertEquals(BcOp.LDCONST, bc.code().get(0).op());
        assertEquals(BcOp.LDCONST, bc.code().get(1).op());
        assertEquals(BcOp.ADD, bc.code().get(2).op());
        assertEquals(BcOp.RETURN, bc.code().get(3).op());
        var consts = bc.consts().stream().toList();
        assertEquals(2, consts.size());
        assertEquals(new IntSXP(1), consts.get(0));
        assertEquals(new IntSXP(2), consts.get(1));
        assertEquals(0, ((BcInstr.LdConst)bc.code().get(0)).data().idx().idx);
        assertEquals(bc.consts(), ((BcInstr.LdConst)bc.code().get(0)).data().idx().pool);
        assertEquals(1, ((BcInstr.LdConst)bc.code().get(1)).data().idx().idx);
        assertEquals(bc.consts(), ((BcInstr.LdConst)bc.code().get(1)).data().idx().pool);
    }
}
