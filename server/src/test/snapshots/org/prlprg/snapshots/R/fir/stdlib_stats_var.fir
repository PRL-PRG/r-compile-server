fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3068695774;
    st var = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3068695774(x, y, `na.rm`, use) {
  (reg x:*, reg y:*, reg na_rm:*, reg use:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var use:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg na_rm1:*, reg na_rm2:V, reg c1:L, reg r3:S, reg pmatch:cls, reg use1:*, reg use2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg na_method:*, reg na_method1:V, reg is_na:cls, reg r13:V, reg c3:L, reg stop:cls, reg r14:V, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r17:V, reg c4:L, reg as_matrix:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg x5:*, reg x6:V, reg c5:V, reg r23:V, reg c6:L, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg x7:*, reg x8:V, reg is_atomic:cls, reg r26:V, reg p4:p(V +), reg r28:V, reg is_data_frame1:cls, reg y1:*, reg y2:V, reg p5:p(V +), reg r30:V, reg c7:L, reg as_matrix1:cls, reg y3:*, reg y4:V, reg p6:p(V +), reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg y5:*, reg y6:V, reg c8:V, reg r36:V, reg c9:L, reg stopifnot1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg y7:*, reg y8:V, reg is_atomic1:cls, reg r39:V, reg p7:p(V +), reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg C_cov:*, reg C_cov1:V, reg x9:*, reg x10:V, reg y9:*, reg y10:V, reg na_method2:*, reg na_method3:V, reg vargs:dots, reg r44:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L1(FALSE) else L1(na_rm);
  L1(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    st use = use;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r1):
    c = `as.logical`(r1);
    if c then L21() else L3();
  L19():
    missing = ldf missing in base;
    r2 = dyn missing(<sym use>);
    goto L2(r2);
  L20():
    r = dyn base(<sym use>);
    goto L2(r);
  L3():
    goto L6();
  L6():
    pmatch = ldf pmatch;
    check L26() else D1();
  L21():
    na_rm1 = ld `na.rm`;
    check L22() else D0();
  D0():
    deopt 3 [na_rm1];
  D1():
    deopt 13 [];
  L22():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c1 = `as.logical`(na_rm2);
    if c1 then L23() else L4();
  L26():
    p = prom<V +>{
      use1 = ld use;
      use2 = force? use1;
      checkMissing(use2);
      return use2;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c2 = ldf c in base;
      r8 = dyn c2("all.obs", "complete.obs", "pairwise.complete.obs", "everything", "na.or.complete");
      goto L0(r8);
    L2():
      r6 = dyn base1("all.obs", "complete.obs", "pairwise.complete.obs", "everything", "na.or.complete");
      goto L0(r6);
    };
    r10 = dyn pmatch(p, p1);
    check L27() else D2();
  D2():
    deopt 16 [r10];
  L4():
    goto L5("everything");
  L5(r3):
    st use = r3;
    goto L6();
  L23():
    goto L5("na.or.complete");
  L27():
    st `na.method` = r10;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L32() else L8();
  L28():
    na_method = ld `na.method`;
    check L30() else D3();
  L29():
    r11 = dyn base2(<sym na.method>);
    goto L7(r11);
  D3():
    deopt 20 [na_method];
  L8():
    goto L9();
  L9():
    is_data_frame = ldf `is.data.frame`;
    check L36() else D7();
  L30():
    na_method1 = force? na_method;
    checkMissing(na_method1);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(na_method1);
    check L31() else D4();
  L32():
    stop = ldf stop;
    check L33() else D5();
  D4():
    deopt 23 [r13];
  D5():
    deopt 25 [];
  D7():
    deopt 31 [];
  L31():
    goto L7(r13);
  L33():
    r14 = dyn stop("invalid 'use' argument");
    check L34() else D6();
  L36():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r17 = dyn is_data_frame(p2);
    check L37() else D8();
  D6():
    deopt 27 [r14];
  D8():
    deopt 33 [r17];
  L34():
    goto L9();
  L37():
    c4 = `as.logical`(r17);
    if c4 then L38() else L10();
  L10():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L11():
    is_data_frame1 = ldf `is.data.frame`;
    check L49() else D14();
  L38():
    as_matrix = ldf `as.matrix`;
    check L39() else D9();
  D9():
    deopt 35 [];
  D14():
    deopt 51 [];
  L12(r22):
    r23 = `!`(r22);
    c6 = `as.logical`(r23);
    if c6 then L45() else L13();
  L39():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r19 = dyn as_matrix(p3);
    check L40() else D10();
  L42():
    x5 = ld x;
    check L44() else D11();
  L43():
    r21 = dyn base3(<sym x>);
    goto L12(r21);
  L49():
    p5 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r30 = dyn is_data_frame1(p5);
    check L50() else D15();
  D10():
    deopt 37 [r19];
  D11():
    deopt 40 [x5];
  D15():
    deopt 53 [r30];
  L13():
    goto L11();
  L40():
    st x = r19;
    goto L11();
  L44():
    x6 = force? x5;
    checkMissing(x6);
    c5 = `==`(x6, NULL);
    goto L12(c5);
  L45():
    stopifnot = ldf stopifnot;
    check L46() else D12();
  L50():
    c7 = `as.logical`(r30);
    if c7 then L51() else L14();
  D12():
    deopt 45 [];
  L14():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L15():
    sym7 = ldf `.Call`;
    base7 = ldf `.Call` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  L46():
    p4 = prom<V +>{
      sym4 = ldf `is.atomic`;
      base4 = ldf `is.atomic` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      is_atomic = ldf `is.atomic` in base;
      r26 = dyn is_atomic(x8);
      goto L0(r26);
    L2():
      r24 = dyn base4(<sym x>);
      goto L0(r24);
    };
    r28 = dyn stopifnot(p4);
    check L47() else D13();
  L51():
    as_matrix1 = ldf `as.matrix`;
    check L52() else D16();
  D13():
    deopt 47 [r28];
  D16():
    deopt 55 [];
  L16(r35):
    r36 = `!`(r35);
    c9 = `as.logical`(r36);
    if c9 then L58() else L17();
  L18(r43):
    popenv;
    return r43;
  L47():
    goto L11();
  L52():
    p6 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r32 = dyn as_matrix1(p6);
    check L53() else D17();
  L55():
    y5 = ld y;
    check L57() else D18();
  L56():
    r34 = dyn base5(<sym y>);
    goto L16(r34);
  L62():
    C_cov = ld C_cov;
    check L64() else D21();
  L63():
    r42 = dyn base7(<sym C_cov>, <sym x>, <sym y>, <sym na.method>, FALSE);
    goto L18(r42);
  D17():
    deopt 57 [r32];
  D18():
    deopt 60 [y5];
  D21():
    deopt 71 [C_cov];
  L17():
    goto L15();
  L53():
    st y = r32;
    goto L15();
  L57():
    y6 = force? y5;
    checkMissing(y6);
    c8 = `==`(y6, NULL);
    goto L16(c8);
  L58():
    stopifnot1 = ldf stopifnot;
    check L59() else D19();
  L64():
    C_cov1 = force? C_cov;
    checkMissing(C_cov1);
    x9 = ld x;
    check L65() else D22();
  D19():
    deopt 65 [];
  D22():
    deopt 72 [C_cov1, x9];
  L59():
    p7 = prom<V +>{
      sym6 = ldf `is.atomic`;
      base6 = ldf `is.atomic` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      is_atomic1 = ldf `is.atomic` in base;
      r39 = dyn is_atomic1(y8);
      goto L0(r39);
    L2():
      r37 = dyn base6(<sym y>);
      goto L0(r37);
    };
    r41 = dyn stopifnot1(p7);
    check L60() else D20();
  L65():
    x10 = force? x9;
    checkMissing(x10);
    y9 = ld y;
    check L66() else D23();
  D20():
    deopt 67 [r41];
  D23():
    deopt 73 [C_cov1, x10, y9];
  L60():
    goto L15();
  L66():
    y10 = force? y9;
    checkMissing(y10);
    na_method2 = ld `na.method`;
    check L67() else D24();
  D24():
    deopt 74 [C_cov1, x10, y10, na_method2];
  L67():
    na_method3 = force? na_method2;
    checkMissing(na_method3);
    vargs = dots[x10, y10, na_method3, FALSE];
    r44 = `.Call`(C_cov1, vargs, <missing>);
    goto L18(r44);
  }
}