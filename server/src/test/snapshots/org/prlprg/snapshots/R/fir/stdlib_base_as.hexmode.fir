fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `as.hexmode` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c7:L, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c10:L, reg r10:V, reg x7:*, reg x8:V, reg is_na:cls, reg r11:V, reg x9:*, reg x10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg c13:L, reg r15:V, reg x13:V, reg r16:V, reg x14:*, reg x15:V, reg as_integer:cls, reg r17:V, reg r18:V, reg r19:V, reg all:cls, reg r20:V, reg c14:L, reg c15:V, reg c17:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg x16:*, reg x17:V, reg as_integer1:cls, reg r23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg x18:*, reg x19:V, reg c18:L, reg c19:L, reg structure:cls, reg x20:*, reg x21:V, reg p:p(V +), reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg x22:*, reg x23:V, reg c20:L, reg c21:L, reg strtoi:cls, reg x24:*, reg x25:V, reg p1:p(V +), reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg z:*, reg z1:V, reg is_na1:cls, reg r39:V, reg z2:*, reg z3:V, reg r40:V, reg r41:V, reg any:cls, reg r42:V, reg r43:V, reg c22:L, reg structure1:cls, reg z4:*, reg z5:V, reg p2:p(V +), reg r45:V, reg stop:cls, reg r49:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    c = `as.logical`(r1);
    if c then L25() else L1();
  L21():
    x1 = ld x;
    check L23() else D0();
  L22():
    r = dyn base(<sym x>, "hexmode");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `is.double`;
    base1 = ldf `is.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "hexmode", FALSE);
    check L24() else D1();
  L25():
    x3 = ld x;
    check L26() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  L3(r6):
    c2 = `as.logical`(r6);
    if c2 then L32() else L4(c2);
  L24():
    goto L0(r2);
  L26():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L29():
    x5 = ld x;
    check L31() else D3();
  L30():
    r5 = dyn base1(<sym x>);
    goto L3(r5);
  D3():
    deopt 14 [x5];
  L4(c4):
    c17 = `as.logical`(c4);
    if c17 then L46() else L8();
  L31():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.double`(x6);
    goto L3(c1);
  L32():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L5(c7, r8):
    c14 = `as.logical`(r8);
    c15 = `&&`(c7, c14);
    goto L4(c15);
  L8():
    goto L10();
  L10():
    sym6 = ldf `is.integer`;
    base6 = ldf `is.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  L33():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L34():
    r7 = dyn base2(<lang `|`(is.na(x), `==`(x, as.integer(x)))>);
    goto L5(c2, r7);
  L46():
    sym5 = ldf `as.integer`;
    base5 = ldf `as.integer` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L6(c10, r10):
    x9 = ld x;
    check L39() else D6();
  L9(r22):
    st x = r22;
    goto L10();
  L11(r26):
    c19 = `as.logical`(r26);
    if c19 then L55() else L12();
  L35():
    x7 = ld x;
    check L37() else D4();
  L36():
    r9 = dyn base3(<sym x>);
    goto L6(c2, r9);
  L47():
    x16 = ld x;
    check L49() else D10();
  L48():
    r21 = dyn base5(<sym x>);
    goto L9(r21);
  L52():
    x18 = ld x;
    check L54() else D12();
  L53():
    r25 = dyn base6(<sym x>);
    goto L11(r25);
  D4():
    deopt 21 [c2, x7];
  D6():
    deopt 24 [c10, r10, x9];
  D10():
    deopt 38 [x16];
  D12():
    deopt 46 [x18];
  L12():
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L60() else L61();
  L37():
    x8 = force? x7;
    checkMissing(x8);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(x8);
    check L38() else D5();
  L39():
    x10 = force? x9;
    checkMissing(x10);
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L49():
    x17 = force? x16;
    checkMissing(x17);
    as_integer1 = ldf `as.integer` in base;
    r23 = dyn as_integer1(x17);
    check L50() else D11();
  L54():
    x19 = force? x18;
    checkMissing(x19);
    c18 = `is.integer`(x19);
    goto L11(c18);
  L55():
    structure = ldf structure;
    check L56() else D13();
  D5():
    deopt 24 [c2, r11];
  D11():
    deopt 41 [r23];
  D13():
    deopt 50 [];
  L7(c13, r15, x13, r16):
    r18 = `==`(x13, r16);
    r19 = `||`(r15, r18);
    all = ldf all in base;
    r20 = dyn all(r19);
    check L44() else D9();
  L14(r32):
    c21 = `as.logical`(r32);
    if c21 then L63() else L15();
  L38():
    goto L6(c2, r11);
  L40():
    x14 = ld x;
    check L42() else D7();
  L41():
    r14 = dyn base4(<sym x>);
    goto L7(c10, r10, x10, r14);
  L50():
    goto L9(r23);
  L56():
    p = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    r28 = dyn structure[, class](p, "hexmode");
    check L57() else D14();
  L60():
    x22 = ld x;
    check L62() else D15();
  L61():
    r31 = dyn base7(<sym x>);
    goto L14(r31);
  D7():
    deopt 27 [c10, r10, x10, x14];
  D9():
    deopt 34 [c13, r20];
  D14():
    deopt 54 [r28];
  D15():
    deopt 59 [x22];
  L15():
    goto L20();
  L20():
    stop = ldf stop;
    check L80() else D24();
  L42():
    x15 = force? x14;
    checkMissing(x15);
    as_integer = ldf `as.integer` in base;
    r17 = dyn as_integer(x15);
    check L43() else D8();
  L44():
    goto L5(c13, r20);
  L57():
    popenv;
    return r28;
  L62():
    x23 = force? x22;
    checkMissing(x23);
    c20 = `is.character`(x23);
    goto L14(c20);
  L63():
    strtoi = ldf strtoi;
    check L64() else D16();
  D8():
    deopt 30 [c10, r10, x10, r17];
  D16():
    deopt 63 [];
  D24():
    deopt 95 [];
  L43():
    goto L7(c10, r10, x10, r17);
  L64():
    p1 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    r34 = dyn strtoi(p1, 16);
    check L65() else D17();
  L80():
    r49 = dyn stop("'x' cannot be coerced to class \"hexmode\"");
    check L81() else D25();
  D17():
    deopt 66 [r34];
  D25():
    deopt 97 [r49];
  L65():
    st z = r34;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L66() else L67();
  L81():
    popenv;
    return r49;
  L16(r36):
    r43 = `!`(r36);
    c22 = `as.logical`(r43);
    if c22 then L74() else L18();
  L66():
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L68() else L69();
  L67():
    r35 = dyn base8(<lang `|`(is.na(z), `<`(z, 0.0))>);
    goto L16(r35);
  L17(r38):
    z2 = ld z;
    check L72() else D20();
  L18():
    goto L20();
  L68():
    z = ld z;
    check L70() else D18();
  L69():
    r37 = dyn base9(<sym z>);
    goto L17(r37);
  L74():
    structure1 = ldf structure;
    check L75() else D22();
  D18():
    deopt 72 [z];
  D20():
    deopt 75 [r38, z2];
  D22():
    deopt 84 [];
  L70():
    z1 = force? z;
    checkMissing(z1);
    is_na1 = ldf `is.na` in base;
    r39 = dyn is_na1(z1);
    check L71() else D19();
  L72():
    z3 = force? z2;
    checkMissing(z3);
    r40 = `<`(z3, 0.0);
    r41 = `||`(r38, r40);
    any = ldf any in base;
    r42 = dyn any(r41);
    check L73() else D21();
  L75():
    p2 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r45 = dyn structure1[, class](p2, "hexmode");
    check L76() else D23();
  D19():
    deopt 75 [r39];
  D21():
    deopt 81 [r42];
  D23():
    deopt 88 [r45];
  L71():
    goto L17(r39);
  L73():
    goto L16(r42);
  L76():
    popenv;
    return r45;
  }
}