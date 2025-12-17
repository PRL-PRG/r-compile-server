fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2132329170;
    st `solve.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2132329170(a, b, tol, LINPACK, `...`) {
  (reg a:*, reg b:*, reg tol:*, reg LINPACK:*, reg ddd:dots) -+> V { var a:*, var b:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var LINPACK:*, reg LINPACK_isMissing:L, reg LINPACK_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c1:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg a1:*, reg a2:V, reg inherits:cls, reg r10:V, reg c2:L, reg warning:cls, reg r11:V, reg solve_qr:cls, reg a3:*, reg a4:V, reg p1:p(V +), reg b1:*, reg b2:V, reg p2:p(V +), reg r14:V, reg as_matrix:cls, reg a5:*, reg a6:V, reg p3:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg a7:*, reg a8:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg missing1:cls, reg r23:V, reg c4:L, reg diag:cls, reg isc:*, reg isc1:V, reg c5:L, reg p4:p(V +), reg nrow:cls, reg a9:*, reg a10:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg rownames:cls, reg a11:*, reg a12:V, reg p7:p(V +), reg r30:V, reg l:*, reg colnames__:cls, reg r31:V, reg isc2:*, reg isc3:V, reg c6:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg c11:L, reg r34:V, reg missing2:cls, reg r35:V, reg r36:V, reg c12:L, reg c15:L, reg c16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg c21:L, reg c22:L, reg r38:V, reg b3:*, reg b4:V, reg c23:L, reg c24:L, reg c25:V, reg c28:L, reg c29:V, reg c31:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg a13:*, reg a14:V, reg b5:*, reg b6:V, reg tol1:*, reg tol2:V, reg La_solve_cmplx:cls, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg a15:*, reg a16:V, reg b7:*, reg b8:V, reg tol3:*, reg tol4:V, reg La_solve:cls, reg r44:V |
    mkenv;
    st a = a;
    st b = b;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0() else L1(tol);
  L0():
    p = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(_Machine1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Machine3):
      r = `$`(_Machine3, <sym double.eps>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(tol_orDefault):
    st tol = tol_orDefault;
    LINPACK_isMissing = missing.0(LINPACK);
    if LINPACK_isMissing then L2(FALSE) else L2(LINPACK);
  L2(LINPACK_orDefault):
    st LINPACK = LINPACK_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L3(r3):
    r5 = `!`(r3);
    c1 = `as.logical`(r5);
    if c1 then L22() else L4();
  L20():
    missing = ldf missing in base;
    r4 = dyn missing(<sym LINPACK>);
    goto L3(r4);
  L21():
    r2 = dyn base(<sym LINPACK>);
    goto L3(r2);
  L4():
    goto L5();
  L5():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L22():
    stop = ldf stop;
    check L23() else D0();
  D0():
    deopt 5 [];
  L6(r9):
    c2 = `as.logical`(r9);
    if c2 then L30() else L7();
  L23():
    r6 = dyn stop("the LINPACK argument has been defunct since R 3.1.0");
    check L24() else D1();
  L26():
    a1 = ld a;
    check L28() else D2();
  L27():
    r8 = dyn base1(<sym a>, "qr");
    goto L6(r8);
  D1():
    deopt 7 [r6];
  D2():
    deopt 12 [a1];
  L7():
    as_matrix = ldf `as.matrix`;
    check L37() else D8();
  L24():
    goto L5();
  L28():
    a2 = force? a1;
    checkMissing(a2);
    inherits = ldf inherits in base;
    r10 = dyn inherits(a2, "qr", FALSE);
    check L29() else D3();
  L30():
    warning = ldf warning;
    check L31() else D4();
  D3():
    deopt 17 [r10];
  D4():
    deopt 19 [];
  D8():
    deopt 31 [];
  L29():
    goto L6(r10);
  L31():
    r11 = dyn warning("solve.default called with a \"qr\" object: use 'qr.solve'");
    check L32() else D5();
  L37():
    p3 = prom<V +>{
      a5 = ld a;
      a6 = force? a5;
      checkMissing(a6);
      return a6;
    };
    r18 = dyn as_matrix(p3);
    check L38() else D9();
  D5():
    deopt 21 [r11];
  D9():
    deopt 33 [r18];
  L32():
    solve_qr = ldf `solve.qr`;
    check L33() else D6();
  L38():
    st a = r18;
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D6():
    deopt 23 [];
  L9(r20):
    st isc = r20;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L33():
    p1 = prom<V +>{
      a3 = ld a;
      a4 = force? a3;
      checkMissing(a4);
      return a4;
    };
    p2 = prom<V +>{
      b1 = ld b;
      b2 = force? b1;
      checkMissing(b2);
      return b2;
    };
    r14 = dyn solve_qr(p1, p2);
    check L34() else D7();
  L39():
    a7 = ld a;
    check L41() else D10();
  L40():
    r19 = dyn base2(<sym a>);
    goto L9(r19);
  D7():
    deopt 26 [r14];
  D10():
    deopt 36 [a7];
  L10(r22):
    c4 = `as.logical`(r22);
    if c4 then L44() else L11();
  L34():
    popenv;
    return r14;
  L41():
    a8 = force? a7;
    checkMissing(a8);
    c3 = `is.complex`(a8);
    goto L9(c3);
  L42():
    missing1 = ldf missing in base;
    r23 = dyn missing1(<sym b>);
    goto L10(r23);
  L43():
    r21 = dyn base3(<sym b>);
    goto L10(r21);
  L11():
    goto L12();
  L12():
    isc2 = ld isc;
    check L52() else D17();
  L44():
    diag = ldf diag;
    check L45() else D11();
  D11():
    deopt 44 [];
  D17():
    deopt 60 [isc2];
  L45():
    p4 = prom<V +>{
      isc = ld isc;
      isc1 = force? isc;
      checkMissing(isc1);
      c5 = `as.logical`(isc1);
      if c5 then L1() else L0();
    L0():
      return 1.0;
    L1():
      return 1.0+0.0i;
    };
    p6 = prom<V +>{
      nrow = ldf nrow;
      p5 = prom<V +>{
        a9 = ld a;
        a10 = force? a9;
        checkMissing(a10);
        return a10;
      };
      r26 = dyn nrow(p5);
      return r26;
    };
    r28 = dyn diag(p4, p6);
    check L46() else D12();
  L52():
    isc3 = force? isc2;
    checkMissing(isc3);
    c6 = `as.logical`(isc3);
    if c6 then L13(c6) else L53();
  D12():
    deopt 47 [r28];
  L13(c7):
    c31 = `as.logical`(c7);
    if c31 then L62() else L17();
  L46():
    st b = r28;
    rownames = ldf rownames;
    check L47() else D13();
  L53():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  D13():
    deopt 50 [];
  L14(c11, r34):
    r36 = `!`(r34);
    c12 = `as.logical`(r36);
    if c12 then L56() else L15(c11, c12);
  L17():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L47():
    p7 = prom<V +>{
      a11 = ld a;
      a12 = force? a11;
      checkMissing(a12);
      return a12;
    };
    r30 = dyn rownames(p7);
    check L48() else D14();
  L54():
    missing2 = ldf missing in base;
    r35 = dyn missing2(<sym b>);
    goto L14(c6, r35);
  L55():
    r33 = dyn base4(<sym b>);
    goto L14(c6, r33);
  L62():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  D14():
    deopt 52 [r30];
  L15(c15, c16):
    c28 = `as.logical`(c16);
    c29 = `||`(c15, c28);
    goto L13(c29);
  L18(r40):
    popenv;
    return r40;
  L19(r43):
    popenv;
    return r43;
  L48():
    l = ld b;
    colnames__ = ldf `colnames<-`;
    check L49() else D15();
  L56():
    sym5 = ldf `is.complex`;
    base5 = ldf `is.complex` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L63():
    a13 = ld a;
    check L65() else D19();
  L64():
    r39 = dyn base6(<lang La_solve_cmplx(a, b, tol)>);
    goto L18(r39);
  L70():
    a15 = ld a;
    check L72() else D23();
  L71():
    r42 = dyn base7(<lang La_solve(a, b, tol)>);
    goto L19(r42);
  D15():
    deopt 54 [r30, l, r30];
  D19():
    deopt 74 [a13];
  D23():
    deopt 84 [a15];
  L16(c21, c22, r38):
    c24 = `as.logical`(r38);
    c25 = `&&`(c22, c24);
    goto L15(c21, c25);
  L49():
    r31 = dyn colnames__(l, NULL, r30);
    check L50() else D16();
  L57():
    b3 = ld b;
    check L59() else D18();
  L58():
    r37 = dyn base5(<sym b>);
    goto L16(c11, c12, r37);
  L65():
    a14 = force? a13;
    checkMissing(a14);
    b5 = ld b;
    check L66() else D20();
  L72():
    a16 = force? a15;
    checkMissing(a16);
    b7 = ld b;
    check L73() else D24();
  D16():
    deopt 56 [r30, r31];
  D18():
    deopt 67 [c11, c12, b3];
  D20():
    deopt 76 [b5];
  D24():
    deopt 86 [b7];
  L50():
    st b = r31;
    goto L12();
  L59():
    b4 = force? b3;
    checkMissing(b4);
    c23 = `is.complex`(b4);
    goto L16(c11, c12, c23);
  L66():
    b6 = force? b5;
    checkMissing(b6);
    tol1 = ld tol;
    check L67() else D21();
  L73():
    b8 = force? b7;
    checkMissing(b8);
    tol3 = ld tol;
    check L74() else D25();
  D21():
    deopt 78 [tol1];
  D25():
    deopt 88 [tol3];
  L67():
    tol2 = force? tol1;
    checkMissing(tol2);
    La_solve_cmplx = ldf La_solve_cmplx in base;
    r41 = dyn La_solve_cmplx(a14, b6, tol2);
    check L68() else D22();
  L74():
    tol4 = force? tol3;
    checkMissing(tol4);
    La_solve = ldf La_solve in base;
    r44 = dyn La_solve(a16, b8, tol4);
    check L75() else D26();
  D22():
    deopt 81 [r41];
  D26():
    deopt 91 [r44];
  L68():
    goto L18(r41);
  L75():
    goto L19(r44);
  }
}