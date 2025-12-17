fun main() {
  () -+> V { reg r:cls, reg stem:cls, reg islands:*, reg islands1:V, reg p:p(V +), reg r2:V, reg stem1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg islands2:*, reg islands3:V, reg log10:cls, reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos inner1922751032;
    st stem = r;
    stem = ldf stem;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      islands = ld islands;
      islands1 = force? islands;
      checkMissing(islands1);
      return islands1;
    };
    r2 = dyn stem(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    stem1 = ldf stem;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym = ldf log10;
      base = ldf log10 in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      islands2 = ld islands;
      islands3 = force? islands2;
      checkMissing(islands3);
      log10 = ldf log10 in base;
      r5 = dyn log10(islands3);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym islands>);
      goto L0(r3);
    };
    r7 = dyn stem1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun inner1922751032(x, scale, width, atom) {
  (reg x:*, reg scale:*, reg width:*, reg atom:*) -+> V { var x:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var atom:*, reg atom_isMissing:L, reg atom_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg x9:V, reg r7:V, reg x10:*, reg x11:V, reg is_finite:cls, reg r8:V, reg __:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x12:*, reg x13:V, reg length:cls, reg r14:V, reg as_integer:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg n:*, reg n1:V, reg is_na:cls, reg r18:V, reg c2:L, reg stop1:cls, reg r19:V, reg n2:*, reg n3:V, reg r21:V, reg c3:L, reg stop2:cls, reg r22:V, reg scale1:*, reg scale2:V, reg r24:V, reg c4:L, reg stop3:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg C_StemLeaf:*, reg C_StemLeaf1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg C_StemLeaf4:V, reg r30:V, reg x14:*, reg x15:V, reg as_double:cls, reg r31:V, reg scale3:*, reg scale4:V, reg width1:*, reg width2:V, reg atom1:*, reg atom2:V, reg vargs:dots, reg r32:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg invisible:cls, reg r35:V |
    mkenv;
    st x = x;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(1.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L1(80.0) else L1(width);
  L1(width_orDefault):
    st width = width_orDefault;
    atom_isMissing = missing.0(atom);
    if atom_isMissing then L2(1.0E-8) else L2(atom);
  L2(atom_orDefault):
    st atom = atom_orDefault;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L24() else L4();
  L20():
    x1 = ld x;
    check L22() else D0();
  L21():
    r = dyn base(<sym x>);
    goto L3(r);
  D0():
    deopt 2 [x1];
  L4():
    goto L5();
  L5():
    x3 = ld x;
    check L28() else D4();
  L22():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(x2);
    check L23() else D1();
  L24():
    stop = ldf stop;
    check L25() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 13 [x3];
  L23():
    goto L3(r2);
  L25():
    r4 = dyn stop("'x' must be numeric");
    check L26() else D3();
  L28():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L29() else L30(x4);
  D3():
    deopt 10 [r4];
  L6(dx1):
    st x = dx1;
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L26():
    goto L5();
  L29():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(x6):
    sym1 = ldf `is.finite`;
    base1 = ldf `is.finite` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L7(x9, r7):
    __ = ldf `[` in base;
    r9 = dyn __(x9, r7);
    goto L6(r9);
  L8(r11):
    st n = r11;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L32():
    x10 = ld x;
    check L34() else D5();
  L33():
    r6 = dyn base1(<sym x>);
    goto L7(x6, r6);
  L36():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L37():
    r10 = dyn base2(<lang length(x)>);
    goto L8(r10);
  D5():
    deopt 17 [x6, x10];
  L9(r13):
    as_integer = ldf `as.integer` in base;
    r15 = dyn as_integer(r13);
    check L42() else D9();
  L10(r17):
    c2 = `as.logical`(r17);
    if c2 then L47() else L11();
  L34():
    x11 = force? x10;
    checkMissing(x11);
    is_finite = ldf `is.finite` in base;
    r8 = dyn is_finite(x11);
    check L35() else D6();
  L38():
    x12 = ld x;
    check L40() else D7();
  L39():
    r12 = dyn base3(<sym x>);
    goto L9(r12);
  L43():
    n = ld n;
    check L45() else D10();
  L44():
    r16 = dyn base4(<sym n>);
    goto L10(r16);
  D6():
    deopt 20 [x6, r8];
  D7():
    deopt 27 [x12];
  D9():
    deopt 32 [r15];
  D10():
    deopt 36 [n];
  L11():
    goto L12();
  L12():
    n2 = ld n;
    check L51() else D14();
  L35():
    goto L7(x6, r8);
  L40():
    x13 = force? x12;
    checkMissing(x13);
    length = ldf length in base;
    r14 = dyn length(x13);
    check L41() else D8();
  L42():
    goto L8(r15);
  L45():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(n1);
    check L46() else D11();
  L47():
    stop1 = ldf stop;
    check L48() else D12();
  D8():
    deopt 30 [r14];
  D11():
    deopt 39 [r18];
  D12():
    deopt 41 [];
  D14():
    deopt 46 [n2];
  L41():
    goto L9(r14);
  L46():
    goto L10(r18);
  L48():
    r19 = dyn stop1("invalid length(x)");
    check L49() else D13();
  L51():
    n3 = force? n2;
    checkMissing(n3);
    r21 = `==`(n3, 0.0);
    c3 = `as.logical`(r21);
    if c3 then L52() else L13();
  D13():
    deopt 43 [r19];
  L13():
    goto L14();
  L14():
    scale1 = ld scale;
    check L56() else D17();
  L49():
    goto L12();
  L52():
    stop2 = ldf stop;
    check L53() else D15();
  D15():
    deopt 51 [];
  D17():
    deopt 56 [scale1];
  L53():
    r22 = dyn stop2("no finite and non-missing values");
    check L54() else D16();
  L56():
    scale2 = force? scale1;
    checkMissing(scale2);
    r24 = `<=`(scale2, 0.0);
    c4 = `as.logical`(r24);
    if c4 then L57() else L15();
  D16():
    deopt 53 [r22];
  L15():
    goto L16();
  L16():
    sym5 = ldf `.Call`;
    base5 = ldf `.Call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L54():
    goto L14();
  L57():
    stop3 = ldf stop;
    check L58() else D18();
  D18():
    deopt 61 [];
  L17():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L58():
    r25 = dyn stop3("'scale' must be positive");
    check L59() else D19();
  L61():
    C_StemLeaf = ld C_StemLeaf;
    check L63() else D20();
  L62():
    r27 = dyn base5(<sym C_StemLeaf>, <lang as.double(x)>, <sym scale>, <sym width>, <sym atom>);
    goto L17();
  D19():
    deopt 63 [r25];
  D20():
    deopt 67 [C_StemLeaf];
  L19(r34):
    popenv;
    return r34;
  L59():
    goto L16();
  L63():
    C_StemLeaf1 = force? C_StemLeaf;
    checkMissing(C_StemLeaf1);
    sym6 = ldf `as.double`;
    base6 = ldf `as.double` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L71():
    invisible = ldf invisible in base;
    r35 = dyn invisible(NULL);
    check L73() else D26();
  L72():
    r33 = dyn base7(NULL);
    goto L19(r33);
  D26():
    deopt 82 [r35];
  L18(C_StemLeaf4, r30):
    scale3 = ld scale;
    check L68() else D23();
  L64():
    x14 = ld x;
    check L66() else D21();
  L65():
    r29 = dyn base6(<sym x>);
    goto L18(C_StemLeaf1, r29);
  L73():
    goto L19(r35);
  D21():
    deopt 70 [C_StemLeaf1, x14];
  D23():
    deopt 73 [C_StemLeaf4, r30, scale3];
  L66():
    x15 = force? x14;
    checkMissing(x15);
    as_double = ldf `as.double` in base;
    r31 = dyn as_double(x15);
    check L67() else D22();
  L68():
    scale4 = force? scale3;
    checkMissing(scale4);
    width1 = ld width;
    check L69() else D24();
  D22():
    deopt 73 [C_StemLeaf1, r31];
  D24():
    deopt 74 [C_StemLeaf4, r30, scale4, width1];
  L67():
    goto L18(C_StemLeaf1, r31);
  L69():
    width2 = force? width1;
    checkMissing(width2);
    atom1 = ld atom;
    check L70() else D25();
  D25():
    deopt 75 [C_StemLeaf4, r30, scale4, width2, atom1];
  L70():
    atom2 = force? atom1;
    checkMissing(atom2);
    vargs = dots[r30, scale4, width2, atom2];
    r32 = `.Call`(C_StemLeaf4, vargs, <missing>);
    goto L17();
  }
}