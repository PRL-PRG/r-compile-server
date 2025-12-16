fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1797206294`;
    st `solve.qr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1797206294`(a, b, `...`) {
  (reg a:*, reg b:*, reg ddd:dots) -+> V { var a:*, var b:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg ncol:cls, reg a3:*, reg a4:V, reg c1:L, reg a6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p:p(V +), reg r8:V, reg nrow:cls, reg a7:*, reg a8:V, reg c2:L, reg a10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg p1:p(V +), reg r11:V, reg a11:*, reg a12:V, reg c3:L, reg a14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg dx8:V, reg r14:V, reg nc:*, reg nc1:V, reg nr:*, reg nr1:V, reg min:cls, reg r15:V, reg r16:V, reg c4:L, reg stop1:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg missing:cls, reg r21:V, reg c5:L, reg nc2:*, reg nc3:V, reg nr2:*, reg nr3:V, reg r22:V, reg c6:L, reg stop2:cls, reg r23:V, reg diag:cls, reg nc4:*, reg nc5:V, reg p2:p(V +), reg r26:V, reg qr_coef:cls, reg a15:*, reg a16:V, reg p3:p(V +), reg b1:*, reg b2:V, reg p4:p(V +), reg r30:V, reg l:*, reg c7:L, reg r32:R, reg l2:*, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:R, reg l5:*, reg r41:R, reg r42:V, reg res:*, reg res1:V, reg is_na:cls, reg r43:V, reg ___:cls, reg r44:V, reg res2:*, reg res3:V |
    mkenv;
    st a = a;
    st b = b;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L17() else L1();
  L13():
    a1 = ld a;
    check L15() else D0();
  L14():
    r = dyn base(<sym a>, "qr");
    goto L0(r);
  D0():
    deopt 2 [a1];
  L1():
    goto L2();
  L2():
    ncol = ldf ncol;
    check L21() else D4();
  L15():
    a2 = force? a1;
    checkMissing(a2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(a2, "qr", FALSE);
    check L16() else D1();
  L17():
    stop = ldf stop;
    check L18() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L16():
    goto L0(r2);
  L18():
    r4 = dyn stop("this is the \"qr\" method for the generic function solve()");
    check L19() else D3();
  L21():
    p = prom<V +>{
      a3 = ld a;
      a4 = force? a3;
      checkMissing(a4);
      c1 = `is.object`(a4);
      if c1 then L1() else L2(a4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", a4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(a6):
      r6 = `$`(a6, <sym qr>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn ncol(p);
    check L22() else D5();
  D3():
    deopt 12 [r4];
  D5():
    deopt 18 [r8];
  L19():
    goto L2();
  L22():
    st nc = r8;
    nrow = ldf nrow;
    check L23() else D6();
  D6():
    deopt 21 [];
  L23():
    p1 = prom<V +>{
      a7 = ld a;
      a8 = force? a7;
      checkMissing(a8);
      c2 = `is.object`(a8);
      if c2 then L1() else L2(a8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", a8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(a10):
      r9 = `$`(a10, <sym qr>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r11 = dyn nrow(p1);
    check L24() else D7();
  D7():
    deopt 23 [r11];
  L24():
    st nr = r11;
    a11 = ld a;
    check L25() else D8();
  D8():
    deopt 25 [a11];
  L25():
    a12 = force? a11;
    checkMissing(a12);
    c3 = `is.object`(a12);
    if c3 then L27() else L28(a12);
  L26(dx5):
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L27():
    dr4 = tryDispatchBuiltin.1("$", a12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dr4);
  L28(a14):
    r12 = `$`(a14, <sym rank>);
    goto L26(r12);
  L3(dx8, r14):
    r16 = `!=`(dx8, r14);
    c4 = `as.logical`(r16);
    if c4 then L35() else L4();
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx4);
  L30():
    nc = ld nc;
    check L32() else D9();
  L31():
    r13 = dyn base1(<sym nc>, <sym nr>);
    goto L3(dx5, r13);
  D9():
    deopt 29 [dx5, nc];
  L4():
    goto L5();
  L5():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L32():
    nc1 = force? nc;
    checkMissing(nc1);
    nr = ld nr;
    check L33() else D10();
  L35():
    stop1 = ldf stop;
    check L36() else D12();
  D10():
    deopt 31 [dx5, nr];
  D12():
    deopt 37 [];
  L6(r20):
    c5 = `as.logical`(r20);
    if c5 then L41() else L7();
  L33():
    nr1 = force? nr;
    checkMissing(nr1);
    min = ldf min in base;
    r15 = dyn min(nc1, nr1);
    check L34() else D11();
  L36():
    r17 = dyn stop1("singular matrix 'a' in 'solve'");
    check L37() else D13();
  L39():
    missing = ldf missing in base;
    r21 = dyn missing(<sym b>);
    goto L6(r21);
  L40():
    r19 = dyn base2(<sym b>);
    goto L6(r19);
  D11():
    deopt 34 [dx5, r15];
  D13():
    deopt 39 [r17];
  L7():
    goto L10();
  L10():
    qr_coef = ldf `qr.coef`;
    check L51() else D20();
  L34():
    goto L3(dx5, r15);
  L37():
    goto L5();
  L41():
    nc2 = ld nc;
    check L42() else D14();
  D14():
    deopt 45 [nc2];
  D20():
    deopt 64 [];
  L42():
    nc3 = force? nc2;
    checkMissing(nc3);
    nr2 = ld nr;
    check L43() else D15();
  L51():
    p3 = prom<V +>{
      a15 = ld a;
      a16 = force? a15;
      checkMissing(a16);
      return a16;
    };
    p4 = prom<V +>{
      b1 = ld b;
      b2 = force? b1;
      checkMissing(b2);
      return b2;
    };
    r30 = dyn qr_coef(p3, p4);
    check L52() else D21();
  D15():
    deopt 46 [nc3, nr2];
  D21():
    deopt 67 [r30];
  L43():
    nr3 = force? nr2;
    checkMissing(nr3);
    r22 = `!=`(nc3, nr3);
    c6 = `as.logical`(r22);
    if c6 then L44() else L8();
  L52():
    st res = r30;
    l = ld res;
    c7 = `is.object`(l);
    if c7 then L53() else L54(0.0, l);
  L8():
    goto L9();
  L9():
    diag = ldf diag;
    check L48() else D18();
  L11(dx10):
    st res = dx10;
    res2 = ld res;
    check L60() else D24();
  L44():
    stop2 = ldf stop;
    check L45() else D16();
  L53():
    dr6 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L55() else L54(0.0, dr6);
  L54(r32, l2):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  D16():
    deopt 50 [];
  D18():
    deopt 56 [];
  D24():
    deopt 80 [res2];
  L12(r40, l5, r41, r42):
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l5, r41, r42);
    goto L11(r44);
  L45():
    r23 = dyn stop2("only square matrices can be inverted");
    check L46() else D17();
  L48():
    p2 = prom<V +>{
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      return nc5;
    };
    r26 = dyn diag(1.0, p2);
    check L49() else D19();
  L55():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx9);
  L56():
    res = ld res;
    check L58() else D22();
  L57():
    r39 = dyn base3(<sym res>);
    goto L12(r32, l2, 0.0, r39);
  L60():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D17():
    deopt 52 [r23];
  D19():
    deopt 59 [r26];
  D22():
    deopt 74 [r32, l2, 0.0, res];
  L46():
    goto L9();
  L49():
    st b = r26;
    goto L10();
  L58():
    res1 = force? res;
    checkMissing(res1);
    is_na = ldf `is.na` in base;
    r43 = dyn is_na(res1);
    check L59() else D23();
  D23():
    deopt 77 [r32, l2, 0.0, r43];
  L59():
    goto L12(r32, l2, 0.0, r43);
  }
}