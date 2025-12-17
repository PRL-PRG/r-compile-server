fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner934078868;
    st `qr.R` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner934078868(qr, complete) {
  (reg qr:*, reg complete:*) -+> V { var qr:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, reg is_qr:cls, reg qr1:*, reg qr2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg qr3:*, reg qr4:V, reg c1:L, reg qr6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg complete1:*, reg complete2:V, reg r6:V, reg c2:L, reg R:*, reg R1:V, reg c3:L, reg R3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg R9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg R12:V, reg r12:V, reg R13:*, reg R14:V, reg dim:cls, reg r13:V, reg min:cls, reg r14:V, reg seq_int:cls, reg r15:V, reg __:cls, reg r16:V, reg l:*, reg c4:L, reg r18:R, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg row:cls, reg R15:*, reg R16:V, reg p1:p(V +), reg r22:V, reg col:cls, reg R17:*, reg R18:V, reg p2:p(V +), reg r24:V, reg r25:V, reg ___:cls, reg r26:V, reg R19:*, reg R20:V |
    mkenv;
    st qr = qr;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(FALSE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    is_qr = ldf `is.qr`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      qr1 = ld qr;
      qr2 = force? qr1;
      checkMissing(qr2);
      return qr2;
    };
    r1 = dyn is_qr(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L12() else L1();
  L1():
    goto L2();
  L2():
    qr3 = ld qr;
    check L16() else D4();
  L12():
    stop = ldf stop;
    check L13() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [qr3];
  L13():
    r3 = dyn stop("argument is not a QR decomposition");
    check L14() else D3();
  L16():
    qr4 = force? qr3;
    checkMissing(qr4);
    c1 = `is.object`(qr4);
    if c1 then L18() else L19(qr4);
  D3():
    deopt 8 [r3];
  L14():
    goto L2();
  L17(dx1):
    st R = dx1;
    complete1 = ld complete;
    check L21() else D5();
  L18():
    dr = tryDispatchBuiltin.1("$", qr4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(qr6):
    r5 = `$`(qr6, <sym qr>);
    goto L17(r5);
  D5():
    deopt 15 [complete1];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L21():
    complete2 = force? complete1;
    checkMissing(complete2);
    r6 = `!`(complete2);
    c2 = `as.logical`(r6);
    if c2 then L22() else L3();
  L3():
    goto L8();
  L8():
    l = ld R;
    c4 = `is.object`(l);
    if c4 then L38() else L39(0.0, l);
  L22():
    R = ld R;
    check L23() else D6();
  D6():
    deopt 18 [R];
  L9(dx6):
    st R = dx6;
    R19 = ld R;
    check L45() else D15();
  L23():
    R1 = force? R;
    checkMissing(R1);
    c3 = `is.object`(R1);
    if c3 then L24() else L25(R1);
  L38():
    dr4 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(0.0, dr4);
  L39(r18, l2):
    row = ldf row;
    check L41() else D11();
  D11():
    deopt 46 [r18, l2, 0.0];
  D15():
    deopt 55 [R19];
  L4(dx3):
    st R = dx3;
    goto L8();
  L24():
    dr2 = tryDispatchBuiltin.1("[", R1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(R3):
    sym = ldf `seq.int`;
    base = ldf `seq.int` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L40():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx5);
  L41():
    p1 = prom<V +>{
      R15 = ld R;
      R16 = force? R15;
      checkMissing(R16);
      return R16;
    };
    r22 = dyn row(p1);
    check L42() else D12();
  L45():
    R20 = force? R19;
    checkMissing(R20);
    popenv;
    return R20;
  D12():
    deopt 48 [r18, l2, 0.0, r22];
  L5(r8):
    __ = ldf `[` in base;
    r16 = dyn __(R1, r8, <missing>, FALSE);
    goto L4(r16);
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L27():
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L28():
    r7 = dyn base(<lang min(dim(R))>);
    goto L5(r7);
  L42():
    col = ldf col;
    check L43() else D13();
  D13():
    deopt 49 [r18, l2, 0.0, r22];
  L6(R9, r10):
    seq_int = ldf `seq.int` in base;
    r15 = dyn seq_int(r10);
    check L36() else D10();
  L29():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L30():
    r9 = dyn base1(<lang dim(R)>);
    goto L6(R3, r9);
  L43():
    p2 = prom<V +>{
      R17 = ld R;
      R18 = force? R17;
      checkMissing(R18);
      return R18;
    };
    r24 = dyn col(p2);
    check L44() else D14();
  D10():
    deopt 33 [R9, r15];
  D14():
    deopt 51 [r18, l2, 0.0, r22, r24];
  L7(R12, r12):
    min = ldf min in base;
    r14 = dyn min(r12);
    check L35() else D9();
  L31():
    R13 = ld R;
    check L33() else D7();
  L32():
    r11 = dyn base2(<sym R>);
    goto L7(R3, r11);
  L36():
    goto L5(r15);
  L44():
    r25 = `>`(r22, r24);
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l2, 0.0, r25);
    goto L9(r26);
  D7():
    deopt 26 [R3, R13];
  D9():
    deopt 31 [R12, r14];
  L33():
    R14 = force? R13;
    checkMissing(R14);
    dim = ldf dim in base;
    r13 = dyn dim(R14);
    check L34() else D8();
  L35():
    goto L6(R12, r14);
  D8():
    deopt 29 [R3, r13];
  L34():
    goto L7(R3, r13);
  }
}