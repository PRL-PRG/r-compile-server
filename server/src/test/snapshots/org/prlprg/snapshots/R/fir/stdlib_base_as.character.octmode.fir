fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3079757008;
    st `as.character.octmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3079757008(x, keepStr, `...`) {
  (reg x:*, reg keepStr:*, reg ddd:dots) -+> V { var x:*, var keepStr:*, reg keepStr_isMissing:L, reg keepStr_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg rep_len:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg is_na:cls, reg r8:V, reg r9:V, reg sprintf:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg c:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg notNA:*, reg notNA1:V, reg __:cls, reg r12:V, reg as_integer:cls, reg r13:V, reg p:p(V +), reg r15:V, reg l:*, reg c1:L, reg r17:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg notNA2:*, reg notNA3:V, reg ___:cls, reg r20:V, reg keepStr1:*, reg keepStr2:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg x9:*, reg x10:V, reg dim:cls, reg r23:V, reg l3:*, reg dim__:cls, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg x11:*, reg x12:V, reg dimnames:cls, reg r27:V, reg l4:*, reg dimnames__:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg x13:*, reg x14:V, reg names:cls, reg r31:V, reg l5:*, reg names__:cls, reg r32:V, reg ans:*, reg ans1:V |
    mkenv;
    st x = x;
    keepStr_isMissing = missing.0(keepStr);
    if keepStr_isMissing then L0(FALSE) else L0(keepStr);
  L0(keepStr_orDefault):
    st keepStr = keepStr_orDefault;
    st `...` = ddd;
    sym = ldf rep_len;
    base = ldf rep_len in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    st ans = r1;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L10():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L11():
    r = dyn base(NA_STR, <lang length(x)>);
    goto L1(r);
  L2(r3):
    rep_len = ldf rep_len in base;
    r5 = dyn rep_len(NA_STR, r3);
    check L16() else D2();
  L3(r7):
    r9 = `!`(r7);
    st notNA = r9;
    sprintf = ldf sprintf;
    check L21() else D5();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r2 = dyn base1(<sym x>);
    goto L2(r2);
  L17():
    x3 = ld x;
    check L19() else D3();
  L18():
    r6 = dyn base2(<sym x>);
    goto L3(r6);
  D0():
    deopt 5 [x1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 14 [x3];
  D5():
    deopt 21 [];
  L14():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L15() else D1();
  L16():
    goto L1(r5);
  L19():
    x4 = force? x3;
    checkMissing(x4);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(x4);
    check L20() else D4();
  L21():
    p = prom<V +>{
      sym3 = ldf `as.integer`;
      base3 = ldf `as.integer` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r11):
      return r11;
    L2():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c = `is.object`(x6);
      if c then L4() else L5(x6);
    L3():
      r10 = dyn base3(<lang `[`(x, notNA)>);
      goto L0(r10);
    L1(dx1):
      as_integer = ldf `as.integer` in base;
      r13 = dyn as_integer(dx1);
      goto L0(r13);
    L4():
      dr = tryDispatchBuiltin.1("[", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(x8):
      notNA = ld notNA;
      notNA1 = force? notNA;
      __ = ldf `[` in base;
      r12 = dyn __(x8, notNA1);
      goto L1(r12);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r15 = dyn sprintf("%o", p);
    check L22() else D6();
  D1():
    deopt 8 [r4];
  D4():
    deopt 17 [r8];
  D6():
    deopt 24 [r15];
  L15():
    goto L2(r4);
  L20():
    goto L3(r8);
  L22():
    l = ld ans;
    c1 = `is.object`(l);
    if c1 then L23() else L24(r15, l);
  L4(dx3):
    st ans = dx3;
    keepStr1 = ld keepStr;
    check L27() else D8();
  L23():
    dr2 = tryDispatchBuiltin.0("[<-", l, r15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(r15, dr2);
  L24(r17, l2):
    notNA2 = ld notNA;
    check L26() else D7();
  D7():
    deopt 26 [r17, l2, r15, notNA2];
  D8():
    deopt 30 [keepStr1];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L26():
    notNA3 = force? notNA2;
    ___ = ldf `[<-` in base;
    r20 = dyn ___(l2, r15, notNA3);
    goto L4(r20);
  L27():
    keepStr2 = force? keepStr1;
    checkMissing(keepStr2);
    c2 = `as.logical`(keepStr2);
    if c2 then L28() else L5();
  L5():
    goto L9();
  L9():
    ans = ld ans;
    check L48() else D21();
  L28():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  D21():
    deopt 67 [ans];
  L6(r22):
    l3 = ld ans;
    dim__ = ldf `dim<-`;
    check L33() else D11();
  L29():
    x9 = ld x;
    check L31() else D9();
  L30():
    r21 = dyn base4(<sym x>);
    goto L6(r21);
  L48():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D9():
    deopt 34 [x9];
  D11():
    deopt 39 [r22, l3, r22];
  L31():
    x10 = force? x9;
    checkMissing(x10);
    dim = ldf dim in base;
    r23 = dyn dim(x10);
    check L32() else D10();
  L33():
    r24 = dyn dim__(l3, NULL, r22);
    check L34() else D12();
  D10():
    deopt 37 [r23];
  D12():
    deopt 41 [r22, r24];
  L32():
    goto L6(r23);
  L34():
    st ans = r24;
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L35() else L36();
  L7(r26):
    l4 = ld ans;
    dimnames__ = ldf `dimnames<-`;
    check L39() else D15();
  L35():
    x11 = ld x;
    check L37() else D13();
  L36():
    r25 = dyn base5(<sym x>);
    goto L7(r25);
  D13():
    deopt 45 [x11];
  D15():
    deopt 50 [r26, l4, r26];
  L37():
    x12 = force? x11;
    checkMissing(x12);
    dimnames = ldf dimnames in base;
    r27 = dyn dimnames(x12);
    check L38() else D14();
  L39():
    r28 = dyn dimnames__(l4, NULL, r26);
    check L40() else D16();
  D14():
    deopt 48 [r27];
  D16():
    deopt 52 [r26, r28];
  L38():
    goto L7(r27);
  L40():
    st ans = r28;
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L41() else L42();
  L8(r30):
    l5 = ld ans;
    names__ = ldf `names<-`;
    check L45() else D19();
  L41():
    x13 = ld x;
    check L43() else D17();
  L42():
    r29 = dyn base6(<sym x>);
    goto L8(r29);
  D17():
    deopt 56 [x13];
  D19():
    deopt 61 [r30, l5, r30];
  L43():
    x14 = force? x13;
    checkMissing(x14);
    names = ldf names in base;
    r31 = dyn names(x14);
    check L44() else D18();
  L45():
    r32 = dyn names__(l5, NULL, r30);
    check L46() else D20();
  D18():
    deopt 59 [r31];
  D20():
    deopt 63 [r30, r32];
  L44():
    goto L8(r31);
  L46():
    st ans = r32;
    goto L9();
  }
}