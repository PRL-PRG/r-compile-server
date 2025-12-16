fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner582405368;
    st `c.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner582405368(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg unlist:cls, reg x:*, reg x1:V, reg p:p(V +), reg recursive1:*, reg recursive2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg y:*, reg y1:V, reg inherits:cls, reg r8:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c5:L, reg r10:V, reg vapply:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg inherits1:*, reg inherits2:V, reg p3:p(V +), reg r13:V, reg all:cls, reg r14:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c14:L, reg r16:V, reg unique:cls, reg lapply:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg levels:*, reg levels1:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg length:cls, reg r22:V, reg r23:V, reg c15:L, reg c16:V, reg c18:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg c19:cls, reg r26:V, reg l:*, reg class__:cls, reg r27:V, reg y2:*, reg y3:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(TRUE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    st x = r1;
    unlist = ldf unlist;
    check L14() else D2();
  L10():
    list = ldf list;
    check L12() else D0();
  L11():
    r = dyn base(<sym ...>);
    goto L1(r);
  D0():
    deopt 2 [];
  D2():
    deopt 7 [];
  L12():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L13() else D1();
  L14():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r5 = dyn unlist[, recursive](p, p1);
    check L15() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 11 [r5];
  L13():
    goto L1(r2);
  L15():
    st y = r5;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L2(r7):
    c = `as.logical`(r7);
    if c then L20() else L3(c);
  L16():
    y = ld y;
    check L18() else D4();
  L17():
    r6 = dyn base1(<sym y>, "factor");
    goto L2(r6);
  D4():
    deopt 15 [y];
  L3(c2):
    c9 = `as.logical`(c2);
    if c9 then L27() else L5(c9);
  L18():
    y1 = force? y;
    checkMissing(y1);
    inherits = ldf inherits in base;
    r8 = dyn inherits(y1, "factor", FALSE);
    check L19() else D5();
  L20():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D5():
    deopt 20 [r8];
  L4(c5, r10):
    c6 = `as.logical`(r10);
    c7 = `&&`(c5, c6);
    goto L3(c7);
  L5(c11):
    c18 = `as.logical`(c11);
    if c18 then L34() else L7();
  L19():
    goto L2(r8);
  L21():
    vapply = ldf vapply;
    check L23() else D6();
  L22():
    r9 = dyn base2(<lang vapply(x, inherits, NA_LGL, "ordered")>);
    goto L4(c, r9);
  L27():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  D6():
    deopt 24 [c];
  L6(c14, r16):
    r23 = `==`(r16, 1);
    c15 = `as.logical`(r23);
    c16 = `&&`(c14, c15);
    goto L5(c16);
  L7():
    goto L9();
  L9():
    y2 = ld y;
    check L41() else D15();
  L23():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      inherits1 = ld inherits;
      inherits2 = force? inherits1;
      checkMissing(inherits2);
      return inherits2;
    };
    r13 = dyn vapply(p2, p3, NA_LGL, "ordered");
    check L24() else D7();
  L28():
    unique = ldf unique;
    check L30() else D9();
  L29():
    r15 = dyn base3(<lang unique(lapply(x, levels))>);
    goto L6(c9, r15);
  L34():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  D7():
    deopt 29 [c, r13];
  D9():
    deopt 36 [c9];
  D15():
    deopt 57 [y2];
  L8(r25):
    l = ld y;
    class__ = ldf `class<-`;
    check L38() else D13();
  L24():
    all = ldf all in base;
    r14 = dyn all(r13);
    check L25() else D8();
  L30():
    p6 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p5 = prom<V +>{
        levels = ld levels;
        levels1 = force? levels;
        checkMissing(levels1);
        return levels1;
      };
      r19 = dyn lapply(p4, p5);
      return r19;
    };
    r21 = dyn unique(p6);
    check L31() else D10();
  L35():
    c19 = ldf c in base;
    r26 = dyn c19("ordered", "factor");
    check L37() else D12();
  L36():
    r24 = dyn base4("ordered", "factor");
    goto L8(r24);
  L41():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D8():
    deopt 31 [c, r14];
  D10():
    deopt 38 [c9, r21];
  D12():
    deopt 49 [r26];
  D13():
    deopt 51 [r25, l, r25];
  L25():
    goto L4(c, r14);
  L31():
    length = ldf length in base;
    r22 = dyn length(r21);
    check L32() else D11();
  L37():
    goto L8(r26);
  L38():
    r27 = dyn class__(l, NULL, r25);
    check L39() else D14();
  D11():
    deopt 40 [c9, r22];
  D14():
    deopt 53 [r25, r27];
  L32():
    goto L6(c9, r22);
  L39():
    st y = r27;
    goto L9();
  }
}