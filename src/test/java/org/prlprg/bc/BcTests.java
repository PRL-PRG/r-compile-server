package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.prlprg.sexp.SEXPs;

public class BcTests {
  @Test
  @DisplayName("Create bytecode array")
  void createBcArray() {
    var bcb = new Bc.Builder();
    bcb.setTrackSrcRefs(false);
    bcb.setTrackExpressions(false);

    var ast = SEXPs.lang(SEXPs.symbol("+"), SEXPs.list(SEXPs.integer(1), SEXPs.integer(2)));

    // It doesn't make sense to implement SEXP#clone because you'd just reuse the
    // SEXP since they are immutable.
    // Only SEXP.withXYZ(...) methods.
    var astClone = SEXPs.lang(SEXPs.symbol("+"), SEXPs.list(SEXPs.integer(1), SEXPs.integer(2)));

    bcb.addInstr(new BcInstr.LdConst(bcb.addConst(SEXPs.integer(1))));
    bcb.addInstr(new BcInstr.LdConst(bcb.addConst(SEXPs.integer(2))));
    bcb.addInstr(new BcInstr.Add(bcb.addConst(ast)));
    bcb.addInstr(new BcInstr.Return());

    var bc = bcb.build();

    assertEquals(4, bc.code().size());
    assertEquals(BcOp.LDCONST, bc.code().get(0).op());
    assertEquals(BcOp.LDCONST, bc.code().get(1).op());
    assertEquals(BcOp.ADD, bc.code().get(2).op());
    assertEquals(BcOp.RETURN, bc.code().get(3).op());

    var consts = bc.consts().stream().toList();

    assertEquals(3, consts.size());
    assertEquals(SEXPs.integer(1), consts.get(0));
    assertEquals(SEXPs.integer(2), consts.get(1));
    assertEquals(astClone, consts.get(2));

    assertEquals(0, ((BcInstr.LdConst) bc.code().get(0)).constant().idx());
    assertEquals(1, ((BcInstr.LdConst) bc.code().get(1)).constant().idx());
    assertEquals(2, ((BcInstr.Add) bc.code().get(2)).ast().idx());
  }
}
