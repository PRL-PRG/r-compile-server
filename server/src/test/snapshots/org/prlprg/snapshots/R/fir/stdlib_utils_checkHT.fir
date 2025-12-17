fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner469955298;
    st checkHT = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner469955298(n, d) {
  (reg n:*, reg d:*) -+> V { var n:*, var d:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg length:cls, reg r2:V, reg len:*, reg len1:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c8:L, reg r7:V, reg n3:*, reg n4:V, reg is_na:cls, reg r8:V, reg all:cls, reg r9:V, reg c9:L, reg c10:V, reg c12:L, reg gettext:cls, reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg n5:*, reg n6:V, reg is_numeric:cls, reg r14:V, reg c13:L, reg c14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg c18:L, reg r16:V, reg n7:*, reg n8:V, reg c19:L, reg c20:L, reg c21:V, reg r17:V, reg c23:L, reg gettext1:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg d1:*, reg d2:V, reg c24:V, reg c25:L, reg c27:V, reg len2:*, reg len3:V, reg r21:V, reg c28:L, reg c29:V, reg c31:L, reg gettextf:cls, reg len4:*, reg len5:V, reg p:p(V +), reg r23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg d3:*, reg d4:V, reg c32:V, reg r26:V, reg c33:L, reg c35:V, reg len6:*, reg len7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg c38:L, reg len10:V, reg r28:V, reg d5:*, reg d6:V, reg length1:cls, reg r29:V, reg r30:V, reg c39:L, reg c40:V, reg c42:L, reg gettextf1:cls, reg len11:*, reg len12:V, reg p1:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg d7:*, reg d8:V, reg length2:cls, reg r34:V, reg p2:p(V +), reg r36:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg invisible:cls, reg r39:V, reg stop:cls, reg simpleError:cls, reg msg:*, reg msg1:V, reg p3:p(V +), reg sys_call:cls, reg p4:p(V +), reg r42:V, reg p5:p(V +), reg r44:V, reg p6:p(V +), reg r46:V |
    mkenv;
    st n = n;
    st d = d;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r1):
    st len = r1;
    len = ld len;
    check L22() else D2();
  L18():
    n1 = ld n;
    check L20() else D0();
  L19():
    r = dyn base(<sym n>);
    goto L0(r);
  D0():
    deopt 2 [n1];
  D2():
    deopt 7 [len];
  L20():
    n2 = force? n1;
    checkMissing(n2);
    length = ldf length in base;
    r2 = dyn length(n2);
    check L21() else D1();
  L22():
    len1 = force? len;
    checkMissing(len1);
    r3 = `==`(len1, 0.0);
    c = `as.logical`(r3);
    if c then L1(c) else L23();
  D1():
    deopt 5 [r2];
  L1(c1):
    c12 = `as.logical`(c1);
    if c12 then L32() else L4();
  L21():
    goto L0(r2);
  L23():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L2(c5, r5):
    c9 = `as.logical`(r5);
    c10 = `||`(c5, c9);
    goto L1(c10);
  L4():
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L5(r11):
    st msg = r11;
    stop = ldf stop;
    check L77() else D24();
  L24():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L25():
    r4 = dyn base1(<lang is.na(n)>);
    goto L2(c, r4);
  L32():
    gettext = ldf gettext;
    check L33() else D6();
  D6():
    deopt 23 [];
  D24():
    deopt 83 [];
  L3(c8, r7):
    all = ldf all in base;
    r9 = dyn all(r7);
    check L30() else D5();
  L6(r13):
    c13 = `as.logical`(r13);
    if c13 then L7(c13) else L40();
  L26():
    n3 = ld n;
    check L28() else D3();
  L27():
    r6 = dyn base2(<sym n>);
    goto L3(c, r6);
  L33():
    r10 = dyn gettext("invalid 'n' - must contain at least one non-missing element, got none.");
    check L34() else D7();
  L36():
    n5 = ld n;
    check L38() else D8();
  L37():
    r12 = dyn base3(<sym n>);
    goto L6(r12);
  L77():
    p6 = prom<V +>{
      simpleError = ldf simpleError;
      p3 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p5 = prom<V +>{
        sys_call = ldf `sys.call`;
        p4 = prom<V +>{
          return -1;
        };
        r42 = dyn sys_call(p4);
        return r42;
      };
      r44 = dyn simpleError[, call](p3, p5);
      return r44;
    };
    r46 = dyn stop(p6);
    check L78() else D25();
  D3():
    deopt 15 [c, n3];
  D5():
    deopt 20 [c8, r9];
  D7():
    deopt 25 [r10];
  D8():
    deopt 28 [n5];
  D25():
    deopt 85 [r46];
  L7(c14):
    r17 = `!`(c14);
    c23 = `as.logical`(r17);
    if c23 then L45() else L9();
  L28():
    n4 = force? n3;
    checkMissing(n4);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(n4);
    check L29() else D4();
  L30():
    goto L2(c8, r9);
  L34():
    goto L5(r10);
  L38():
    n6 = force? n5;
    checkMissing(n6);
    is_numeric = ldf `is.numeric` in base;
    r14 = dyn is_numeric(n6);
    check L39() else D9();
  L40():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L78():
    popenv;
    return r46;
  D4():
    deopt 18 [c, r8];
  D9():
    deopt 31 [r14];
  L8(c18, r16):
    c20 = `as.logical`(r16);
    c21 = `||`(c18, c20);
    goto L7(c21);
  L9():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L29():
    goto L3(c, r8);
  L39():
    goto L6(r14);
  L41():
    n7 = ld n;
    check L43() else D10();
  L42():
    r15 = dyn base4(<sym n>);
    goto L8(c13, r15);
  L45():
    gettext1 = ldf gettext;
    check L46() else D11();
  D10():
    deopt 33 [c13, n7];
  D11():
    deopt 39 [];
  L10(r20):
    c25 = `as.logical`(r20);
    if c25 then L52() else L11(c25);
  L43():
    n8 = force? n7;
    checkMissing(n8);
    c19 = `is.logical`(n8);
    goto L8(c13, c19);
  L46():
    r18 = dyn gettext1("invalid 'n' - must be numeric, possibly NA.");
    check L47() else D12();
  L49():
    d1 = ld d;
    check L51() else D13();
  L50():
    r19 = dyn base5(<sym d>);
    goto L10(r19);
  D12():
    deopt 41 [r18];
  D13():
    deopt 43 [d1];
  L11(c27):
    c31 = `as.logical`(c27);
    if c31 then L55() else L12();
  L47():
    goto L5(r18);
  L51():
    d2 = force? d1;
    checkMissing(d2);
    c24 = `==`(d2, NULL);
    goto L10(c24);
  L52():
    len2 = ld len;
    check L53() else D14();
  D14():
    deopt 46 [c25, len2];
  L12():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L53():
    len3 = force? len2;
    checkMissing(len3);
    r21 = `>`(len3, 1);
    c28 = `as.logical`(r21);
    c29 = `&&`(c25, c28);
    goto L11(c29);
  L55():
    gettextf = ldf gettextf;
    check L56() else D15();
  D15():
    deopt 52 [];
  L13(r25):
    r26 = `!`(r25);
    c33 = `as.logical`(r26);
    if c33 then L62() else L14(c33);
  L56():
    p = prom<V +>{
      len4 = ld len;
      len5 = force? len4;
      checkMissing(len5);
      return len5;
    };
    r23 = dyn gettextf("invalid 'n' - must have length one when dim(x) is NULL, got %d", p);
    check L57() else D16();
  L59():
    d3 = ld d;
    check L61() else D17();
  L60():
    r24 = dyn base6(<sym d>);
    goto L13(r24);
  D16():
    deopt 55 [r23];
  D17():
    deopt 57 [d3];
  L14(c35):
    c42 = `as.logical`(c35);
    if c42 then L69() else L16();
  L57():
    goto L5(r23);
  L61():
    d4 = force? d3;
    checkMissing(d4);
    c32 = `==`(d4, NULL);
    goto L13(c32);
  L62():
    len6 = ld len;
    check L63() else D18();
  D18():
    deopt 61 [c33, len6];
  L16():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L73() else L74();
  L63():
    len7 = force? len6;
    checkMissing(len7);
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  L69():
    gettextf1 = ldf gettextf;
    check L70() else D21();
  D21():
    deopt 71 [];
  L15(c38, len10, r28):
    r30 = `>`(len10, r28);
    c39 = `as.logical`(r30);
    c40 = `&&`(c38, c39);
    goto L14(c40);
  L17(r38):
    popenv;
    return r38;
  L64():
    d5 = ld d;
    check L66() else D19();
  L65():
    r27 = dyn base7(<sym d>);
    goto L15(c33, len7, r27);
  L70():
    p1 = prom<V +>{
      len11 = ld len;
      len12 = force? len11;
      checkMissing(len12);
      return len12;
    };
    p2 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      d7 = ld d;
      d8 = force? d7;
      checkMissing(d8);
      length2 = ldf length in base;
      r34 = dyn length2(d8);
      goto L0(r34);
    L2():
      r32 = dyn base8(<sym d>);
      goto L0(r32);
    };
    r36 = dyn gettextf1("invalid 'n' - length(n) must be <= length(dim(x)), got %d > %d", p1, p2);
    check L71() else D22();
  L73():
    invisible = ldf invisible in base;
    r39 = dyn invisible();
    check L75() else D23();
  L74():
    r37 = dyn base9();
    goto L17(r37);
  D19():
    deopt 64 [c33, len7, d5];
  D22():
    deopt 75 [r36];
  D23():
    deopt 79 [r39];
  L66():
    d6 = force? d5;
    checkMissing(d6);
    length1 = ldf length in base;
    r29 = dyn length1(d6);
    check L67() else D20();
  L71():
    goto L5(r36);
  L75():
    goto L17(r39);
  D20():
    deopt 67 [c33, len7, r29];
  L67():
    goto L15(c33, len7, r29);
  }
}