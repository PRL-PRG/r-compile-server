fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3248147110;
    st `median.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3248147110(x, `na.rm`, `...`) {
  (reg x:*, reg na_rm:*, reg ddd:dots) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var `...`:dots?, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c1:V, reg is_data_frame:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg names:cls, reg r10:V, reg length:cls, reg r11:V, reg c7:L, reg l:*, reg names__:cls, reg r12:V, reg na_rm1:*, reg na_rm2:V, reg c8:L, reg x7:*, reg x8:V, reg c9:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg x13:V, reg r15:V, reg x14:*, reg x15:V, reg is_na:cls, reg r16:V, reg r17:V, reg __:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg x16:*, reg x17:V, reg is_na1:cls, reg r23:V, reg any:cls, reg r24:V, reg c10:L, reg x18:*, reg x19:V, reg c11:L, reg x21:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg x22:*, reg x23:V, reg length1:cls, reg r29:V, reg n:*, reg n1:V, reg r30:V, reg c12:L, reg x24:*, reg x25:V, reg c13:L, reg x27:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r31:V, reg n2:*, reg n3:V, reg r34:V, reg ___:cls, reg r35:V, reg n4:*, reg n5:V, reg __3:cls, reg r36:V, reg r37:V, reg c14:L, reg sort:cls, reg x28:*, reg x29:V, reg p2:p(V +), reg half:*, reg half1:V, reg p3:p(V +), reg r40:V, reg c15:L, reg r42:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg half2:*, reg half3:V, reg __4:cls, reg r43:V, reg mean:cls, reg sort1:cls, reg x30:*, reg x31:V, reg p4:p(V +), reg half4:*, reg half5:V, reg r45:V, reg p5:p(V +), reg r47:V, reg c16:L, reg r49:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg half6:*, reg half7:V, reg r50:V, reg __5:cls, reg r51:V, reg p6:p(V +), reg r53:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    st `...` = ddd;
    is_factor = ldf `is.factor`;
    check L22() else D0();
  D0():
    deopt 1 [];
  L22():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_factor(p);
    check L23() else D1();
  D1():
    deopt 3 [r1];
  L23():
    c = `as.logical`(r1);
    if c then L1(c) else L24();
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L28() else L2();
  L24():
    is_data_frame = ldf `is.data.frame`;
    check L25() else D2();
  D2():
    deopt 5 [c];
  L2():
    goto L3();
  L3():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L25():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn is_data_frame(p1);
    check L26() else D3();
  L28():
    stop = ldf stop;
    check L29() else D4();
  D3():
    deopt 7 [c, r3];
  D4():
    deopt 10 [];
  L4(r7):
    c7 = `as.logical`(r7);
    if c7 then L39() else L6();
  L26():
    c3 = `as.logical`(r3);
    c4 = `||`(c, c3);
    goto L1(c4);
  L29():
    r4 = dyn stop("need numeric data");
    check L30() else D5();
  L32():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L33():
    r6 = dyn base(<lang names(x)>);
    goto L4(r6);
  D5():
    deopt 12 [r4];
  L5(r9):
    length = ldf length in base;
    r11 = dyn length(r9);
    check L38() else D8();
  L6():
    goto L7();
  L7():
    na_rm1 = ld `na.rm`;
    check L43() else D11();
  L30():
    goto L3();
  L34():
    x5 = ld x;
    check L36() else D6();
  L35():
    r8 = dyn base1(<sym x>);
    goto L5(r8);
  L39():
    l = ld x;
    names__ = ldf `names<-`;
    check L40() else D9();
  D6():
    deopt 19 [x5];
  D8():
    deopt 24 [r11];
  D9():
    deopt 28 [NULL, l, NULL];
  D11():
    deopt 34 [na_rm1];
  L36():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r10 = dyn names(x6);
    check L37() else D7();
  L38():
    goto L4(r11);
  L40():
    r12 = dyn names__(l, NULL, NULL);
    check L41() else D10();
  L43():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c8 = `as.logical`(na_rm2);
    if c8 then L44() else L8();
  D7():
    deopt 22 [r10];
  D10():
    deopt 30 [NULL, r12];
  L8():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L11():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L37():
    goto L5(r10);
  L41():
    st x = r12;
    goto L7();
  L44():
    x7 = ld x;
    check L45() else D12();
  D12():
    deopt 36 [x7];
  L12(r20):
    c10 = `as.logical`(r20);
    if c10 then L61() else L14();
  L16(r28):
    st n = r28;
    n = ld n;
    check L72() else D21();
  L45():
    x8 = force? x7;
    checkMissing(x8);
    c9 = `is.object`(x8);
    if c9 then L46() else L47(x8);
  L54():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L55():
    r19 = dyn base3(<lang is.na(x)>);
    goto L12(r19);
  L68():
    x22 = ld x;
    check L70() else D19();
  L69():
    r27 = dyn base5(<sym x>);
    goto L16(r27);
  D19():
    deopt 67 [x22];
  D21():
    deopt 72 [n];
  L9(dx1):
    st x = dx1;
    goto L11();
  L13(r22):
    any = ldf any in base;
    r24 = dyn any(r22);
    check L60() else D17();
  L14():
    goto L11();
  L46():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(x10):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L56():
    x16 = ld x;
    check L58() else D15();
  L57():
    r21 = dyn base4(<sym x>);
    goto L13(r21);
  L61():
    x18 = ld x;
    check L62() else D18();
  L70():
    x23 = force? x22;
    checkMissing(x23);
    length1 = ldf length in base;
    r29 = dyn length1(x23);
    check L71() else D20();
  L72():
    n1 = force? n;
    checkMissing(n1);
    r30 = `==`(n1, 0);
    c12 = `as.logical`(r30);
    if c12 then L73() else L17();
  D15():
    deopt 51 [x16];
  D17():
    deopt 56 [r24];
  D18():
    deopt 57 [x18];
  D20():
    deopt 70 [r29];
  L10(x13, r15):
    r17 = `!`(r15);
    __ = ldf `[` in base;
    r18 = dyn __(x13, r17);
    goto L9(r18);
  L17():
    n2 = ld n;
    check L80() else D23();
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L49():
    x14 = ld x;
    check L51() else D13();
  L50():
    r14 = dyn base2(<sym x>);
    goto L10(x10, r14);
  L58():
    x17 = force? x16;
    checkMissing(x17);
    is_na1 = ldf `is.na` in base;
    r23 = dyn is_na1(x17);
    check L59() else D16();
  L60():
    goto L12(r24);
  L62():
    x19 = force? x18;
    checkMissing(x19);
    c11 = `is.object`(x19);
    if c11 then L63() else L64(x19);
  L71():
    goto L16(r29);
  L73():
    x24 = ld x;
    check L74() else D22();
  D13():
    deopt 40 [x10, x14];
  D16():
    deopt 54 [r23];
  D22():
    deopt 76 [x24];
  D23():
    deopt 85 [n2];
  L15(dx4):
    popenv;
    return dx4;
  L51():
    x15 = force? x14;
    checkMissing(x15);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(x15);
    check L52() else D14();
  L59():
    goto L13(r23);
  L63():
    dr2 = tryDispatchBuiltin.1("[", x19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(dr2);
  L64(x21):
    __1 = ldf `[` in base;
    r25 = dyn __1(x21, NA_INT);
    goto L15(r25);
  L74():
    x25 = force? x24;
    checkMissing(x25);
    c13 = `is.object`(x25);
    if c13 then L75() else L76(x25);
  L80():
    n3 = force? n2;
    checkMissing(n3);
    r34 = `+`(n3, 1);
    ___ = ldf `%/%` in base;
    r35 = dyn ___(r34, 2);
    check L81() else D24();
  D14():
    deopt 43 [x10, r16];
  D24():
    deopt 91 [r35];
  L18(dx6):
    popenv;
    return dx6;
  L52():
    goto L10(x10, r16);
  L65():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx3);
  L75():
    dr4 = tryDispatchBuiltin.1("[", x25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L77() else L76(dr4);
  L76(x27):
    __2 = ldf `[` in base;
    r31 = dyn __2(x27, NA_INT);
    goto L18(r31);
  L81():
    st half = r35;
    n4 = ld n;
    check L82() else D25();
  D25():
    deopt 94 [n4];
  L77():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx5);
  L82():
    n5 = force? n4;
    checkMissing(n5);
    __3 = ldf `%%` in base;
    r36 = dyn __3(n5, 2);
    check L83() else D26();
  D26():
    deopt 98 [r36];
  L83():
    r37 = `==`(r36, 1);
    c14 = `as.logical`(r37);
    if c14 then L84() else L20();
  L20():
    mean = ldf mean;
    check L92() else D30();
  L84():
    sort = ldf sort;
    check L85() else D27();
  D27():
    deopt 102 [];
  D30():
    deopt 111 [];
  L85():
    p2 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    p3 = prom<V +>{
      half = ld half;
      half1 = force? half;
      checkMissing(half1);
      return half1;
    };
    r40 = dyn sort[, partial](p2, p3);
    check L86() else D28();
  L92():
    p6 = prom<V +>{
      sort1 = ldf sort;
      p4 = prom<V +>{
        x30 = ld x;
        x31 = force? x30;
        checkMissing(x31);
        return x31;
      };
      p5 = prom<V +>{
        half4 = ld half;
        half5 = force? half4;
        checkMissing(half5);
        r45 = `+`(half5, <int 0, 1>);
        return r45;
      };
      r47 = dyn sort1[, partial](p4, p5);
      c16 = `is.object`(r47);
      if c16 then L1() else L2(r47);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", r47);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(r49):
      half6 = ld half;
      half7 = force? half6;
      checkMissing(half7);
      r50 = `+`(half7, <int 0, 1>);
      __5 = ldf `[` in base;
      r51 = dyn __5(r49, r50);
      goto L0(r51);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r53 = dyn mean(p6);
    check L93() else D31();
  D28():
    deopt 106 [r40];
  D31():
    deopt 113 [r53];
  L86():
    c15 = `is.object`(r40);
    if c15 then L87() else L88(r40);
  L93():
    popenv;
    return r53;
  L21(dx8):
    popenv;
    return dx8;
  L87():
    dr6 = tryDispatchBuiltin.1("[", r40);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L89() else L88(dr6);
  L88(r42):
    half2 = ld half;
    check L90() else D29();
  D29():
    deopt 107 [r42, half2];
  L89():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx7);
  L90():
    half3 = force? half2;
    __4 = ldf `[` in base;
    r43 = dyn __4(r42, half3);
    goto L21(r43);
  }
}