fun main() {
  () -+> V { reg r:cls, reg commandArgs:cls, reg r1:V |
    mkenv;
    r = clos `inner-1536591121`;
    st commandArgs = r;
    commandArgs = ldf commandArgs;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn commandArgs();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun `inner-1536591121`(trailingOnly) {
  (reg trailingOnly:*) -+> V { var trailingOnly:*, reg trailingOnly_isMissing:L, reg trailingOnly_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg commandArgs:cls, reg r2:V, reg trailingOnly1:*, reg trailingOnly2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg args:*, reg args1:V, reg match:cls, reg r5:V, reg m:*, reg m1:V, reg c1:L, reg args2:*, reg args3:V, reg c2:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg args8:V, reg r7:V, reg m2:*, reg m3:V, reg r8:I, reg r9:V, reg __:cls, reg r10:V, reg character:cls, reg r11:V, reg args9:*, reg args10:V |
    mkenv;
    trailingOnly_isMissing = missing.0(trailingOnly);
    if trailingOnly_isMissing then L0(FALSE) else L0(trailingOnly);
  L0(trailingOnly_orDefault):
    st trailingOnly = trailingOnly_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    st args = r1;
    trailingOnly1 = ld trailingOnly;
    check L10() else D1();
  L7():
    commandArgs = ldf commandArgs in base;
    r2 = dyn commandArgs();
    check L9() else D0();
  L8():
    r = dyn base(<lang commandArgs()>);
    goto L1(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 5 [trailingOnly1];
  L9():
    goto L1(r2);
  L10():
    trailingOnly2 = force? trailingOnly1;
    checkMissing(trailingOnly2);
    c = `as.logical`(trailingOnly2);
    if c then L11() else L2();
  L2():
    args9 = ld args;
    check L29() else D9();
  L11():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D9():
    deopt 30 [args9];
  L3(r4):
    st m = r4;
    m = ld m;
    check L16() else D4();
  L12():
    args = ld args;
    check L14() else D2();
  L13():
    r3 = dyn base1("--args", <sym args>, 0);
    goto L3(r3);
  L29():
    args10 = force? args9;
    checkMissing(args10);
    popenv;
    return args10;
  D2():
    deopt 10 [args];
  D4():
    deopt 17 [m];
  L14():
    args1 = force? args;
    checkMissing(args1);
    match = ldf match in base;
    r5 = dyn match("--args", args1, 0, NULL);
    check L15() else D3();
  L16():
    m1 = force? m;
    checkMissing(m1);
    c1 = `as.logical`(m1);
    if c1 then L17() else L4();
  D3():
    deopt 15 [r5];
  L4():
    character = ldf character;
    check L26() else D7();
  L15():
    goto L3(r5);
  L17():
    args2 = ld args;
    check L18() else D5();
  D5():
    deopt 19 [args2];
  D7():
    deopt 28 [];
  L18():
    args3 = force? args2;
    checkMissing(args3);
    c2 = `is.object`(args3);
    if c2 then L19() else L20(args3);
  L26():
    r11 = dyn character();
    check L27() else D8();
  D8():
    deopt 29 [r11];
  L5(dx1):
    popenv;
    return dx1;
  L19():
    dr = tryDispatchBuiltin.1("[", args3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(args5):
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L27():
    popenv;
    return r11;
  L6(args8, r7):
    r9 = `-`(<missing>, r7);
    __ = ldf `[` in base;
    r10 = dyn __(args8, r9);
    goto L5(r10);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L22():
    m2 = ld m;
    check L24() else D6();
  L23():
    r6 = dyn base2(<sym m>);
    goto L6(args5, r6);
  D6():
    deopt 22 [args5, m2];
  L24():
    m3 = force? m2;
    checkMissing(m3);
    r8 = seq_len(m3);
    goto L6(args5, r8);
  }
}