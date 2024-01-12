package org.prlprg.bc;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BcCode;
import org.prlprg.bc.BcData;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcOp;

import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

public class BcTests {
    @Test
    @DisplayName("Create bytecode array")
    void createBcArray() {
        var bcArray = new BcCode.Builder().addAll(List.of(
                new BcInstr(BcOp.LDCONST, new BcData.ConstantIdx(0)),
                new BcInstr(BcOp.LDCONST, new BcData.ConstantIdx(1)),
                new BcInstr(BcOp.ADD, null),
                new BcInstr(BcOp.RETURN, null)
        )).build();
        assertEquals(4, bcArray.size());
        assertEquals(BcOp.LDCONST, bcArray.get(0).op());
        assertEquals(BcOp.LDCONST, bcArray.get(1).op());
        assertEquals(BcOp.ADD, bcArray.get(2).op());
        assertEquals(BcOp.RETURN, bcArray.get(3).op());
        var data0 = bcArray.get(0).data();
        var data1 = bcArray.get(1).data();
        var data2 = bcArray.get(2).data();
        var data3 = bcArray.get(3).data();
        assertInstanceOf(BcData.ConstantIdx.class, data0);
        assertInstanceOf(BcData.ConstantIdx.class, data1);
        assertNull(data2);
        assertNull(data3);
        assertEquals(0, ((BcData.ConstantIdx) data0).idx());
        assertEquals(1, ((BcData.ConstantIdx) data1).idx());
    }
}
