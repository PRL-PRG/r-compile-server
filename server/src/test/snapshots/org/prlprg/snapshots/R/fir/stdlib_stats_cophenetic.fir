fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg dist:cls, reg USArrests:*, reg USArrests1:V, reg p1:p(V +), reg r6:V, reg hclust:cls, reg d1:*, reg d2:V, reg p2:p(V +), reg r8:V, reg cophenetic:cls, reg hc:*, reg hc1:V, reg p3:p(V +), reg r10:V, reg cor:cls, reg d3:*, reg d4:V, reg p4:p(V +), reg d5:*, reg d6:V, reg p5:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg c:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg list:cls, reg r19:V, reg l:*, reg attributes__:cls, reg r20:V, reg l1:*, reg class__:cls, reg r21:V, reg letters:*, reg letters1:V, reg c1:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r22:V, reg l2:*, reg names__:cls, reg r23:V, reg d7:*, reg d8:V, reg __1:cls, reg r24:V, reg r25:cls, reg hclust1:cls, reg d9:*, reg d10:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:V, reg plot:cls, reg upgma:*, reg upgma1:V, reg p8:p(V +), reg p9:p(V +), reg r32:V, reg cophenetic1:cls, reg upgma2:*, reg upgma3:V, reg p10:p(V +), reg r34:V, reg cor1:cls, reg d11:*, reg d12:V, reg p11:p(V +), reg d_coph:*, reg d_coph1:V, reg p12:p(V +), reg r37:V |
    mkenv;
    r = clos inner2501545716;
    st cophenetic = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    dist = ldf dist;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    p1 = prom<V +>{
      USArrests = ld USArrests;
      USArrests1 = force? USArrests;
      checkMissing(USArrests1);
      return USArrests1;
    };
    r6 = dyn dist(p1);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L7():
    goto L0();
  L9():
    st d1 = r6;
    hclust = ldf hclust;
    check L10() else D4();
  D4():
    deopt 14 [];
  L10():
    p2 = prom<V +>{
      d1 = ld d1;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    r8 = dyn hclust(p2, "ave");
    check L11() else D5();
  D5():
    deopt 17 [r8];
  L11():
    st hc = r8;
    cophenetic = ldf cophenetic;
    check L12() else D6();
  D6():
    deopt 20 [];
  L12():
    p3 = prom<V +>{
      hc = ld hc;
      hc1 = force? hc;
      checkMissing(hc1);
      return hc1;
    };
    r10 = dyn cophenetic(p3);
    check L13() else D7();
  D7():
    deopt 22 [r10];
  L13():
    st d2 = r10;
    cor = ldf cor;
    check L14() else D8();
  D8():
    deopt 25 [];
  L14():
    p4 = prom<V +>{
      d3 = ld d1;
      d4 = force? d3;
      checkMissing(d4);
      return d4;
    };
    p5 = prom<V +>{
      d5 = ld d2;
      d6 = force? d5;
      checkMissing(d6);
      return d6;
    };
    r13 = dyn cor(p4, p5);
    check L15() else D9();
  D9():
    deopt 28 [r13];
  L15():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L1(r15):
    st d0 = r15;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L16():
    c = ldf c in base;
    r16 = dyn c(1.0, 3.8, 4.4, 5.1, 4.0, 4.2, 5.0, 2.6, 5.3, 5.4);
    check L18() else D10();
  L17():
    r14 = dyn base1(1.0, 3.8, 4.4, 5.1, 4.0, 4.2, 5.0, 2.6, 5.3, 5.4);
    goto L1(r14);
  D10():
    deopt 42 [r16];
  L2(r18):
    l = ld d0;
    attributes__ = ldf `attributes<-`;
    check L22() else D12();
  L18():
    goto L1(r16);
  L19():
    list = ldf list in base;
    r19 = dyn list(5.0, TRUE);
    check L21() else D11();
  L20():
    r17 = dyn base2[Size, diag](5.0, TRUE);
    goto L2(r17);
  D11():
    deopt 51 [r19];
  D12():
    deopt 53 [r18, l, r18];
  L21():
    goto L2(r19);
  L22():
    r20 = dyn attributes__(l, NULL, r18);
    check L23() else D13();
  D13():
    deopt 55 [r18, r20];
  L23():
    st d0 = r20;
    l1 = ld d0;
    class__ = ldf `class<-`;
    check L24() else D14();
  D14():
    deopt 60 ["dist", l1, "dist"];
  L24():
    r21 = dyn class__(l1, NULL, "dist");
    check L25() else D15();
  D15():
    deopt 62 ["dist", r21];
  L25():
    st d0 = r21;
    letters = ld letters;
    check L26() else D16();
  D16():
    deopt 64 [letters];
  L26():
    letters1 = force? letters;
    checkMissing(letters1);
    c1 = `is.object`(letters1);
    if c1 then L27() else L28(letters1);
  L3(dx1):
    l2 = ld d0;
    names__ = ldf `names<-`;
    check L30() else D17();
  L27():
    dr = tryDispatchBuiltin.1("[", letters1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(letters3):
    __ = ldf `[` in base;
    r22 = dyn __(letters3, <int 1, 2, 3, 4, 5>);
    goto L3(r22);
  D17():
    deopt 70 [dx1, l2, dx1];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L30():
    r23 = dyn names__(l2, NULL, dx1);
    check L31() else D18();
  D18():
    deopt 72 [dx1, r23];
  L31():
    st d0 = r23;
    d7 = ld d0;
    check L32() else D19();
  D19():
    deopt 74 [d7];
  L32():
    d8 = force? d7;
    checkMissing(d8);
    __1 = ldf `::`;
    check L33() else D20();
  D20():
    deopt 77 [];
  L33():
    r24 = dyn __1("utils", "str");
    check L34() else D21();
  D21():
    deopt 80 [r24];
  L34():
    checkFun.0(r24);
    r25 = r24 as cls;
    p7 = prom<V +>{
      hclust1 = ldf hclust;
      p6 = prom<V +>{
        d9 = ld d0;
        d10 = force? d9;
        checkMissing(d10);
        return d10;
      };
      r27 = dyn hclust1[, method](p6, "average");
      st upgma = r27;
      invisible.0();
      return r27;
    };
    r29 = dyn r25(p7);
    check L35() else D22();
  D22():
    deopt 83 [r29];
  L35():
    plot = ldf plot;
    check L36() else D23();
  D23():
    deopt 85 [];
  L36():
    p8 = prom<V +>{
      upgma = ld upgma;
      upgma1 = force? upgma;
      checkMissing(upgma1);
      return upgma1;
    };
    p9 = prom<V +>{
      return -1.0;
    };
    r32 = dyn plot[, hang](p8, p9);
    check L37() else D24();
  D24():
    deopt 89 [r32];
  L37():
    cophenetic1 = ldf cophenetic;
    check L38() else D25();
  D25():
    deopt 91 [];
  L38():
    p10 = prom<V +>{
      upgma2 = ld upgma;
      upgma3 = force? upgma2;
      checkMissing(upgma3);
      return upgma3;
    };
    r34 = dyn cophenetic1(p10);
    check L39() else D26();
  D26():
    deopt 93 [r34];
  L39():
    st `d.coph` = r34;
    cor1 = ldf cor;
    check L40() else D27();
  D27():
    deopt 96 [];
  L40():
    p11 = prom<V +>{
      d11 = ld d0;
      d12 = force? d11;
      checkMissing(d12);
      return d12;
    };
    p12 = prom<V +>{
      d_coph = ld `d.coph`;
      d_coph1 = force? d_coph;
      checkMissing(d_coph1);
      return d_coph1;
    };
    r37 = dyn cor1(p11, p12);
    check L41() else D28();
  D28():
    deopt 99 [r37];
  L41():
    popenv;
    return r37;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("cophenetic");
    goto L0(r2);
  L2():
    r = dyn base("cophenetic");
    goto L0(r);
  }
}