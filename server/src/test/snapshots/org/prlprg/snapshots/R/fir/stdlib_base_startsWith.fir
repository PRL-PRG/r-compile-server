fun main() {
  () -+> V { reg r:cls, reg startsWith:cls, reg search:cls, reg r1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg cbind:cls, reg startsWith1:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg startsWith2:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg startsWith3:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg endsWith:cls, reg x7:*, reg x8:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg endsWith1:cls, reg x9:*, reg x10:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V, reg x11:*, reg x12:V, reg l:*, reg rownames__:cls, reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg c1:cls, reg r26:V, reg l1:*, reg colnames__:cls, reg r27:V, reg x13:*, reg x14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg c2:cls, reg r30:V, reg cbind1:cls, reg startsWith4:cls, reg x15:*, reg x16:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg substring:cls, reg x17:*, reg x18:V, reg p13:p(V +), reg r35:V, reg r36:V, reg p14:p(V +), reg grepl:cls, reg x19:*, reg x20:V, reg p15:p(V +), reg r39:V, reg p16:p(V +), reg r41:V |
    mkenv;
    r = clos `inner-1792221317`;
    st startsWith = r;
    startsWith = ldf startsWith;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      search = ldf search;
      r1 = dyn search();
      return r1;
    };
    r3 = dyn startsWith(p, "package:");
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r5):
    st x1 = r5;
    cbind = ldf cbind;
    check L8() else D3();
  L5():
    c = ldf c in base;
    r6 = dyn c("Foobar", "bla bla", "something", "another", "blu", "brown", "blau bl\u00fcht der Enzian");
    check L7() else D2();
  L6():
    r4 = dyn base("Foobar", "bla bla", "something", "another", "blu", "brown", "blau bl\u00fcht der Enzian");
    goto L0(r4);
  D2():
    deopt 18 [r6];
  D3():
    deopt 21 [];
  L7():
    goto L0(r6);
  L8():
    p2 = prom<V +>{
      startsWith1 = ldf startsWith;
      p1 = prom<V +>{
        x1 = ld x1;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r8 = dyn startsWith1(p1, "b");
      return r8;
    };
    p4 = prom<V +>{
      startsWith2 = ldf startsWith;
      p3 = prom<V +>{
        x3 = ld x1;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r11 = dyn startsWith2(p3, "bl");
      return r11;
    };
    p6 = prom<V +>{
      startsWith3 = ldf startsWith;
      p5 = prom<V +>{
        x5 = ld x1;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r14 = dyn startsWith3(p5, "bla");
      return r14;
    };
    p8 = prom<V +>{
      endsWith = ldf endsWith;
      p7 = prom<V +>{
        x7 = ld x1;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r17 = dyn endsWith(p7, "n");
      return r17;
    };
    p10 = prom<V +>{
      endsWith1 = ldf endsWith;
      p9 = prom<V +>{
        x9 = ld x1;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r20 = dyn endsWith1(p9, "an");
      return r20;
    };
    r22 = dyn cbind(p2, p4, p6, p8, p10);
    check L9() else D4();
  D4():
    deopt 27 [r22];
  L9():
    st x2 = r22;
    x11 = ld x1;
    check L10() else D5();
  D5():
    deopt 29 [x11];
  L10():
    x12 = force? x11;
    checkMissing(x12);
    l = ld x2;
    rownames__ = ldf `rownames<-`;
    check L11() else D6();
  D6():
    deopt 32 [x12, l, x12];
  L11():
    r23 = dyn rownames__(l, NULL, x12);
    check L12() else D7();
  D7():
    deopt 34 [x12, r23];
  L12():
    st x2 = r23;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L1(r25):
    l1 = ld x2;
    colnames__ = ldf `colnames<-`;
    check L16() else D9();
  L13():
    c1 = ldf c in base;
    r26 = dyn c1("b", "b1", "bla", "n", "an");
    check L15() else D8();
  L14():
    r24 = dyn base1("b", "b1", "bla", "n", "an");
    goto L1(r24);
  D8():
    deopt 44 [r26];
  D9():
    deopt 46 [r25, l1, r25];
  L15():
    goto L1(r26);
  L16():
    r27 = dyn colnames__(l1, NULL, r25);
    check L17() else D10();
  D10():
    deopt 48 [r25, r27];
  L17():
    st x2 = r27;
    x13 = ld x2;
    check L18() else D11();
  D11():
    deopt 50 [x13];
  L18():
    x14 = force? x13;
    checkMissing(x14);
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L2(r29):
    st x = r29;
    cbind1 = ldf cbind;
    check L22() else D13();
  L19():
    c2 = ldf c in base;
    r30 = dyn c2("all", "but", NA_STR);
    check L21() else D12();
  L20():
    r28 = dyn base2("all", "but", NA_STR);
    goto L2(r28);
  D12():
    deopt 58 [r30];
  D13():
    deopt 61 [];
  L21():
    goto L2(r30);
  L22():
    p12 = prom<V +>{
      startsWith4 = ldf startsWith;
      p11 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r32 = dyn startsWith4(p11, "a");
      return r32;
    };
    p14 = prom<V +>{
      substring = ldf substring;
      p13 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      r35 = dyn substring(p13, 1, 1);
      r36 = `==`(r35, "a");
      return r36;
    };
    p16 = prom<V +>{
      grepl = ldf grepl;
      p15 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r39 = dyn grepl("^a", p15);
      return r39;
    };
    r41 = dyn cbind1(p12, p14, p16);
    check L23() else D14();
  D14():
    deopt 65 [r41];
  L23():
    popenv;
    return r41;
  }
}
fun `inner-1792221317`(x, prefix) {
  (reg x:*, reg prefix:*) -+> V { var x:*, var prefix:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg prefix1:*, reg prefix2:V, reg startsWith:cls, reg r2:V |
    mkenv;
    st x = x;
    st prefix = prefix;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang startsWith(x, prefix)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    prefix1 = ld prefix;
    check L4() else D1();
  D1():
    deopt 4 [prefix1];
  L4():
    prefix2 = force? prefix1;
    checkMissing(prefix2);
    startsWith = ldf startsWith in base;
    r2 = dyn startsWith(x2, prefix2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}