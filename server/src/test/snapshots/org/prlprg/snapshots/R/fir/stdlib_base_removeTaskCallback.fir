fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2258024059;
    st removeTaskCallback = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2258024059(id) {
  (reg id:*) -+> V { var id:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg id1:*, reg id2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg id3:*, reg id4:V, reg as_integer:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg _C_R_removeTaskCallback:*, reg _C_R_removeTaskCallback1:V, reg id5:*, reg id6:V, reg vargs:dots, reg r9:V |
    mkenv;
    st id = id;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L8() else L1();
  L5():
    id1 = ld id;
    check L7() else D0();
  L6():
    r = dyn base(<sym id>);
    goto L0(r);
  D0():
    deopt 1 [id1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L7():
    id2 = force? id1;
    checkMissing(id2);
    c = `is.character`(id2);
    goto L0(c);
  L8():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(r4):
    st id = r4;
    goto L3();
  L4(r8):
    popenv;
    return r8;
  L9():
    id3 = ld id;
    check L11() else D1();
  L10():
    r3 = dyn base1(<sym id>);
    goto L2(r3);
  L14():
    _C_R_removeTaskCallback = ld `.C_R_removeTaskCallback`;
    check L16() else D3();
  L15():
    r7 = dyn base2(<sym .C_R_removeTaskCallback>, <sym id>);
    goto L4(r7);
  D1():
    deopt 7 [id3];
  D3():
    deopt 15 [_C_R_removeTaskCallback];
  L11():
    id4 = force? id3;
    checkMissing(id4);
    as_integer = ldf `as.integer` in base;
    r5 = dyn as_integer(id4);
    check L12() else D2();
  L16():
    _C_R_removeTaskCallback1 = force? _C_R_removeTaskCallback;
    checkMissing(_C_R_removeTaskCallback1);
    id5 = ld id;
    check L17() else D4();
  D2():
    deopt 10 [r5];
  D4():
    deopt 16 [_C_R_removeTaskCallback1, id5];
  L12():
    goto L2(r5);
  L17():
    id6 = force? id5;
    checkMissing(id6);
    vargs = dots[id6];
    r9 = `.Call`(_C_R_removeTaskCallback1, vargs, <missing>);
    goto L4(r9);
  }
}