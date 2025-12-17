fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1043418762;
    st unsplit = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1043418762(value, f, drop) {
  (reg value:*, reg f:*, reg drop:*) -+> V { var value:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg f1:*, reg f2:V, reg is_list:cls, reg r4:V, reg c:L, reg f3:*, reg f4:V, reg c1:L, reg f6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg dx2:V, reg f7:*, reg f8:V, reg length:cls, reg r6:V, reg is_data_frame:cls, reg value1:*, reg value2:V, reg c2:L, reg value4:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r7:V, reg p:p(V +), reg r9:V, reg c3:L, reg value5:*, reg value6:V, reg c4:L, reg value8:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r10:V, reg c5:L, reg dx8:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg rep:cls, reg r13:V, reg __3:cls, reg r14:V, reg unsplit:cls, reg lapply:cls, reg value9:*, reg value10:V, reg p1:p(V +), reg rownames:*, reg rownames1:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg f9:*, reg f10:V, reg p4:p(V +), reg drop1:*, reg drop2:V, reg p5:p(V +), reg r21:V, reg l:*, reg rownames__:cls, reg r22:V, reg value11:*, reg value12:V, reg c6:L, reg value14:V, reg dr8:V, reg dc4:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r24:V, reg c7:L, reg dx17:V, reg dr10:V, reg dc5:L, reg dx18:V, reg dx19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg dx22:V, reg r26:V, reg rep1:cls, reg r27:V, reg __5:cls, reg r28:V, reg value15:*, reg value16:V, reg l1:*, reg split__:cls, reg f11:*, reg f12:V, reg p6:p(V +), reg drop3:*, reg drop4:V, reg p7:p(V +), reg r31:V, reg x:*, reg x1:V |
    mkenv;
    st value = value;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L1(r1):
    st len = r1;
    is_data_frame = ldf `is.data.frame`;
    check L28() else D5();
  L14():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r = dyn base(<lang if(is.list(f), `[[`(f, 1), f)>);
    goto L1(r);
  D5():
    deopt 19 [];
  L2(r3):
    c = `as.logical`(r3);
    if c then L20() else L3();
  L16():
    f1 = ld f;
    check L18() else D0();
  L17():
    r2 = dyn base1(<sym f>);
    goto L2(r2);
  L28():
    p = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      c2 = `is.object`(value2);
      if c2 then L1() else L2(value2);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", value2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(value4):
      __1 = ldf `[[` in base;
      r7 = dyn __1(value4, 1);
      goto L0(r7);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    r9 = dyn is_data_frame(p);
    check L29() else D6();
  D0():
    deopt 4 [f1];
  D6():
    deopt 21 [r9];
  L3():
    f7 = ld f;
    check L26() else D3();
  L5(dx2):
    length = ldf length in base;
    r6 = dyn length(dx2);
    check L27() else D4();
  L18():
    f2 = force? f1;
    checkMissing(f2);
    is_list = ldf `is.list` in base;
    r4 = dyn is_list(f2);
    check L19() else D1();
  L20():
    f3 = ld f;
    check L21() else D2();
  L29():
    c3 = `as.logical`(r9);
    if c3 then L30() else L6();
  D1():
    deopt 7 [r4];
  D2():
    deopt 8 [f3];
  D3():
    deopt 13 [f7];
  D4():
    deopt 16 [r6];
  L6():
    value11 = ld value;
    check L45() else D12();
  L10():
    value15 = ld value;
    check L54() else D13();
  L19():
    goto L2(r4);
  L21():
    f4 = force? f3;
    checkMissing(f4);
    c1 = `is.object`(f4);
    if c1 then L22() else L23(f4);
  L26():
    f8 = force? f7;
    checkMissing(f8);
    goto L5(f8);
  L27():
    goto L1(r6);
  L30():
    value5 = ld value;
    check L31() else D7();
  D7():
    deopt 22 [value5];
  D12():
    deopt 48 [value11];
  D13():
    deopt 58 [value15];
  L4(dx1):
    goto L5(dx1);
  L22():
    dr = tryDispatchBuiltin.1("[[", f4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(f6):
    __ = ldf `[[` in base;
    r5 = dyn __(f6, 1);
    goto L4(r5);
  L31():
    value6 = force? value5;
    checkMissing(value6);
    c4 = `is.object`(value6);
    if c4 then L32() else L33(value6);
  L45():
    value12 = force? value11;
    checkMissing(value12);
    c6 = `is.object`(value12);
    if c6 then L46() else L47(value12);
  L54():
    value16 = force? value15;
    checkMissing(value16);
    l1 = ld x;
    split__ = ldf `split<-`;
    check L55() else D14();
  D14():
    deopt 61 [value16, l1, value16];
  L7(dx6):
    c5 = `is.object`(dx6);
    if c5 then L35() else L36(dx6);
  L11(dx15):
    c7 = `is.object`(dx15);
    if c7 then L49() else L50(dx15);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L32():
    dr4 = tryDispatchBuiltin.1("[[", value6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(value8):
    __2 = ldf `[[` in base;
    r10 = dyn __2(value8, 1);
    goto L7(r10);
  L46():
    dr8 = tryDispatchBuiltin.1("[[", value12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L48() else L47(dr8);
  L47(value14):
    __4 = ldf `[[` in base;
    r24 = dyn __4(value14, 1);
    goto L11(r24);
  L55():
    p6 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    p7 = prom<V +>{
      drop3 = ld drop;
      drop4 = force? drop3;
      checkMissing(drop4);
      return drop4;
    };
    r31 = dyn split__[, , , drop, ](l1, NULL, p6, p7, value16);
    check L56() else D15();
  D15():
    deopt 66 [value16, r31];
  L8(dx10):
    st x = dx10;
    unsplit = ldf unsplit;
    check L40() else D8();
  L12(dx19):
    st x = dx19;
    goto L10();
  L34():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx5);
  L35():
    dr6 = tryDispatchBuiltin.1("[", dx6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L37() else L36(dr6);
  L36(dx8):
    sym2 = ldf rep;
    base2 = ldf rep in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L48():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx14);
  L49():
    dr10 = tryDispatchBuiltin.1("[", dx15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L51() else L50(dr10);
  L50(dx17):
    sym3 = ldf rep;
    base3 = ldf rep in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L56():
    st x = r31;
    x = ld x;
    check L57() else D16();
  D8():
    deopt 37 [];
  D16():
    deopt 68 [x];
  L9(r12):
    __3 = ldf `[` in base;
    r14 = dyn __3(dx6, r12, <missing>, FALSE);
    goto L8(r14);
  L13(dx22, r26):
    __5 = ldf `[` in base;
    r28 = dyn __5(dx22, r26);
    goto L12(r28);
  L37():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx9);
  L38():
    rep = ldf rep in base;
    r13 = dyn rep(NA_INT, <sym len>);
    goto L9(r13);
  L39():
    r11 = dyn base2(NA_INT, <sym len>);
    goto L9(r11);
  L40():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        value9 = ld value;
        value10 = force? value9;
        checkMissing(value10);
        return value10;
      };
      p2 = prom<V +>{
        rownames = ld rownames;
        rownames1 = force? rownames;
        checkMissing(rownames1);
        return rownames1;
      };
      r17 = dyn lapply(p1, p2);
      return r17;
    };
    p4 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    p5 = prom<V +>{
      drop1 = ld drop;
      drop2 = force? drop1;
      checkMissing(drop2);
      return drop2;
    };
    r21 = dyn unsplit[, , drop](p3, p4, p5);
    check L41() else D9();
  L51():
    dx18 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx18);
  L52():
    rep1 = ldf rep in base;
    r27 = dyn rep1(NA_INT, <sym len>);
    goto L13(dx17, r27);
  L53():
    r25 = dyn base3(NA_INT, <sym len>);
    goto L13(dx17, r25);
  L57():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  D9():
    deopt 42 [r21];
  L41():
    l = ld x;
    rownames__ = ldf `rownames<-`;
    check L42() else D10();
  D10():
    deopt 44 [r21, l, r21];
  L42():
    r22 = dyn rownames__(l, NULL, r21);
    check L43() else D11();
  D11():
    deopt 46 [r21, r22];
  L43():
    st x = r22;
    goto L10();
  }
}