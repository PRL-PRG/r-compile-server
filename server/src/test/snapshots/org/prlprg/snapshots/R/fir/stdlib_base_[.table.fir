fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2232194083;
    st `[.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2232194083(x, i, j, `...`, drop) {
  (reg x:*, reg i:*, reg j:*, reg ddd:dots, reg drop:*) -+> V { var x:*, var i:*, var j:*, var `...`:dots?, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ret:*, reg ret1:V, reg dim:cls, reg r5:V, reg length:cls, reg r6:V, reg ldr:*, reg ldr1:V, reg r7:V, reg c:L, reg c1:V, reg ldr2:*, reg ldr3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c5:L, reg ldr6:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c8:L, reg ldr9:V, reg r11:V, reg x1:*, reg x2:V, reg dim1:cls, reg r12:V, reg length1:cls, reg r13:V, reg r14:V, reg c9:L, reg c10:V, reg c12:L, reg l:*, reg class__:cls, reg r15:V, reg ret2:*, reg ret3:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st `...` = ddd;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(TRUE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    NextMethod = ldf NextMethod;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r = dyn NextMethod();
    check L9() else D1();
  D1():
    deopt 2 [r];
  L9():
    st ret = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r2):
    st ldr = r2;
    ldr = ld ldr;
    check L17() else D5();
  L10():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    r1 = dyn base(<lang dim(ret)>);
    goto L1(r1);
  D5():
    deopt 15 [ldr];
  L2(r4):
    length = ldf length in base;
    r6 = dyn length(r4);
    check L16() else D4();
  L12():
    ret = ld ret;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym ret>);
    goto L2(r3);
  L17():
    ldr1 = force? ldr;
    checkMissing(ldr1);
    r7 = `>`(ldr1, 1);
    c = `as.logical`(r7);
    if c then L3(c) else L18();
  D2():
    deopt 8 [ret];
  D4():
    deopt 13 [r6];
  L3(c1):
    c12 = `as.logical`(c1);
    if c12 then L28() else L6();
  L14():
    ret1 = force? ret;
    checkMissing(ret1);
    dim = ldf dim in base;
    r5 = dyn dim(ret1);
    check L15() else D3();
  L16():
    goto L1(r6);
  L18():
    ldr2 = ld ldr;
    check L19() else D6();
  D3():
    deopt 11 [r5];
  D6():
    deopt 19 [c, ldr2];
  L6():
    goto L7();
  L7():
    ret2 = ld ret;
    check L32() else D12();
  L15():
    goto L2(r5);
  L19():
    ldr3 = force? ldr2;
    checkMissing(ldr3);
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L28():
    l = ld ret;
    class__ = ldf `class<-`;
    check L29() else D10();
  D10():
    deopt 35 ["table", l, "table"];
  D12():
    deopt 41 [ret2];
  L4(c5, ldr6, r9):
    r14 = `==`(ldr6, r9);
    c9 = `as.logical`(r14);
    c10 = `||`(c5, c9);
    goto L3(c10);
  L20():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L21():
    r8 = dyn base2(<lang dim(x)>);
    goto L4(c, ldr3, r8);
  L29():
    r15 = dyn class__(l, NULL, "table");
    check L30() else D11();
  L32():
    ret3 = force? ret2;
    checkMissing(ret3);
    popenv;
    return ret3;
  D11():
    deopt 37 ["table", r15];
  L5(c8, ldr9, r11):
    length1 = ldf length in base;
    r13 = dyn length1(r11);
    check L26() else D9();
  L22():
    x1 = ld x;
    check L24() else D7();
  L23():
    r10 = dyn base3(<sym x>);
    goto L5(c, ldr3, r10);
  L30():
    st ret = r15;
    goto L7();
  D7():
    deopt 24 [c, ldr3, x1];
  D9():
    deopt 29 [c8, ldr9, r13];
  L24():
    x2 = force? x1;
    checkMissing(x2);
    dim1 = ldf dim in base;
    r12 = dyn dim1(x2);
    check L25() else D8();
  L26():
    goto L4(c8, ldr9, r13);
  D8():
    deopt 27 [c, ldr3, r12];
  L25():
    goto L5(c, ldr3, r12);
  }
}