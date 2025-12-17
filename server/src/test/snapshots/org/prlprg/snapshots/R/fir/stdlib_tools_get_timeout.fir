fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1148639420;
    st get_timeout = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1148639420(tlim) {
  (reg tlim:*) -+> V { var tlim:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tlim1:*, reg tlim2:V, reg c:L, reg c1:L, reg endsWith:cls, reg tlim3:*, reg tlim4:V, reg p:p(V +), reg r3:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:R, reg r8:V, reg sub:cls, reg tlim5:*, reg tlim6:V, reg p1:p(V +), reg r10:V, reg as_numeric:cls, reg r11:V, reg r12:V, reg r13:V, reg endsWith1:cls, reg tlim7:*, reg tlim8:V, reg p2:p(V +), reg r15:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:R, reg r20:V, reg sub1:cls, reg tlim9:*, reg tlim10:V, reg p3:p(V +), reg r22:V, reg as_numeric1:cls, reg r23:V, reg r24:V, reg endsWith2:cls, reg tlim11:*, reg tlim12:V, reg p4:p(V +), reg r26:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg sub2:cls, reg tlim13:*, reg tlim14:V, reg p5:p(V +), reg r30:V, reg as_numeric2:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg tlim15:*, reg tlim16:V, reg as_numeric3:cls, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg tlim17:*, reg tlim18:V, reg is_na:cls, reg r38:V, reg c5:L, reg c6:V, reg tlim19:*, reg tlim20:V, reg r39:V, reg c8:L, reg c9:V, reg c11:L, reg tlim21:*, reg tlim22:V |
    mkenv;
    st tlim = tlim;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L18() else L1();
  L15():
    tlim1 = ld tlim;
    check L17() else D0();
  L16():
    r = dyn base(<sym tlim>);
    goto L0(r);
  D0():
    deopt 1 [tlim1];
  L1():
    goto L9();
  L9():
    sym4 = ldf `as.numeric`;
    base4 = ldf `as.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L17():
    tlim2 = force? tlim1;
    checkMissing(tlim2);
    c = `is.character`(tlim2);
    goto L0(c);
  L18():
    endsWith = ldf endsWith;
    check L19() else D1();
  D1():
    deopt 5 [];
  L10(r34):
    st tlim = r34;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L19():
    p = prom<V +>{
      tlim3 = ld tlim;
      tlim4 = force? tlim3;
      checkMissing(tlim4);
      return tlim4;
    };
    r3 = dyn endsWith(p, "m");
    check L20() else D2();
  L47():
    tlim15 = ld tlim;
    check L49() else D16();
  L48():
    r33 = dyn base4(<sym tlim>);
    goto L10(r33);
  D2():
    deopt 8 [r3];
  D16():
    deopt 62 [tlim15];
  L11(r37):
    c5 = `as.logical`(r37);
    if c5 then L12(c5) else L55();
  L20():
    c2 = `as.logical`(r3);
    if c2 then L21() else L2();
  L49():
    tlim16 = force? tlim15;
    checkMissing(tlim16);
    as_numeric3 = ldf `as.numeric` in base;
    r35 = dyn as_numeric3(tlim16);
    check L50() else D17();
  L51():
    tlim17 = ld tlim;
    check L53() else D18();
  L52():
    r36 = dyn base5(<sym tlim>);
    goto L11(r36);
  D17():
    deopt 65 [r35];
  D18():
    deopt 69 [tlim17];
  L2():
    endsWith1 = ldf endsWith;
    check L28() else D6();
  L4(r13):
    goto L9();
  L12(c6):
    c11 = `as.logical`(c6);
    if c11 then L58() else L13();
  L21():
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L50():
    goto L10(r35);
  L53():
    tlim18 = force? tlim17;
    checkMissing(tlim18);
    is_na = ldf `is.na` in base;
    r38 = dyn is_na(tlim18);
    check L54() else D19();
  L55():
    tlim19 = ld tlim;
    check L56() else D20();
  D6():
    deopt 23 [];
  D19():
    deopt 72 [r38];
  D20():
    deopt 73 [c5, tlim19];
  L3(r7, r8):
    r12 = `*`(r7, r8);
    st tlim = r12;
    goto L4(r12);
  L13():
    goto L14();
  L14():
    tlim21 = ld tlim;
    check L60() else D21();
  L22():
    sub = ldf sub;
    check L24() else D3();
  L23():
    r6 = dyn base1(<lang sub("m$", "", tlim)>);
    goto L3(60.0, r6);
  L28():
    p2 = prom<V +>{
      tlim7 = ld tlim;
      tlim8 = force? tlim7;
      checkMissing(tlim8);
      return tlim8;
    };
    r15 = dyn endsWith1(p2, "h");
    check L29() else D7();
  L54():
    goto L11(r38);
  L56():
    tlim20 = force? tlim19;
    checkMissing(tlim20);
    r39 = `<`(tlim20, 0.0);
    c8 = `as.logical`(r39);
    c9 = `||`(c5, c8);
    goto L12(c9);
  L58():
    st tlim = 0.0;
    goto L14();
  D3():
    deopt 13 [60.0];
  D7():
    deopt 26 [r15];
  D21():
    deopt 83 [tlim21];
  L24():
    p1 = prom<V +>{
      tlim5 = ld tlim;
      tlim6 = force? tlim5;
      checkMissing(tlim6);
      return tlim6;
    };
    r10 = dyn sub("m$", "", p1);
    check L25() else D4();
  L29():
    c3 = `as.logical`(r15);
    if c3 then L30() else L5();
  L60():
    tlim22 = force? tlim21;
    checkMissing(tlim22);
    popenv;
    return tlim22;
  D4():
    deopt 17 [60.0, r10];
  L5():
    endsWith2 = ldf endsWith;
    check L37() else D11();
  L25():
    as_numeric = ldf `as.numeric` in base;
    r11 = dyn as_numeric(r10);
    check L26() else D5();
  L30():
    sym2 = ldf `as.numeric`;
    base2 = ldf `as.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D5():
    deopt 19 [60.0, r11];
  D11():
    deopt 41 [];
  L6(r19, r20):
    r24 = `*`(r19, r20);
    st tlim = r24;
    goto L4(r24);
  L26():
    goto L3(60.0, r11);
  L31():
    sub1 = ldf sub;
    check L33() else D8();
  L32():
    r18 = dyn base2(<lang sub("h$", "", tlim)>);
    goto L6(3600.0, r18);
  L37():
    p4 = prom<V +>{
      tlim11 = ld tlim;
      tlim12 = force? tlim11;
      checkMissing(tlim12);
      return tlim12;
    };
    r26 = dyn endsWith2(p4, "s");
    check L38() else D12();
  D8():
    deopt 31 [3600.0];
  D12():
    deopt 44 [r26];
  L33():
    p3 = prom<V +>{
      tlim9 = ld tlim;
      tlim10 = force? tlim9;
      checkMissing(tlim10);
      return tlim10;
    };
    r22 = dyn sub1("h$", "", p3);
    check L34() else D9();
  L38():
    c4 = `as.logical`(r26);
    if c4 then L39() else L7();
  D9():
    deopt 35 [3600.0, r22];
  L7():
    goto L4(NULL);
  L34():
    as_numeric1 = ldf `as.numeric` in base;
    r23 = dyn as_numeric1(r22);
    check L35() else D10();
  L39():
    sym3 = ldf `as.numeric`;
    base3 = ldf `as.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  D10():
    deopt 37 [3600.0, r23];
  L8(r28):
    st tlim = r28;
    goto L4(r28);
  L35():
    goto L6(3600.0, r23);
  L40():
    sub2 = ldf sub;
    check L42() else D13();
  L41():
    r27 = dyn base3(<lang sub("s$", "", tlim)>);
    goto L8(r27);
  D13():
    deopt 48 [];
  L42():
    p5 = prom<V +>{
      tlim13 = ld tlim;
      tlim14 = force? tlim13;
      checkMissing(tlim14);
      return tlim14;
    };
    r30 = dyn sub2("s$", "", p5);
    check L43() else D14();
  D14():
    deopt 52 [r30];
  L43():
    as_numeric2 = ldf `as.numeric` in base;
    r31 = dyn as_numeric2(r30);
    check L44() else D15();
  D15():
    deopt 54 [r31];
  L44():
    goto L8(r31);
  }
}