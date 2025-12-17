fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st closeAllConnections = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sink_number:cls, reg r:V, reg i:*, reg i1:V, reg r1:V, reg c:L, reg sink:cls, reg stderr:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sink_number1:cls, reg r6:V, reg n:*, reg n1:V, reg r7:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg n2:*, reg n3:V, reg r10:I, reg s:V, reg l:I, reg i2:I, reg i3:I, reg i4:I, reg c2:L, reg x:V, reg sink1:cls, reg r11:V, reg gc:cls, reg r12:V, reg getAllConnections:cls, reg r13:V, reg set:*, reg set1:V, reg c3:L, reg set3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg set4:*, reg set5:V, reg r14:V, reg __:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg set6:*, reg set7:V, reg r18:I, reg s1:V, reg l1:I, reg i8:I, reg i9:I, reg i10:I, reg c4:L, reg x1:V, reg close:cls, reg getConnection:cls, reg set8:*, reg set9:V, reg c5:L, reg set11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i13:*, reg i14:V, reg __1:cls, reg r19:V, reg p1:p(V +), reg r21:V, reg p2:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg invisible:cls, reg r26:V |
    mkenv;
    sink_number = ldf `sink.number`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r = dyn sink_number[type]("message");
    check L13() else D1();
  D1():
    deopt 4 [r];
  L13():
    st i = r;
    i = ld i;
    check L14() else D2();
  D2():
    deopt 6 [i];
  L14():
    i1 = force? i;
    checkMissing(i1);
    r1 = `>`(i1, 0);
    c = `as.logical`(r1);
    if c then L15() else L0();
  L0():
    goto L1();
  L1():
    sink_number1 = ldf `sink.number`;
    check L19() else D5();
  L15():
    sink = ldf sink;
    check L16() else D3();
  D3():
    deopt 11 [];
  D5():
    deopt 19 [];
  L16():
    p = prom<V +>{
      stderr = ldf stderr;
      r2 = dyn stderr();
      return r2;
    };
    r4 = dyn sink[, type](p, "message");
    check L17() else D4();
  L19():
    r6 = dyn sink_number1();
    check L20() else D6();
  D4():
    deopt 15 [r4];
  D6():
    deopt 20 [r6];
  L17():
    goto L1();
  L20():
    st n = r6;
    n = ld n;
    check L21() else D7();
  D7():
    deopt 22 [n];
  L21():
    n1 = force? n;
    checkMissing(n1);
    r7 = `>`(n1, 0);
    c1 = `as.logical`(r7);
    if c1 then L22() else L2();
  L2():
    goto L6();
  L6():
    gc = ldf gc;
    check L30() else D11();
  L22():
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  D11():
    deopt 39 [];
  L3(r9):
    s = toForSeq(r9);
    l = length(s);
    i2 = 0;
    goto L4(i2);
  L23():
    n2 = ld n;
    check L25() else D8();
  L24():
    r8 = dyn base(<sym n>);
    goto L3(r8);
  L30():
    r12 = dyn gc();
    check L31() else D12();
  D8():
    deopt 27 [n2];
  D12():
    deopt 40 [r12];
  L4(i3):
    i4 = `+`.1(i3, 1);
    c2 = `<`.1(l, i4);
    if c2 then L26() else L5();
  L25():
    n3 = force? n2;
    checkMissing(n3);
    r10 = seq_len(n3);
    goto L3(r10);
  L31():
    getAllConnections = ldf getAllConnections;
    check L32() else D13();
  D13():
    deopt 42 [];
  L5():
    x = `[[`(s, i4, NULL, TRUE);
    st i = x;
    sink1 = ldf sink;
    check L27() else D9();
  L26():
    goto L6();
  L32():
    r13 = dyn getAllConnections();
    check L33() else D14();
  D9():
    deopt 31 [i4];
  D14():
    deopt 43 [r13];
  L27():
    r11 = dyn sink1();
    check L28() else D10();
  L33():
    st set = r13;
    set = ld set;
    check L34() else D15();
  D10():
    deopt 32 [i4, r11];
  D15():
    deopt 45 [set];
  L28():
    goto L4(i4);
  L34():
    set1 = force? set;
    checkMissing(set1);
    c3 = `is.object`(set1);
    if c3 then L35() else L36(set1);
  L7(dx1):
    st set = dx1;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L35():
    dr = tryDispatchBuiltin.1("[", set1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(set3):
    set4 = ld set;
    check L38() else D16();
  D16():
    deopt 47 [set3, set4];
  L8(r17):
    s1 = toForSeq(r17);
    l1 = length(s1);
    i8 = 0;
    goto L9(i8);
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L38():
    set5 = force? set4;
    checkMissing(set5);
    r14 = `>`(set5, 2);
    __ = ldf `[` in base;
    r15 = dyn __(set3, r14);
    goto L7(r15);
  L39():
    set6 = ld set;
    check L41() else D17();
  L40():
    r16 = dyn base1(<sym set>);
    goto L8(r16);
  D17():
    deopt 54 [set6];
  L9(i9):
    i10 = `+`.1(i9, 1);
    c4 = `<`.1(l1, i10);
    if c4 then L42() else L10();
  L41():
    set7 = force? set6;
    checkMissing(set7);
    r18 = seq_along(set7);
    goto L8(r18);
  L10():
    x1 = `[[`(s1, i10, NULL, TRUE);
    st i = x1;
    close = ldf close;
    check L43() else D18();
  L42():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  D18():
    deopt 58 [i10];
  L11(r25):
    popenv;
    return r25;
  L43():
    p2 = prom<V +>{
      getConnection = ldf getConnection;
      p1 = prom<V +>{
        set8 = ld set;
        set9 = force? set8;
        checkMissing(set9);
        c5 = `is.object`(set9);
        if c5 then L1() else L2(set9);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", set9);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(set11):
        i13 = ld i;
        i14 = force? i13;
        __1 = ldf `[` in base;
        r19 = dyn __1(set11, i14);
        goto L0(r19);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r21 = dyn getConnection(p1);
      return r21;
    };
    r23 = dyn close(p2);
    check L44() else D19();
  L45():
    invisible = ldf invisible in base;
    r26 = dyn invisible();
    check L47() else D20();
  L46():
    r24 = dyn base2();
    goto L11(r24);
  D19():
    deopt 60 [i10, r23];
  D20():
    deopt 67 [r26];
  L44():
    goto L9(i10);
  L47():
    goto L11(r26);
  }
}