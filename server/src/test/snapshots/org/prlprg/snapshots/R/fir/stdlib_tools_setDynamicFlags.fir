fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4013964294;
    st setDynamicFlags = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4013964294(block, flags) {
  (reg block:*, reg flags:*) -+> V { var block:*, var flags:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg flags1:*, reg flags2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg flags5:V, reg r3:V, reg c:cls, reg r4:V, reg r5:V, reg sum:cls, reg r6:V, reg flag:*, reg flag1:V, reg r7:V, reg c1:L, reg flag2:*, reg flag3:V, reg l:*, reg attr__:cls, reg r9:V, reg block1:*, reg block2:V |
    mkenv;
    st block = block;
    st flags = flags;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st flag = r1;
    flag = ld flag;
    check L11() else D3();
  L4():
    flags1 = ld flags;
    check L6() else D0();
  L5():
    r = dyn base(<lang `*`(flags, c(1, 2, 4, 8, 16))>);
    goto L0(r);
  D0():
    deopt 2 [flags1];
  D3():
    deopt 16 [flag];
  L6():
    flags2 = force? flags1;
    checkMissing(flags2);
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L11():
    flag1 = force? flag;
    checkMissing(flag1);
    r7 = `==`(flag1, 0);
    c1 = `as.logical`(r7);
    if c1 then L12() else L2();
  L1(flags5, r3):
    r5 = `*`(flags5, r3);
    sum = ldf sum in base;
    r6 = dyn sum(r5);
    check L10() else D2();
  L2():
    goto L3();
  L3():
    flag2 = ld flag;
    check L14() else D4();
  L7():
    c = ldf c in base;
    r4 = dyn c(1, 2, 4, 8, 16);
    check L9() else D1();
  L8():
    r2 = dyn base1(1, 2, 4, 8, 16);
    goto L1(flags2, r2);
  L12():
    st flag = NULL;
    goto L3();
  D1():
    deopt 11 [flags2, r4];
  D2():
    deopt 14 [r6];
  D4():
    deopt 25 [flag2];
  L9():
    goto L1(flags2, r4);
  L10():
    goto L0(r6);
  L14():
    flag3 = force? flag2;
    checkMissing(flag3);
    l = ld block;
    attr__ = ldf `attr<-`;
    check L15() else D5();
  D5():
    deopt 28 [flag3, l, flag3];
  L15():
    r9 = dyn attr__(l, NULL, "dynamicFlag", flag3);
    check L16() else D6();
  D6():
    deopt 31 [flag3, r9];
  L16():
    st block = r9;
    block1 = ld block;
    check L17() else D7();
  D7():
    deopt 33 [block1];
  L17():
    block2 = force? block1;
    checkMissing(block2);
    popenv;
    return block2;
  }
}