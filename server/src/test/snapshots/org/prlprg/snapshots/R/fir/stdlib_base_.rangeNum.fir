fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3812326484;
    st `.rangeNum` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3812326484(`...`, `na.rm`, finite, isNumeric) {
  (reg ddd:dots, reg na_rm:*, reg finite:*, reg isNumeric:*) -+> V { var `...`:dots?, var `na.rm`:*, var finite:*, var isNumeric:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg ddd1:dots?, reg r2:V, reg isNumeric1:cls, reg x:*, reg x1:V, reg p:p(V +), reg r4:V, reg c1:L, reg finite1:*, reg finite2:V, reg c2:L, reg x2:*, reg x3:V, reg c3:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg x8:V, reg r6:V, reg x9:*, reg x10:V, reg is_finite:cls, reg r7:V, reg __:cls, reg r8:V, reg na_rm1:*, reg na_rm2:V, reg c4:L, reg x11:*, reg x12:V, reg c5:L, reg x14:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg x17:V, reg r10:V, reg x18:*, reg x19:V, reg is_na:cls, reg r11:V, reg r12:V, reg __1:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg x20:*, reg x21:V, reg min:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg x22:*, reg x23:V, reg max:cls, reg r21:V, reg c6:cls, reg r22:V, reg finite3:*, reg finite4:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r26:V, reg r27:V, reg x24:*, reg x25:V, reg na_rm3:*, reg na_rm4:V, reg min1:cls, reg r28:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r29:V, reg r30:V, reg x26:*, reg x27:V, reg na_rm5:*, reg na_rm6:V, reg max1:cls, reg r31:V, reg c8:cls, reg r32:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    st finite = finite;
    st isNumeric = isNumeric;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st x = r1;
    isNumeric1 = ldf isNumeric;
    check L21() else D2();
  L17():
    c = ldf c;
    check L19() else D0();
  L18():
    r = dyn base[, recursive](<sym ...>, TRUE);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 9 [];
  L19():
    ddd1 = ld `...`;
    r2 = dyn c[`...`, recursive](ddd1, TRUE);
    check L20() else D1();
  L21():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r4 = dyn isNumeric1(p);
    check L22() else D3();
  D1():
    deopt 6 [r2];
  D3():
    deopt 11 [r4];
  L20():
    goto L0(r2);
  L22():
    c1 = `as.logical`(r4);
    if c1 then L23() else L1();
  L1():
    finite3 = ld finite;
    check L58() else D17();
  L23():
    finite1 = ld finite;
    check L24() else D4();
  D4():
    deopt 12 [finite1];
  D17():
    deopt 55 [finite3];
  L24():
    finite2 = force? finite1;
    checkMissing(finite2);
    c2 = `as.logical`(finite2);
    if c2 then L25() else L2();
  L58():
    finite4 = force? finite3;
    checkMissing(finite4);
    c7 = `as.logical`(finite4);
    if c7 then L59() else L12();
  L2():
    na_rm1 = ld `na.rm`;
    check L35() else D8();
  L5():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L12():
    goto L13();
  L13():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L25():
    x2 = ld x;
    check L26() else D5();
  L59():
    st `na.rm` = TRUE;
    goto L13();
  D5():
    deopt 14 [x2];
  D8():
    deopt 24 [na_rm1];
  L9(r15):
    popenv;
    return r15;
  L14(r25):
    popenv;
    return r25;
  L26():
    x3 = force? x2;
    checkMissing(x3);
    c3 = `is.object`(x3);
    if c3 then L27() else L28(x3);
  L35():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c4 = `as.logical`(na_rm2);
    if c4 then L36() else L6();
  L46():
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L47():
    r14 = dyn base3(<lang min(x)>, <lang max(x)>);
    goto L9(r14);
  L61():
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  L62():
    r24 = dyn base6(<lang min(x, na.rm=na.rm)>, <lang max(x, na.rm=na.rm)>);
    goto L14(r24);
  L3(dx1):
    st x = dx1;
    goto L5();
  L6():
    goto L5();
  L10(r17):
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  L15(r27):
    sym8 = ldf max;
    base8 = ldf max in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L68() else L69();
  L27():
    dr = tryDispatchBuiltin.1("[", x3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(x5):
    sym1 = ldf `is.finite`;
    base1 = ldf `is.finite` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L36():
    x11 = ld x;
    check L37() else D9();
  L48():
    x20 = ld x;
    check L50() else D12();
  L49():
    r16 = dyn base4(<sym x>);
    goto L10(r16);
  L63():
    x24 = ld x;
    check L65() else D18();
  L64():
    r26 = dyn base7[, `na.rm`](<sym x>, <sym na.rm>);
    goto L15(r26);
  D9():
    deopt 26 [x11];
  D12():
    deopt 43 [x20];
  D18():
    deopt 66 [x24];
  L4(x8, r6):
    __ = ldf `[` in base;
    r8 = dyn __(x8, r6);
    goto L3(r8);
  L11(r20):
    c6 = ldf c in base;
    r22 = dyn c6(r17, r20);
    check L56() else D16();
  L16(r30):
    c8 = ldf c in base;
    r32 = dyn c8(r27, r30);
    check L73() else D24();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L30():
    x9 = ld x;
    check L32() else D6();
  L31():
    r5 = dyn base1(<sym x>);
    goto L4(x5, r5);
  L37():
    x12 = force? x11;
    checkMissing(x12);
    c5 = `is.object`(x12);
    if c5 then L38() else L39(x12);
  L50():
    x21 = force? x20;
    checkMissing(x21);
    min = ldf min in base;
    r18 = dyn min(x21);
    check L51() else D13();
  L52():
    x22 = ld x;
    check L54() else D14();
  L53():
    r19 = dyn base5(<sym x>);
    goto L11(r19);
  L65():
    x25 = force? x24;
    checkMissing(x25);
    na_rm3 = ld `na.rm`;
    check L66() else D19();
  L68():
    x26 = ld x;
    check L70() else D21();
  L69():
    r29 = dyn base8[, `na.rm`](<sym x>, <sym na.rm>);
    goto L16(r29);
  D6():
    deopt 18 [x5, x9];
  D13():
    deopt 46 [r18];
  D14():
    deopt 49 [x22];
  D16():
    deopt 54 [r22];
  D19():
    deopt 68 [na_rm3];
  D21():
    deopt 75 [x26];
  D24():
    deopt 83 [r32];
  L7(dx4):
    st x = dx4;
    goto L5();
  L32():
    x10 = force? x9;
    checkMissing(x10);
    is_finite = ldf `is.finite` in base;
    r7 = dyn is_finite(x10);
    check L33() else D7();
  L38():
    dr2 = tryDispatchBuiltin.1("[", x12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(x14):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L51():
    goto L10(r18);
  L54():
    x23 = force? x22;
    checkMissing(x23);
    max = ldf max in base;
    r21 = dyn max(x23);
    check L55() else D15();
  L56():
    goto L9(r22);
  L66():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    min1 = ldf min in base;
    r28 = dyn min1(x25, na_rm4);
    check L67() else D20();
  L70():
    x27 = force? x26;
    checkMissing(x27);
    na_rm5 = ld `na.rm`;
    check L71() else D22();
  L73():
    goto L14(r32);
  D7():
    deopt 21 [x5, r7];
  D15():
    deopt 52 [r21];
  D20():
    deopt 72 [r28];
  D22():
    deopt 77 [na_rm5];
  L8(x17, r10):
    r12 = `!`(r10);
    __1 = ldf `[` in base;
    r13 = dyn __1(x17, r12);
    goto L7(r13);
  L33():
    goto L4(x5, r7);
  L40():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx3);
  L41():
    x18 = ld x;
    check L43() else D10();
  L42():
    r9 = dyn base2(<sym x>);
    goto L8(x14, r9);
  L55():
    goto L11(r21);
  L67():
    goto L15(r28);
  L71():
    na_rm6 = force? na_rm5;
    checkMissing(na_rm6);
    max1 = ldf max in base;
    r31 = dyn max1(x27, na_rm6);
    check L72() else D23();
  D10():
    deopt 30 [x14, x18];
  D23():
    deopt 81 [r31];
  L43():
    x19 = force? x18;
    checkMissing(x19);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(x19);
    check L44() else D11();
  L72():
    goto L16(r31);
  D11():
    deopt 33 [x14, r11];
  L44():
    goto L8(x14, r11);
  }
}